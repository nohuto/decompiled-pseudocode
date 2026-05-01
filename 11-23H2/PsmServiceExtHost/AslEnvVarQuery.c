/*
 * XREFs of AslEnvVarQuery @ 0x1800A040C
 * Callers:
 *     SdbpGetProcessHistory @ 0x1800911E8 (SdbpGetProcessHistory.c)
 *     AslEnvExpandStrings @ 0x18009FC90 (AslEnvExpandStrings.c)
 * Callees:
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 *     RtlDownlevelGetNtSystemRoot @ 0x1800A1174 (RtlDownlevelGetNtSystemRoot.c)
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
  __int64 NtSystemRoot; // rax
  _BYTE *v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  size_t v15; // rbx
  WCHAR *v17; // r13
  WCHAR *v18; // r15
  WCHAR v19; // bx
  int v20; // r8d
  WCHAR *v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rsi

  v6 = 0;
  v7 = (WCHAR *)&a2[a3];
  if ( a3 < 0xA || _wcsnicmp(a2, L"systemroot", 0xAuLL) )
  {
    if ( !a1 )
      return (unsigned int)-1073741568;
    while ( 1 )
    {
      if ( !*a1 )
        return (unsigned int)-1073741568;
      v17 = a1;
      v18 = (WCHAR *)a2;
      if ( a2 < v7 )
        break;
LABEL_20:
      if ( v18 != v7 || *a1 != 61 )
        goto LABEL_31;
      v20 = 1;
LABEL_23:
      v21 = a1;
      if ( *a1 )
      {
        v22 = 0LL;
        do
        {
          if ( (__int64)(v22 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
            break;
          ++a1;
          v22 += 2LL;
        }
        while ( *a1 );
      }
      if ( v20 )
      {
        v12 = v21 + 1;
        v23 = ((char *)a1 - v12) >> 1;
        if ( v23 < a5 )
        {
          v15 = v23;
          *a6 = v23;
          goto LABEL_12;
        }
        if ( a4 && a5 )
          *a4 = 0;
        v14 = v23 + 1;
        goto LABEL_10;
      }
LABEL_28:
      ++a1;
    }
    while ( *a1 )
    {
      v19 = RtlUpcaseUnicodeChar(*a1);
      if ( v19 == RtlUpcaseUnicodeChar(*v18) )
      {
        ++a1;
        if ( ++v18 < v7 )
          continue;
      }
      goto LABEL_20;
    }
LABEL_31:
    v20 = 0;
    while ( *a1 )
    {
      if ( *a1 == 61 && a1 != v17 )
        goto LABEL_23;
      ++a1;
    }
    goto LABEL_28;
  }
  NtSystemRoot = RtlDownlevelGetNtSystemRoot();
  v12 = (_BYTE *)NtSystemRoot;
  v13 = -1LL;
  do
    ++v13;
  while ( *(_WORD *)(NtSystemRoot + 2 * v13) );
  if ( v13 < a5 )
  {
    *a6 = v13;
    v15 = v13;
LABEL_12:
    memcpy_0(a4, v12, v15 * 2);
    a4[v15] = 0;
  }
  else
  {
    if ( a4 && a5 )
      *a4 = 0;
    v14 = v13 + 1;
LABEL_10:
    v6 = -1073741789;
    *a6 = v14;
  }
  return v6;
}
