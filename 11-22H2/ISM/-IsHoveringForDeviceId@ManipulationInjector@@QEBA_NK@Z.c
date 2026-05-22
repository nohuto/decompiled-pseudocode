/*
 * XREFs of ?IsHoveringForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x18012B3EC
 * Callers:
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BB430 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800CBD70 (-DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x180129DF8 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ManipulationInjector::IsHoveringForDeviceId(ManipulationInjector *this, int a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // eax
  _DWORD *v4; // r8
  _DWORD *i; // rcx

  v2 = *((_DWORD *)this + 12);
  v3 = 0;
  if ( !v2 )
    return 0;
  v4 = (_DWORD *)((char *)this + 124);
  for ( i = (_DWORD *)((char *)this + 712); *i != a2 || *v4 != 131074; ++i )
  {
    ++v3;
    v4 += 38;
    if ( v3 >= v2 )
      return 0;
  }
  return 1;
}
