/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@AEAAXXZ @ 0x18045576C
 * Callers:
 *     ??1?$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@QEAA@XZ @ 0x180451F14 (--1-$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@QEAA@XZ.c)
 *     ?copy_ref@?$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@AEAAXPEAVCVirtualTouchpadExperienceManager@@@Z @ 0x1804554E0 (-copy_ref@-$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@AEAAXPEAVCVirtualTouchpadExperie.c)
 *     ?release_ref@?$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@AEAAXXZ @ 0x180455750 (-release_ref@-$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<CVirtualTouchpadExperienceManager>::unconditional_release_ref(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::Release(v2);
}
