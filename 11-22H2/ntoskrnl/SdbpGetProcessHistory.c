/*
 * XREFs of SdbpGetProcessHistory @ 0x140A51E98
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x140A51430 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D330 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     _wcsnicmp @ 0x1403D9530 (_wcsnicmp.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     RtlGetNtSystemRoot @ 0x140695E40 (RtlGetNtSystemRoot.c)
 *     AslAlloc @ 0x1407589A8 (AslAlloc.c)
 */

_WORD *__fastcall SdbpGetProcessHistory(char *a1, _WORD *a2, _WORD *a3)
{
  unsigned __int64 v3; // rsi
  char *v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r13
  char *v7; // rdi
  __int64 v8; // rcx
  PWSTR NtSystemRoot; // rax
  __int64 v10; // rcx
  char *v11; // r11
  const wchar_t *v12; // r10
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v14; // dx
  _QWORD *v15; // rax
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // ax
  __int16 v18; // r9
  int v19; // r8d
  char *v20; // rdx
  int v21; // ebp
  __int64 v22; // r15
  size_t v23; // r15
  _WORD *v24; // rdi
  _WORD *v25; // r14
  _WORD *result; // rax
  size_t v27; // r15
  PWSTR v28; // rax
  __int64 v29; // rbx
  char *v30; // r11
  const wchar_t *v31; // r10
  _QWORD *v32; // rax
  unsigned __int16 v33; // dx
  _QWORD *v34; // rax
  unsigned __int16 v35; // dx
  unsigned __int16 v36; // ax
  __int16 v37; // r9
  int v38; // r8d
  char *v39; // rdx
  __int64 v40; // rcx
  _WORD *v41; // rdi
  _BYTE *v42; // rdx
  _WORD *v43; // rax
  _WORD *v44; // rdi

  v3 = -1LL;
  v4 = a1;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v6 = -1LL;
  do
    ++v6;
  while ( a3[v6] );
  v7 = a1;
  if ( wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    if ( v4 && *(_WORD *)v4 )
    {
      do
      {
        v11 = v7;
        v12 = L"__PROCESS_HISTORY";
        do
        {
          if ( !*(_WORD *)v7 )
            break;
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          NLS_UPCASE(CurrentServerSiloGlobals[154], v14);
          v15 = PsGetCurrentServerSiloGlobals();
          v17 = NLS_UPCASE(v15[154], v16);
          if ( v18 != v17 )
            break;
          v7 += 2;
          ++v12;
        }
        while ( v12 < L"" );
        if ( v12 == L"" && *(_WORD *)v7 == 61 )
        {
          v19 = 1;
LABEL_18:
          v20 = v7;
          if ( *(_WORD *)v7 )
          {
            v8 = 0LL;
            do
            {
              if ( (__int64)(v8 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
                break;
              v7 += 2;
              v8 += 2LL;
            }
            while ( *(_WORD *)v7 );
          }
          if ( v19 )
          {
            v8 = ((v7 - (v20 + 2)) >> 1) + 1;
            goto LABEL_34;
          }
        }
        else
        {
          v19 = 0;
          while ( *(_WORD *)v7 )
          {
            if ( *(_WORD *)v7 == 61 && v7 != v11 )
              goto LABEL_18;
            v7 += 2;
          }
        }
        v7 += 2;
      }
      while ( *(_WORD *)v7 );
    }
    v21 = -1073741568;
    v22 = (unsigned int)(v5 + v6 + 1);
  }
  else
  {
    NtSystemRoot = RtlGetNtSystemRoot();
    v10 = -1LL;
    do
      ++v10;
    while ( NtSystemRoot[v10] );
    v8 = v10 + 1;
LABEL_34:
    v21 = -1073741789;
    v22 = v8 + (unsigned int)(v5 + v6 + 2);
  }
  v23 = 2 * v22;
  v24 = AslAlloc(v8, v23);
  v25 = v24;
  if ( !v24 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  *v24 = 0;
  if ( v21 != -1073741789 )
    goto LABEL_58;
  v27 = v23 >> 1;
  if ( !wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    v28 = RtlGetNtSystemRoot();
    do
      ++v3;
    while ( v28[v3] );
    if ( v3 >= v27 )
    {
      if ( v27 )
        *v24 = 0;
      goto LABEL_58;
    }
    v29 = v3;
    memmove(v24, v28, 2 * v3);
    goto LABEL_69;
  }
  if ( !v4 || !*(_WORD *)v4 )
    goto LABEL_58;
  while ( 1 )
  {
    v30 = v4;
    v31 = L"__PROCESS_HISTORY";
    do
    {
      if ( !*(_WORD *)v4 )
        break;
      v32 = PsGetCurrentServerSiloGlobals();
      NLS_UPCASE(v32[154], v33);
      v34 = PsGetCurrentServerSiloGlobals();
      v36 = NLS_UPCASE(v34[154], v35);
      if ( v37 != v36 )
        break;
      v4 += 2;
      ++v31;
    }
    while ( v31 < L"" );
    v24 = v25;
    if ( v31 != L"" || *(_WORD *)v4 != 61 )
    {
      v38 = 0;
      while ( *(_WORD *)v4 )
      {
        if ( *(_WORD *)v4 == 61 && v4 != v30 )
          goto LABEL_52;
        v4 += 2;
      }
      goto LABEL_57;
    }
    v38 = 1;
LABEL_52:
    v39 = v4;
    if ( *(_WORD *)v4 )
    {
      v40 = 0LL;
      do
      {
        if ( (__int64)(v40 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
          break;
        v4 += 2;
        v40 += 2LL;
      }
      while ( *(_WORD *)v4 );
    }
    if ( v38 )
      break;
LABEL_57:
    v4 += 2;
    if ( !*(_WORD *)v4 )
      goto LABEL_58;
  }
  v42 = v39 + 2;
  v3 = (v4 - v42) >> 1;
  if ( v3 < v27 )
  {
    v29 = v3;
    memmove(v25, v42, 2 * v3);
LABEL_69:
    v25[v29] = 0;
    v43 = &v25[v3];
    v44 = v43 - 1;
    if ( *(v43 - 1) != 59 )
    {
      v44 = &v25[v3];
      *v43 = 59;
    }
    v24 = v44 + 1;
    goto LABEL_58;
  }
  if ( v27 )
    *v25 = 0;
LABEL_58:
  memmove(v24, a2, 2LL * (unsigned int)v5);
  v41 = &v24[(unsigned int)v5];
  memmove(v41, a3, 2LL * (unsigned int)v6);
  result = v25;
  v41[(unsigned int)v6] = 0;
  return result;
}
