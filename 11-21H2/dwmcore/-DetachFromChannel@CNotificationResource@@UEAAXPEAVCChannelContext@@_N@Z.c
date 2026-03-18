/*
 * XREFs of ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180042790
 * Callers:
 *     ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801C4780 (-DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18021A5D0 (-DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180298090 (-DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802983D0 (-DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180042824 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x180042844 (-RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CNotificationResource::DetachFromChannel(CNotificationResource *this, struct CChannelContext *a2)
{
  __int64 v2; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = *((_QWORD *)this + 6);
  if ( (struct CChannelContext *)v2 == a2 )
  {
    if ( CNotificationResource::ShouldNotify(this) )
    {
      if ( v2 )
        v6 = *(unsigned int *)(v2 + 76);
      else
        v6 = 0LL;
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 1240LL) + 24LL);
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 80LL))(
        v7,
        v6,
        *((unsigned int *)this + 16),
        0LL);
      v2 = *((_QWORD *)this + 6);
    }
    *((_DWORD *)this + 16) = 0;
  }
  if ( a2 == (struct CChannelContext *)v2 )
  {
    if ( (*((_BYTE *)this + 32) & 0x10) != 0 )
      CAnimationLoggingManager::RemoveResourceDebugInfo(*(CAnimationLoggingManager **)(v2 + 64), this);
    *((_QWORD *)this + 6) = 0LL;
  }
}
