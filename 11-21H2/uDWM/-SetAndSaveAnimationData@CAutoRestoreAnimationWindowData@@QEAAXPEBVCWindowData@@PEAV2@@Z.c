/*
 * XREFs of ?SetAndSaveAnimationData@CAutoRestoreAnimationWindowData@@QEAAXPEBVCWindowData@@PEAV2@@Z @ 0x1800D8B08
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DC250 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::SetAndSaveAnimationData(
        CAutoRestoreAnimationWindowData *this,
        const struct CWindowData *a2,
        struct CWindowData *a3)
{
  *((_DWORD *)this + 168) = *((_DWORD *)a3 + 168);
  *(_OWORD *)((char *)this + 676) = *(_OWORD *)((char *)a3 + 676);
  *(_OWORD *)((char *)this + 692) = *(_OWORD *)((char *)a3 + 692);
  *(_OWORD *)((char *)this + 708) = *(_OWORD *)((char *)a3 + 708);
  *(_OWORD *)((char *)this + 724) = *(_OWORD *)((char *)a3 + 724);
  *((_DWORD *)a3 + 168) = *((_DWORD *)a2 + 168);
  *(_OWORD *)((char *)a3 + 676) = *(_OWORD *)((char *)a2 + 676);
  *(_OWORD *)((char *)a3 + 692) = *(_OWORD *)((char *)a2 + 692);
  *(_OWORD *)((char *)a3 + 708) = *(_OWORD *)((char *)a2 + 708);
  *(_OWORD *)((char *)a3 + 724) = *(_OWORD *)((char *)a2 + 724);
  *((_QWORD *)this + 105) = a3;
}
