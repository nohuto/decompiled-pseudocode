/*
 * XREFs of ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800D4920
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DC250 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     _CAppArrangementDelayed::_WindowEnumCallback_::_1_::dtor$0 @ 0x1800DCD70 (_CAppArrangementDelayed--_WindowEnumCallback_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::~CAutoRestoreAnimationWindowData(CWindowData **this)
{
  CWindowData *v1; // rdx

  v1 = this[105];
  if ( v1 )
  {
    *((_DWORD *)v1 + 168) = *((_DWORD *)this + 168);
    *(_OWORD *)((char *)this[105] + 676) = *(_OWORD *)((char *)this + 676);
    *(_OWORD *)((char *)this[105] + 692) = *(_OWORD *)((char *)this + 692);
    *(_OWORD *)((char *)this[105] + 708) = *(_OWORD *)((char *)this + 708);
    *(_OWORD *)((char *)this[105] + 724) = *(_OWORD *)((char *)this + 724);
  }
  CWindowData::~CWindowData(this);
}
