/*
 * XREFs of AslEnvVarQuery @ 0x1800A35BC
 * Callers:
 *     SdbpGetProcessHistory @ 0x1800963E8 (SdbpGetProcessHistory.c)
 *     AslEnvExpandStrings @ 0x1800A2E40 (AslEnvExpandStrings.c)
 * Callees:
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 *     RtlDownlevelGetNtSystemRoot @ 0x1800A69FC (RtlDownlevelGetNtSystemRoot.c)
 */

__int64 __fastcall AslEnvVarQuery(
        WCHAR *a1,
        const wchar_t *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  WCHAR *v6; // rbp
  unsigned int v7; // edi
  _WORD *NtSystemRoot; // rax
  unsigned __int64 v12; // rbx
  size_t v13; // rbx
  WCHAR *v15; // r13
  WCHAR *v16; // r15
  WCHAR v17; // bx
  int v18; // r8d
  WCHAR *v19; // rdx
  __int64 v20; // rcx
  _BYTE *v21; // rdx
  unsigned __int64 v22; // rsi

  v6 = (WCHAR *)&a2[a3];
  v7 = 0;
  if ( a3 < 0xA || _wcsnicmp(a2, L"systemroot", 0xAuLL) )
  {
    if ( !a1 )
      return (unsigned int)-1073741568;
    while ( 1 )
    {
      if ( !*a1 )
        return (unsigned int)-1073741568;
      v15 = a1;
      v16 = (WCHAR *)a2;
      if ( a2 < v6 )
        break;
LABEL_18:
      if ( v16 != v6 || *a1 != 61 )
        goto LABEL_29;
      v18 = 1;
LABEL_21:
      v19 = a1;
      if ( *a1 )
      {
        v20 = 0LL;
        do
        {
          if ( (__int64)(v20 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
            break;
          ++a1;
          v20 += 2LL;
        }
        while ( *a1 );
      }
      if ( v18 )
      {
        v21 = v19 + 1;
        v22 = ((char *)a1 - v21) >> 1;
        if ( v22 < a5 )
        {
          memcpy_0(a4, v21, 2 * v22);
          a4[v22] = 0;
        }
        else
        {
          if ( a4 && a5 )
            *a4 = 0;
          v7 = -1073741789;
          ++v22;
        }
        *a6 = v22;
        return v7;
      }
LABEL_26:
      ++a1;
    }
    while ( *a1 )
    {
      v17 = RtlUpcaseUnicodeChar(*a1);
      if ( v17 == RtlUpcaseUnicodeChar(*v16) )
      {
        ++a1;
        if ( ++v16 < v6 )
          continue;
      }
      goto LABEL_18;
    }
LABEL_29:
    v18 = 0;
    while ( *a1 )
    {
      if ( *a1 == 61 && a1 != v15 )
        goto LABEL_21;
      ++a1;
    }
    goto LABEL_26;
  }
  NtSystemRoot = (_WORD *)RtlDownlevelGetNtSystemRoot();
  v12 = -1LL;
  do
    ++v12;
  while ( NtSystemRoot[v12] );
  if ( v12 < a5 )
  {
    *a6 = v12;
    v13 = v12;
    memcpy_0(a4, NtSystemRoot, v13 * 2);
    a4[v13] = 0;
  }
  else
  {
    if ( a4 && a5 )
      *a4 = 0;
    v7 = -1073741789;
    *a6 = v12 + 1;
  }
  return v7;
}
