/*
 * XREFs of ?SetAndSaveAnimationData@CAutoRestoreAnimationWindowData@@QEAAXPEBVCWindowData@@PEAV2@@Z @ 0x1800DC3F0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DEF90 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::SetAndSaveAnimationData(
        CAutoRestoreAnimationWindowData *this,
        const struct CWindowData *a2,
        struct CWindowData *a3)
{
  *((_DWORD *)this + 170) = *((_DWORD *)a3 + 170);
  *(_OWORD *)((char *)this + 684) = *(_OWORD *)((char *)a3 + 684);
  *(_OWORD *)((char *)this + 700) = *(_OWORD *)((char *)a3 + 700);
  *(_OWORD *)((char *)this + 716) = *(_OWORD *)((char *)a3 + 716);
  *(_OWORD *)((char *)this + 732) = *(_OWORD *)((char *)a3 + 732);
  *((_DWORD *)a3 + 170) = *((_DWORD *)a2 + 170);
  *(_OWORD *)((char *)a3 + 684) = *(_OWORD *)((char *)a2 + 684);
  *(_OWORD *)((char *)a3 + 700) = *(_OWORD *)((char *)a2 + 700);
  *(_OWORD *)((char *)a3 + 716) = *(_OWORD *)((char *)a2 + 716);
  *(_OWORD *)((char *)a3 + 732) = *(_OWORD *)((char *)a2 + 732);
  *((_QWORD *)this + 108) = a3;
}
