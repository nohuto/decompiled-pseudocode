/*
 * XREFs of ?CreateAnimationInstance@CDevice@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@PEAPEAUIDCompositionAnimationInstancePartner@@@Z @ 0x1800634B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?Create@CAnimationInstance@DirectComposition@@SAJPEAVCDevice@2@PEAVCAnimationBuilder@2@PEAPEAV12@@Z @ 0x180063584 (-Create@CAnimationInstance@DirectComposition@@SAJPEAVCDevice@2@PEAVCAnimationBuilder@2@PEAPEAV12.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateAnimationInstance(
        DirectComposition::CDevice *this,
        struct IDCompositionAnimation *a2,
        struct IDCompositionAnimationInstancePartner **a3)
{
  int v6; // ebx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  struct DirectComposition::CAnimationInstance *v9; // [rsp+48h] [rbp+10h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = (_QWORD *)((char *)this + 72);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 72));
  v9 = 0LL;
  if ( !a2 )
  {
    v6 = -2147024809;
    if ( !a3 )
      goto LABEL_6;
    goto LABEL_8;
  }
  if ( !a3 )
  {
    v6 = -2147024809;
    goto LABEL_6;
  }
  v8 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IDCompositionAnimation *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_0bca27ef_7885_4a7a_95b0_cc4079b194ad,
         &v8);
  if ( v6 < 0
    || ((*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8),
        v6 = DirectComposition::CAnimationInstance::Create(
               (DirectComposition::CDevice *)((char *)this - 24),
               (struct DirectComposition::CAnimationBuilder *)a2,
               &v9),
        v6 < 0) )
  {
LABEL_8:
    *a3 = 0LL;
    goto LABEL_6;
  }
  *a3 = v9;
LABEL_6:
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v10);
  return (unsigned int)v6;
}
