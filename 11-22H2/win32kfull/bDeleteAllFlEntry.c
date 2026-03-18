/*
 * XREFs of bDeleteAllFlEntry @ 0x1C0114C3C
 * Callers:
 *     GreEnableEUDC @ 0x1C008A748 (GreEnableEUDC.c)
 * Callees:
 *     vLinkEudcPFEs @ 0x1C00827D0 (vLinkEudcPFEs.c)
 *     ?IsConcurrentEUDCOperationInProgress@@YA_NAEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0089CBC (-IsConcurrentEUDCOperationInProgress@@YA_NAEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1C008AA18 (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C00A81E0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     bUnloadEudcFont @ 0x1C0114E84 (bUnloadEudcFont.c)
 */

__int64 __fastcall bDeleteAllFlEntry(__int64 a1)
{
  __int64 v1; // rbx
  Gre::Base *v2; // rcx
  _QWORD *v3; // rdi
  int v4; // r14d
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 *v7; // r11
  int v8; // r9d
  _QWORD *v9; // r8
  _QWORD *v10; // rdx
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  int v15; // eax
  _QWORD *v16; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rdi
  _QWORD *v19; // rcx
  __int128 v21; // xmm0
  _QWORD *v22; // [rsp+20h] [rbp-20h] BYREF
  _QWORD **v23; // [rsp+28h] [rbp-18h]
  __int128 v24; // [rsp+30h] [rbp-10h] BYREF

  v23 = &v22;
  v22 = &v22;
  v24 = 0LL;
  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  GreAcquireSemaphore(*(_QWORD *)(v1 + 13272));
  if ( IsConcurrentEUDCOperationInProgress((struct Gre::Full::SESSION_GLOBALS *)v1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
    GreReleaseSemaphoreInternal(*(_QWORD *)(v1 + 13272));
    return 0LL;
  }
  vUnlinkAllEudcRFONTsAndPFEs((Gre::Base *)1);
  vUnlinkAllEudcFromRFONTList(v2);
  if ( *(_QWORD *)(v1 + 13320) || *(_QWORD *)(v1 + 13328) )
  {
    v21 = *(_OWORD *)(v1 + 13320);
    *(_OWORD *)(v1 + 13320) = 0LL;
    ++*(_DWORD *)(v1 + 13896);
    v24 = v21;
    *(_WORD *)(v1 + 13336) = 0;
  }
  v3 = *(_QWORD **)(v1 + 13912);
  if ( v3 == (_QWORD *)(v1 + 13912) )
    goto LABEL_23;
  v4 = *(_DWORD *)(v1 + 13904);
  do
  {
    v5 = *v3;
    v6 = v3;
    v7 = v3;
    v8 = 0;
    v3 = (_QWORD *)*v3;
    v9 = (_QWORD *)v6[2];
    if ( v9 == v6 + 2 )
    {
LABEL_15:
      if ( *(_QWORD **)(v5 + 8) != v6 || (v14 = (_QWORD *)v6[1], (_QWORD *)*v14 != v6) )
LABEL_31:
        __fastfail(3u);
      *v14 = v5;
      *(_QWORD *)(v5 + 8) = v14;
      Win32FreePool(v6);
      --*(_DWORD *)(v1 + 13904);
      continue;
    }
    do
    {
      v10 = v9;
      v9 = (_QWORD *)*v9;
      v11 = *((_DWORD *)v10 + 4);
      if ( v11 )
      {
        if ( v11 != 1 || (*(_DWORD *)(v1 + 13312) & 8) == 0 )
        {
LABEL_36:
          ++v8;
          continue;
        }
      }
      else if ( (*(_DWORD *)(v1 + 13312) & 2) == 0 )
      {
        goto LABEL_36;
      }
      if ( (_QWORD *)v9[1] != v10 )
        goto LABEL_31;
      v12 = (_QWORD *)v10[1];
      if ( (_QWORD *)*v12 != v10 )
        goto LABEL_31;
      *v12 = v9;
      v9[1] = v12;
      v13 = v23;
      if ( *v23 != &v22 )
        goto LABEL_31;
      v10[1] = v23;
      *v10 = &v22;
      *v13 = v10;
      v23 = (_QWORD **)v10;
    }
    while ( v9 != v6 + 2 );
    v5 = *v7;
    if ( !v8 )
      goto LABEL_15;
    if ( *((_DWORD *)v6 + 25) != v8 )
    {
      ++*((_DWORD *)v6 + 26);
      *((_DWORD *)v6 + 25) = v8;
    }
  }
  while ( v3 != (_QWORD *)(v1 + 13912) );
  v15 = *(_DWORD *)(v1 + 13904);
  if ( v4 != v15 )
    ++*(_DWORD *)(v1 + 13900);
  if ( v15 )
    vLinkEudcPFEs(0LL);
LABEL_23:
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  GreReleaseSemaphoreInternal(*(_QWORD *)(v1 + 13272));
  if ( v24 != 0 )
    bUnloadEudcFont(&v24);
  v16 = v22;
  while ( v16 != &v22 )
  {
    v17 = *v16;
    v18 = v16;
    v16 = (_QWORD *)v17;
    if ( *(_QWORD **)(v17 + 8) != v18 )
      goto LABEL_31;
    v19 = (_QWORD *)v18[1];
    if ( (_QWORD *)*v19 != v18 )
      goto LABEL_31;
    *v19 = v17;
    *(_QWORD *)(v17 + 8) = v19;
    bUnloadEudcFont(v18 + 4);
    Win32FreePool(v18);
  }
  return 1LL;
}
