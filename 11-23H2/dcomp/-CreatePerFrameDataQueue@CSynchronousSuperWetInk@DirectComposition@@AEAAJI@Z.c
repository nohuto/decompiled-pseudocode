/*
 * XREFs of ?CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC4B4
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
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800862B4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180086BFC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA@XZ @ 0x1800ED7E0 (--1-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA.c)
 *     ?InternalRelease@?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F22A4 (-InternalRelease@-$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@M.c)
 *     ??$?4U?$default_delete@VCSharedCircularQueue@@@std@@$0A@@?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F856C (--$-4U-$default_delete@VCSharedCircularQueue@@@std@@$0A@@-$unique_ptr@VCSharedCircularQueue@@U-$.c)
 *     ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x1800F89E0 (-Create@CSharedCircularQueue@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@_N@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$?4VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@?$ComPtr@VCSharedAllocationBase@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@12@@Z @ 0x1800FC0B4 (--$-4VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@-$ComPtr@VCSharedAllocatio.c)
 */

__int64 __fastcall DirectComposition::CSynchronousSuperWetInk::CreatePerFrameDataQueue(
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
  char *v10; // rdi
  gsl::details *v11; // rcx
  int v12; // esi
  void *v13; // rcx
  int v14; // eax
  __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  _QWORD *v21[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-30h] BYREF
  void **v23; // [rsp+50h] [rbp-20h]
  volatile __int32 **v24; // [rsp+58h] [rbp-18h] BYREF
  char v25; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v27; // [rsp+A8h] [rbp+38h] BYREF
  struct DirectComposition::CDevice *v28; // [rsp+B0h] [rbp+40h] BYREF
  void *v29; // [rsp+B8h] [rbp+48h] BYREF

  v1 = *((_QWORD *)this + 2);
  v3 = v1 + 8;
  v4 = -v1;
  if ( (v3 & -(__int64)(v4 != 0)) != 0 )
    v5 = (v3 & -(__int64)(v4 != 0)) - 8;
  else
    v5 = 0LL;
  DirectComposition::CDevice::GetDeviceAndHandleWorker(v5, &v28, &v27);
  v6 = v28;
  v21[0] = (_QWORD *)((char *)v28 + 96);
  DirectComposition::CDeviceLock::Enter((struct DirectComposition::CDevice *)((char *)v28 + 96));
  v28 = 0LL;
  Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v28);
  v7 = DirectComposition::CDevice::AllocateSharedMemory(v6, 0xD88uLL, &v28);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x168,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\synchronoussuperwetink.cpp",
      (const char *)(unsigned int)v7);
LABEL_18:
    Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v28);
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(v21);
    return v8;
  }
  v9 = v28;
  v29 = 0LL;
  v24 = 0LL;
  v23 = &v29;
  v10 = (char *)v28 + 56;
  v25 = 1;
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v22, 3464LL);
  if ( v22[0] == -1LL || !v10 && v22[0] )
  {
    gsl::details::terminate(v11);
    JUMPOUT(0x1800FC746LL);
  }
  v22[1] = v10;
  v12 = CSharedCircularQueue::Create((unsigned int *)v22, 0x6Cu, &v24);
  if ( v25 )
  {
    v13 = *v23;
    *v23 = v24;
    if ( v13 )
      operator delete(v13);
  }
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\synchronoussuperwetink.cpp",
      (const char *)(unsigned int)v12);
    std::unique_ptr<CSharedCircularQueue>::~unique_ptr<CSharedCircularQueue>(&v29);
    v8 = v12;
    goto LABEL_18;
  }
  DirectComposition::CResourceProxy::SetSharedSectionReferenceProperties(
    (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 2) + 8LL),
    5,
    6,
    7,
    v9,
    0xD88uLL);
  if ( *((_DWORD *)v9 + 6) != 3 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v9 + 2) + 40LL))((__int64)v9 + 16, 3LL);
    *((_DWORD *)v9 + 6) = 3;
  }
  v14 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
          (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 2) + 8LL),
          8,
          108LL);
  v8 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x182,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\synchronoussuperwetink.cpp",
      (const char *)(unsigned int)v14);
    std::unique_ptr<CSharedCircularQueue>::~unique_ptr<CSharedCircularQueue>(&v29);
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocationBase>::operator=<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>(
    (__int64 *)this + 4,
    (__int64 *)&v28);
  std::unique_ptr<CSharedCircularQueue>::operator=<std::default_delete<CSharedCircularQueue>,0>((void **)this + 6, &v29);
  v16 = *((_QWORD *)this + 8);
  v17 = *((_QWORD *)this + 7);
  v18 = v16 - v17;
  if ( (unsigned __int64)(v16 - v17) > 0x6C )
  {
    v19 = v17 + 108;
LABEL_25:
    *((_QWORD *)this + 8) = v19;
    goto LABEL_26;
  }
  if ( v18 < 0x6C )
  {
    if ( (unsigned __int64)(*((_QWORD *)this + 9) - v17) >= 0x6C )
    {
      v20 = 108 - v18;
      memset_0(*((void **)this + 8), 0, 108 - v18);
      v19 = v20 + v16;
      goto LABEL_25;
    }
    std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((char *)this + 56, 0x6CuLL);
  }
LABEL_26:
  if ( v29 )
    operator delete(v29);
  Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v28);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(v21);
  return 0LL;
}
