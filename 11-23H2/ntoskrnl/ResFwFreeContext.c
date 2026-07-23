/*
 * XREFs of ResFwFreeContext @ 0x140AF1EE4
 * Callers:
 *     BgFreeContext @ 0x140AF1238 (BgFreeContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x1402EC240 (MmFreePagesFromMdl.c)
 *     BgpFwFreeMemory @ 0x140386280 (BgpFwFreeMemory.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     LogFwReport @ 0x140AEC0F4 (LogFwReport.c)
 *     AnFwFadeCompletion @ 0x140AECFB8 (AnFwFadeCompletion.c)
 *     RaspClearCache @ 0x140AED540 (RaspClearCache.c)
 *     BgpGxRectangleDestroy @ 0x140AEDA70 (BgpGxRectangleDestroy.c)
 *     ResFwpPageOutBackground @ 0x140AEEBF0 (ResFwpPageOutBackground.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140AEF6DC (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpFwReservePoolSwap @ 0x140AF1E48 (BgpFwReservePoolSwap.c)
 */

void __fastcall ResFwFreeContext(__int64 a1)
{
  struct _MDL *v2; // rcx
  _UNKNOWN **v3; // rbx
  __int64 v4; // rax

  if ( (dword_140C0E4B0 & 0x100000) != 0 )
  {
    v3 = (_UNKNOWN **)TxtpTextCache;
    v4 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_6:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_UNKNOWN ***)(v4 + 8) != v3 )
        goto LABEL_6;
      TxtpTextCache = (_UNKNOWN *)v4;
      *(_QWORD *)(v4 + 8) = &TxtpTextCache;
      if ( v3 == &TxtpTextCache )
        break;
      BgpGxRectangleDestroy((__int64)v3[6]);
      BgpFwFreeMemory((__int64)v3);
      v3 = (_UNKNOWN **)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
        goto LABEL_6;
      v4 = *(_QWORD *)TxtpTextCache;
    }
    dword_140C043D8 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
    AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    LogFwReport();
    if ( *(_QWORD *)(a1 + 16) )
    {
      BgpFwReservePoolSwap(1, 0LL, 0, 0LL);
      MmFreePagesFromMdl(*(PMDL *)(a1 + 8));
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
    dword_140C0E4B0 &= 0xFFEFF7FD;
    qword_140C0E570 = BgpAnimationRegionSave;
    qword_140C0E578 = BgpTextRegionSave;
    qword_140C0E460 = 0LL;
    BgInternal = 0LL;
    xmmword_140C0E450 = 0LL;
    ResFwpPageOutBackground();
  }
  else
  {
    v2 = *(struct _MDL **)(a1 + 8);
    if ( v2 )
    {
      MmFreePagesFromMdl(v2);
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
  }
}
