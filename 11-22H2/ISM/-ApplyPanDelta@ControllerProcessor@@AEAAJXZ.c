/*
 * XREFs of ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x1801A339C
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x1801A5650 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x18012AE18 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1801A6BB8 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::ApplyPanDelta(ControllerProcessor *this)
{
  if ( *((float *)this + 107) == 0.0 && *((float *)this + 108) == 0.0 )
  {
    if ( *((_DWORD *)this + 315) == 1 )
      ControllerProcessor::TryUpdateInteractionType(this, 0LL);
  }
  else
  {
    ControllerProcessor::TryUpdateInteractionType(this, 1LL);
    if ( *((_DWORD *)this + 315) == 1 )
      ManipulationInjector::InjectPan(
        (ControllerProcessor *)((char *)this + 448),
        *((float *)this + 107),
        *((float *)this + 108),
        0);
    *((_DWORD *)this + 107) = 0;
    *((_DWORD *)this + 108) = 0;
  }
  return 0LL;
}
