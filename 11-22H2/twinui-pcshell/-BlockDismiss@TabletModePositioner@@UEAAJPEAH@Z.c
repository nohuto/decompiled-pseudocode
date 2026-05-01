/*
 * XREFs of ?BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z @ 0x1805B99B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18007093C (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ @ 0x1805BD674 (-IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ.c)
 */

__int64 __fastcall TabletModePositioner::BlockDismiss(TabletModePositioner *this, int *a2)
{
  TabletModePositioner *v2; // rdi
  __int64 v4; // r8
  int v5; // ebx

  v2 = (TabletModePositioner *)((char *)this - 120);
  if ( !TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 120))
    || (v5 = 1,
        (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 128) + 80LL))(*(_QWORD *)(v4 + 128), 1LL))
    || TabletModePositioner::IsFullScreenViewVisible(v2)
    || IsPPIEdition() )
  {
    v5 = 0;
  }
  *a2 = v5;
  return 0LL;
}
