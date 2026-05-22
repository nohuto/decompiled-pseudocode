/*
 * XREFs of ?GetAvailableFence@CCompositionTexture@DirectComposition@@UEAAJPEA_KAEBU_GUID@@PEAPEAX@Z @ 0x18009FFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeGuard@VCDeviceLock@DirectComposition@@@@YA?AV?$CGuard@VCDeviceLock@DirectComposition@@@@AEAVCDeviceLock@DirectComposition@@@Z @ 0x1800246CC (--$MakeGuard@VCDeviceLock@DirectComposition@@@@YA-AV-$CGuard@VCDeviceLock@DirectComposition@@@@A.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCompositionTexture::GetAvailableFence(
        DirectComposition::CCompositionTexture *this,
        unsigned __int64 *a2,
        const struct _GUID *a3,
        void **a4)
{
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  MakeGuard<DirectComposition::CDeviceLock>(
    (DirectComposition::CDeviceLock **)&v9,
    (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 96LL));
  *a4 = 0LL;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 7) != -1LL )
  {
    (***(void (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 1) + 48LL))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 48LL),
      a3,
      a4);
    *a2 = *((_QWORD *)this + 7);
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v9);
  return 0LL;
}
