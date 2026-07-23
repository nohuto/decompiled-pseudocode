/*
 * XREFs of SbpUpdateCacheWithCurrentImpl @ 0x18002F400
 * Callers:
 *     SbSelectProcedure @ 0x18002F1C0 (SbSelectProcedure.c)
 * Callees:
 *     RtlGetVersion @ 0x18002F620 (RtlGetVersion.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     SbpResolveBasedOnName @ 0x1801286BC (SbpResolveBasedOnName.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall SbpUpdateCacheWithCurrentImpl(__int64 a1, __int64 a2)
{
  _WORD *v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int16 v7; // dx
  bool v8; // cf
  bool v9; // zf
  _QWORD *v10; // rbx
  _DWORD *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbp
  unsigned int v14; // r9d
  __int64 v15; // rdi
  unsigned int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  unsigned int v20; // eax
  unsigned int v22; // edi
  _DWORD *v23; // rcx
  __int64 v24; // rsi
  _OSVERSIONINFOEXW VersionInformation; // [rsp+20h] [rbp-168h] BYREF

  memset_thunk_772440563353939046(&VersionInformation, 0, 0x11CuLL);
  if ( RtlGetVersion(&VersionInformation) < 0 )
    return 0LL;
  v4 = &unk_180133396;
  v5 = 0LL;
  v6 = -1LL;
  while ( 1 )
  {
    v7 = *(v4 - 1);
    v8 = LOWORD(VersionInformation.dwMajorVersion) < v7;
    v9 = LOWORD(VersionInformation.dwMajorVersion) == v7;
    if ( LOWORD(VersionInformation.dwMajorVersion) <= v7 )
    {
      if ( LOWORD(VersionInformation.dwMajorVersion) != v7 )
        goto LABEL_37;
      if ( LOWORD(VersionInformation.dwMinorVersion) < *v4 )
        break;
    }
    v6 = v5;
LABEL_5:
    ++v5;
    v4 += 16;
    if ( v5 >= 5 )
      goto LABEL_6;
  }
  v8 = LOWORD(VersionInformation.dwMajorVersion) < v7;
  v9 = LOWORD(VersionInformation.dwMajorVersion) == v7;
LABEL_37:
  if ( !v8 && (!v9 || LOWORD(VersionInformation.dwMinorVersion) >= *v4) )
    goto LABEL_5;
LABEL_6:
  if ( v6 == -1 )
    v10 = &unk_180133384;
  else
    v10 = (_QWORD *)((char *)&unk_180133384 + 32 * v6);
  v11 = *(_DWORD **)(a2 + 24);
  v12 = 0LL;
  if ( !*v11 )
    return 1LL;
  while ( 1 )
  {
    v13 = *(_QWORD *)&v11[2 * v12 + 2];
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 68);
      v15 = 0LL;
      if ( v14 )
      {
        while ( 2 )
        {
          v16 = 0;
          v17 = 8 * v15;
          do
          {
            v18 = *(_QWORD *)(v13 + 16 * (v17 + v16) + 120) - *v10;
            if ( !v18 )
              v18 = *(_QWORD *)(v13 + 16 * (v17 + v16) + 128) - v10[1];
            if ( !v18 )
            {
              v19 = (unsigned __int64)(unsigned int)v15 << 7;
              if ( !*(_QWORD *)(v19 + v13 + 80) && *(_DWORD *)(v19 + v13 + 88) == 2 )
                *(_QWORD *)(v19 + v13 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v19 + v13 + 72));
              *(_QWORD *)(a1 + 8 * v12 + 16) = v19 + v13 + 72;
              goto LABEL_20;
            }
            ++v16;
          }
          while ( v16 < 4 );
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 < v14 )
            continue;
          break;
        }
      }
LABEL_20:
      v20 = *(_DWORD *)(v13 + 68);
      if ( (unsigned int)v15 >= v20 )
      {
        v22 = 0;
        if ( v20 )
        {
          v23 = (_DWORD *)(v13 + 104);
          while ( !*v23 )
          {
            ++v22;
            v23 += 32;
            if ( v22 >= v20 )
              goto LABEL_29;
          }
          v24 = v13 + ((unsigned __int64)v22 << 7);
          if ( !*(_QWORD *)(v24 + 80) && *(_DWORD *)(v24 + 88) == 2 )
            *(_QWORD *)(v24 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v24 + 72));
          *(_QWORD *)(a1 + 8 * v12 + 16) = v24 + 72;
        }
LABEL_29:
        if ( v22 >= *(_DWORD *)(v13 + 68) )
          return 0LL;
      }
    }
    v11 = *(_DWORD **)(a2 + 24);
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= *v11 )
      return 1LL;
  }
}
