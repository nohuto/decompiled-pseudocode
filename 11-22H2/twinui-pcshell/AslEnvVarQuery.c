/*
 * XREFs of AslEnvVarQuery @ 0x1800EF7CC
 * Callers:
 *     AslEnvExpandStrings @ 0x1800EF658 (AslEnvExpandStrings.c)
 * Callees:
 *     RtlDownlevelGetNtSystemRoot @ 0x18016D080 (RtlDownlevelGetNtSystemRoot.c)
 *     _wcsnicmp @ 0x1801C744C (_wcsnicmp.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 */

__int64 __fastcall AslEnvVarQuery(
        WCHAR *a1,
        const wchar_t *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // edi
  WCHAR *v7; // rbp
  __int64 v11; // rcx
  WCHAR *v12; // r13
  WCHAR *v13; // r15
  WCHAR v14; // bx
  int v15; // r8d
  WCHAR *v16; // rdx
  __int64 v17; // rcx
  _BYTE *v18; // rdx
  unsigned __int64 v19; // rsi
  size_t v20; // rbx
  __int64 NtSystemRoot; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rcx

  v6 = 0;
  v7 = (WCHAR *)&a2[a3];
  if ( a3 < 0xA || wcsnicmp(a2, L"systemroot", 0xAuLL) )
  {
    if ( a1 )
    {
      while ( 1 )
      {
        if ( !*a1 )
          return (unsigned int)-1073741568;
        v12 = a1;
        v13 = (WCHAR *)a2;
        if ( a2 < v7 )
          break;
LABEL_9:
        if ( v13 != v7 || *a1 != 61 )
          goto LABEL_22;
        v15 = 1;
LABEL_13:
        v16 = a1;
        if ( *a1 )
        {
          v17 = 0LL;
          do
          {
            if ( (__int64)(v17 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
              break;
            ++a1;
            v17 += 2LL;
          }
          while ( *a1 );
        }
        if ( v15 )
        {
          v18 = v16 + 1;
          v19 = ((char *)a1 - v18) >> 1;
          if ( v19 < a5 )
          {
            v20 = v19;
            *a6 = v19;
            goto LABEL_20;
          }
          if ( a4 && a5 )
            *a4 = 0;
          v24 = v19 + 1;
          goto LABEL_35;
        }
LABEL_26:
        ++a1;
      }
      while ( *a1 )
      {
        v14 = RtlUpcaseUnicodeChar(*a1);
        if ( v14 == RtlUpcaseUnicodeChar(*v13) )
        {
          ++a1;
          if ( ++v13 < v7 )
            continue;
        }
        goto LABEL_9;
      }
LABEL_22:
      v15 = 0;
      while ( *a1 )
      {
        if ( *a1 == 61 && a1 != v12 )
          goto LABEL_13;
        ++a1;
      }
      goto LABEL_26;
    }
    return (unsigned int)-1073741568;
  }
  else
  {
    NtSystemRoot = RtlDownlevelGetNtSystemRoot(v11);
    v18 = (_BYTE *)NtSystemRoot;
    v23 = -1LL;
    do
      ++v23;
    while ( *(_WORD *)(NtSystemRoot + 2 * v23) );
    if ( v23 < a5 )
    {
      *a6 = v23;
      v20 = v23;
LABEL_20:
      memcpy_0(a4, v18, v20 * 2);
      a4[v20] = 0;
    }
    else
    {
      if ( a4 && a5 )
        *a4 = 0;
      v24 = v23 + 1;
LABEL_35:
      v6 = -1073741789;
      *a6 = v24;
    }
  }
  return v6;
}
