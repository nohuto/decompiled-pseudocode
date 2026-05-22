/*
 * XREFs of ?CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC750
 * Callers:
 *     ?Initialize@CSynchronousSuperWetInk@DirectComposition@@AEAAJII@Z @ 0x1800FC9B8 (-Initialize@CSynchronousSuperWetInk@DirectComposition@@AEAAJII@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?SetSharedSectionReferenceProperties@CResourceProxy@DirectComposition@@QEAAXIIIPEAVCSharedAllocationBase@2@_K@Z @ 0x180021CF0 (-SetSharedSectionReferenceProperties@CResourceProxy@DirectComposition@@QEAAXIIIPEAVCSharedAlloca.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800520F0 (-AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180086BFC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA@XZ @ 0x1800ED7E0 (--1-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA.c)
 *     ?InternalRelease@?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F22A4 (-InternalRelease@-$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@M.c)
 *     ??$?4U?$default_delete@VCSharedCircularQueue@@@std@@$0A@@?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F856C (--$-4U-$default_delete@VCSharedCircularQueue@@@std@@$0A@@-$unique_ptr@VCSharedCircularQueue@@U-$.c)
 *     ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x1800F89E0 (-Create@CSharedCircularQueue@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@_N@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$?4VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@?$ComPtr@VCSharedAllocationBase@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@12@@Z @ 0x1800FC0B4 (--$-4VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@-$ComPtr@VCSharedAllocatio.c)
 */

__int64 __fastcall DirectComposition::CSynchronousSuperWetInk::CreateTipPointsQueue(
        DirectComposition::CSynchronousSuperWetInk *this)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  DirectComposition::CDevice *v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  struct DirectComposition::CDevice *v9; // rbx
  char *v10; // rsi
  gsl::details *v11; // rcx
  int v12; // esi
  void *v13; // rcx
  int v14; // eax
  _QWORD *v16[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-30h] BYREF
  void **v18; // [rsp+50h] [rbp-20h]
  volatile __int32 **v19; // [rsp+58h] [rbp-18h] BYREF
  char v20; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v22; // [rsp+A8h] [rbp+38h] BYREF
  struct DirectComposition::CDevice *v23; // [rsp+B0h] [rbp+40h] BYREF
  void *v24; // [rsp+B8h] [rbp+48h] BYREF

  v1 = *((_QWORD *)this + 2);
  v3 = v1 + 8;
  v4 = -v1;
  if ( (v3 & -(__int64)(v4 != 0)) != 0 )
    v5 = (v3 & -(__int64)(v4 != 0)) - 8;
  else
    v5 = 0LL;
  DirectComposition::CDevice::GetDeviceAndHandleWorker(v5, &v23, &v22);
  v6 = v23;
  v16[0] = (_QWORD *)((char *)v23 + 96);
  DirectComposition::CDeviceLock::Enter((struct DirectComposition::CDevice *)((char *)v23 + 96));
  v23 = 0LL;
  Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v23);
  v7 = DirectComposition::CDevice::AllocateSharedMemory(v6, 0x1C08uLL, &v23);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\synchronoussuperwetink.cpp",
      (const char *)(unsigned int)v7);
LABEL_18:
    Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v23);
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(v16);
    return v8;
  }
  v9 = v23;
  v24 = 0LL;
  v19 = 0LL;
  v18 = &v24;
  v10 = (char *)v23 + 56;
  v20 = 1;
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v17, 7176LL);
  if ( v17[0] == -1LL || !v10 && v17[0] )
  {
    gsl::details::terminate(v11);
    JUMPOUT(0x1800FC982LL);
  }
  v17[1] = v10;
  v12 = CSharedCircularQueue::Create((unsigned int *)v17, 0x38u, &v19);
  if ( v20 )
  {
    v13 = *v18;
    *v18 = v19;
    if ( v13 )
      operator delete(v13);
  }
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B3,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\synchronoussuperwetink.cpp",
      (const char *)(unsigned int)v12);
    std::unique_ptr<CSharedCircularQueue>::~unique_ptr<CSharedCircularQueue>(&v24);
    v8 = v12;
    goto LABEL_18;
  }
  DirectComposition::CResourceProxy::SetSharedSectionReferenceProperties(
    (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 2) + 8LL),
    1,
    2,
    3,
    v9,
    0x1C08uLL);
  if ( *((_DWORD *)v9 + 6) != 3 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v9 + 2) + 40LL))((__int64)v9 + 16, 3LL);
    *((_DWORD *)v9 + 6) = 3;
  }
  v14 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
          (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 2) + 8LL),
          4,
          56LL);
  v8 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C0,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\synchronoussuperwetink.cpp",
      (const char *)(unsigned int)v14);
    std::unique_ptr<CSharedCircularQueue>::~unique_ptr<CSharedCircularQueue>(&v24);
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocationBase>::operator=<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>(
    (__int64 *)this + 3,
    (__int64 *)&v23);
  std::unique_ptr<CSharedCircularQueue>::operator=<std::default_delete<CSharedCircularQueue>,0>((void **)this + 5, &v24);
  if ( v24 )
    operator delete(v24);
  Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v23);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(v16);
  return 0LL;
}
