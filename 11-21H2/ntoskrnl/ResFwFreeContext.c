/*
 * XREFs of ResFwFreeContext @ 0x140AAB07C
 * Callers:
 *     BgFreeContext @ 0x140AAB038 (BgFreeContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     BgpFwReservePoolSwap @ 0x140AAB1AC (BgpFwReservePoolSwap.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140AAB7B4 (AnFwDisableBackgroundUpdateTimer.c)
 *     RaspClearCache @ 0x140AABB44 (RaspClearCache.c)
 *     LogFwReport @ 0x140AABB9C (LogFwReport.c)
 *     AnFwFadeCompletion @ 0x140AACA74 (AnFwFadeCompletion.c)
 *     BgpGxRectangleDestroy @ 0x140AAD3E0 (BgpGxRectangleDestroy.c)
 *     ResFwBackgroundTransition @ 0x140AADBBC (ResFwBackgroundTransition.c)
 */

void __fastcall ResFwFreeContext(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  struct _MDL *v4; // rcx

  if ( (dword_140C0DF90 & 0x100000) != 0 )
  {
    v2 = TxtpTextCache;
    v3 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_15:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_QWORD **)(v3 + 8) != v2 )
        goto LABEL_15;
      TxtpTextCache = (_UNKNOWN *)v3;
      *(_QWORD *)(v3 + 8) = &TxtpTextCache;
      if ( v2 == &TxtpTextCache )
        break;
      BgpGxRectangleDestroy(v2[6]);
      BgpFwFreeMemory((__int64)v2);
      v2 = TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
        goto LABEL_15;
      v3 = *(_QWORD *)TxtpTextCache;
    }
    dword_140C04460 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
    AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    LogFwReport();
    if ( *(_QWORD *)(a1 + 16) )
    {
      BgpFwReservePoolSwap(1LL, 0LL, 0LL, 0LL);
      MmFreePagesFromMdl(*(PMDL *)(a1 + 8));
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
    dword_140C0DF90 &= 0xFFEFF7FD;
    qword_140C0E050 = BgpAnimationRegionSave;
    qword_140C0E058 = BgpTextRegionSave;
    qword_140C0DF40 = 0LL;
    BgInternal = 0LL;
    xmmword_140C0DF30 = 0LL;
    ResFwBackgroundTransition(1LL);
  }
  else
  {
    v4 = *(struct _MDL **)(a1 + 8);
    if ( v4 )
    {
      MmFreePagesFromMdl(v4);
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
  }
}
