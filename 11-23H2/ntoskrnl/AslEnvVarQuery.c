/*
 * XREFs of AslEnvVarQuery @ 0x140A577FC
 * Callers:
 *     AslEnvExpandStrings @ 0x140A56F9C (AslEnvExpandStrings.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D420 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     _wcsnicmp @ 0x1403D9D70 (_wcsnicmp.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     RtlGetNtSystemRoot @ 0x140695E40 (RtlGetNtSystemRoot.c)
 */

__int64 __fastcall AslEnvVarQuery(
        char *a1,
        const wchar_t *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // edi
  const wchar_t *v7; // rbp
  PWSTR NtSystemRoot; // rax
  PWSTR v12; // rdx
  unsigned __int64 v13; // rbx
  size_t v14; // rbx
  char *v16; // r11
  const wchar_t *v17; // r10
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v19; // dx
  _QWORD *v20; // rax
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // ax
  __int16 v23; // r9
  int v24; // r8d
  char *v25; // rdx
  __int64 v26; // rcx

  v6 = 0;
  v7 = &a2[a3];
  if ( a3 < 0xA || wcsnicmp(a2, L"systemroot", 0xAuLL) )
  {
    if ( !a1 )
      return (unsigned int)-1073741568;
    while ( 1 )
    {
      if ( !*(_WORD *)a1 )
        return (unsigned int)-1073741568;
      v16 = a1;
      v17 = a2;
      if ( a2 < v7 )
        break;
LABEL_18:
      if ( v17 != v7 || *(_WORD *)a1 != 61 )
        goto LABEL_29;
      v24 = 1;
LABEL_21:
      v25 = a1;
      if ( *(_WORD *)a1 )
      {
        v26 = 0LL;
        do
        {
          if ( (__int64)(v26 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
            break;
          a1 += 2;
          v26 += 2LL;
        }
        while ( *(_WORD *)a1 );
      }
      if ( v24 )
      {
        v12 = (PWSTR)(v25 + 2);
        v13 = (a1 - (char *)v12) >> 1;
        goto LABEL_5;
      }
LABEL_26:
      a1 += 2;
    }
    while ( *(_WORD *)a1 )
    {
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      NLS_UPCASE(CurrentServerSiloGlobals[154], v19);
      v20 = PsGetCurrentServerSiloGlobals();
      v22 = NLS_UPCASE(v20[154], v21);
      if ( v23 == v22 )
      {
        a1 += 2;
        if ( ++v17 < v7 )
          continue;
      }
      goto LABEL_18;
    }
LABEL_29:
    v24 = 0;
    while ( *(_WORD *)a1 )
    {
      if ( *(_WORD *)a1 == 61 && a1 != v16 )
        goto LABEL_21;
      a1 += 2;
    }
    goto LABEL_26;
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  v12 = NtSystemRoot;
  v13 = -1LL;
  do
    ++v13;
  while ( NtSystemRoot[v13] );
LABEL_5:
  if ( v13 < a5 )
  {
    *a6 = v13;
    v14 = v13;
    memmove(a4, v12, v14 * 2);
    a4[v14] = 0;
  }
  else
  {
    if ( a4 && a5 )
      *a4 = 0;
    v6 = -1073741789;
    *a6 = v13 + 1;
  }
  return v6;
}
