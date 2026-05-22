/*
 * XREFs of ?AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z @ 0x1800F85F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x18001E058 (-IsVailContainer@@YA_NXZ.c)
 *     ?SetSharedSectionReferenceProperties@CResourceProxy@DirectComposition@@QEAAXIIIPEAVCSharedAllocationBase@2@_K@Z @ 0x180021CF0 (-SetSharedSectionReferenceProperties@CResourceProxy@DirectComposition@@QEAAXIIIPEAVCSharedAlloca.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800520F0 (-AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180086BFC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AllocateCrossContainerGuestReadWriteSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800EDA14 (-AllocateCrossContainerGuestReadWriteSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCShar.c)
 *     ?InternalRelease@?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F22A4 (-InternalRelease@-$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@M.c)
 *     ??$?4U?$default_delete@VCSharedCircularQueue@@@std@@$0A@@?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F856C (--$-4U-$default_delete@VCSharedCircularQueue@@@std@@$0A@@-$unique_ptr@VCSharedCircularQueue@@U-$.c)
 *     ??4?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F85A8 (--4-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x1800F89E0 (-Create@CSharedCircularQueue@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@_N@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall DirectComposition::CGenericInk::AddTipPoints(
        DirectComposition::CGenericInk *this,
        const unsigned __int8 *a2,
        unsigned int a3,
        unsigned int a4)
{
  int v4; // edi
  __int64 v5; // r15
  unsigned int v6; // r12d
  unsigned int v8; // esi
  void **v9; // r13
  __int64 v10; // rax
  unsigned int v12; // esi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  DirectComposition::CDevice *v15; // rbx
  unsigned __int64 v16; // r12
  int v17; // eax
  unsigned int v18; // edx
  struct DirectComposition::CSharedAllocationBase *v19; // rbx
  char *v20; // rsi
  gsl::details *v21; // rcx
  void *v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  struct DirectComposition::CSharedAllocationBase *v26; // rbx
  unsigned int *v27; // rbx
  const unsigned __int8 *v28; // r10
  unsigned int v29; // edx
  int v30; // ecx
  struct DirectComposition::CSharedAllocationBase *v31; // [rsp+38h] [rbp-39h] BYREF
  void *v32; // [rsp+40h] [rbp-31h] BYREF
  _QWORD *v33; // [rsp+48h] [rbp-29h] BYREF
  struct DirectComposition::CDevice *v34; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v35[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v36; // [rsp+68h] [rbp-9h] BYREF
  void **v37; // [rsp+78h] [rbp+7h]
  void *v38; // [rsp+80h] [rbp+Fh] BYREF
  char v39; // [rsp+88h] [rbp+17h]
  const unsigned __int8 *v40; // [rsp+E0h] [rbp+6Fh]
  unsigned int v42; // [rsp+F0h] [rbp+7Fh] BYREF

  v40 = a2;
  v4 = 0;
  v5 = a4;
  v6 = a3;
  v8 = 0;
  if ( !a4 )
    goto LABEL_4;
  v9 = (void **)((char *)this + 48);
  v10 = *((_QWORD *)this + 6);
  if ( !v10 )
  {
    v12 = (a4 << 7) + 8;
    v13 = (*((_QWORD *)this + 3) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 3) >> 64);
    v14 = v13 - 8;
    if ( !v13 )
      v14 = 0LL;
    DirectComposition::CDevice::GetDeviceAndHandleWorker(v14, &v34, &v42);
    v15 = v34;
    v33 = (_QWORD *)((char *)v34 + 96);
    DirectComposition::CDeviceLock::Enter((struct DirectComposition::CDevice *)((char *)v34 + 96));
    v31 = 0LL;
    v16 = v12;
    if ( IsVailContainer() )
    {
      Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v31);
      v17 = DirectComposition::CDevice::AllocateCrossContainerGuestReadWriteSharedMemory(v15, v12, &v31);
      v8 = v17;
      if ( v17 < 0 )
      {
        v18 = 133;
        goto LABEL_11;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v31);
      v17 = DirectComposition::CDevice::AllocateSharedMemory(v15, v12, &v31);
      v8 = v17;
      if ( v17 < 0 )
      {
        v18 = 129;
LABEL_11:
        DoStackCaptureDirect(v17, v18);
LABEL_12:
        Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v31);
        CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v33);
        return v8;
      }
    }
    v19 = v31;
    v32 = 0LL;
    v37 = &v32;
    v38 = 0LL;
    v20 = (char *)v31 + 56;
    v39 = 1;
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v36, v16);
    if ( v36 == -1 || !v20 && v36 )
    {
      gsl::details::terminate(v21);
      __debugbreak();
    }
    v35[0] = v36;
    v35[1] = v20;
    v8 = CSharedCircularQueue::Create(v35, (unsigned int)v5, &v38);
    if ( v39 )
    {
      v22 = *v37;
      *v37 = v38;
      if ( v22 )
        operator delete(v22);
    }
    if ( (v8 & 0x80000000) != 0 )
    {
      v29 = 144;
      v30 = v8;
    }
    else
    {
      DirectComposition::CResourceProxy::SetSharedSectionReferenceProperties(
        (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 3) + 8LL),
        6,
        7,
        8,
        v19,
        v16);
      if ( *((_DWORD *)v19 + 6) != 3 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v19 + 2) + 40LL))((__int64)v19 + 16, 3LL);
        *((_DWORD *)v19 + 6) = 3;
      }
      v23 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
              (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 3) + 8LL),
              9,
              v5);
      v8 = v23;
      if ( v23 < 0 )
      {
        v29 = 152;
      }
      else
      {
        Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>::operator=(
          (DirectComposition::CDelayedDestructionObject **)this + 4,
          &v31);
        std::unique_ptr<CSharedCircularQueue>::operator=<std::default_delete<CSharedCircularQueue>,0>(v9, &v32);
        if ( !IsVailContainer() || *((_QWORD *)this + 5) )
        {
LABEL_32:
          if ( v32 )
            operator delete(v32);
          Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v31);
          CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v33);
          a2 = v40;
          v6 = a3;
          goto LABEL_35;
        }
        v24 = (*((_QWORD *)this + 3) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 3) >> 64);
        v25 = v24 - 8;
        if ( !v24 )
          v25 = 0LL;
        DirectComposition::CDevice::GetDeviceAndHandleWorker(v25, &v34, &v42);
        Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v31);
        v23 = DirectComposition::CDevice::AllocateCrossContainerGuestReadWriteSharedMemory(v34, 0x1000uLL, &v31);
        v8 = v23;
        if ( v23 >= 0 )
        {
          v26 = v31;
          DirectComposition::CResourceProxy::SetSharedSectionReferenceProperties(
            (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 3) + 8LL),
            11,
            12,
            13,
            v31,
            0x1000uLL);
          if ( *((_DWORD *)v26 + 6) != 3 )
          {
            (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v26 + 2) + 40LL))((__int64)v26 + 16, 3LL);
            *((_DWORD *)v26 + 6) = 3;
          }
          Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>::operator=(
            (DirectComposition::CDelayedDestructionObject **)this + 5,
            &v31);
          goto LABEL_32;
        }
        v29 = 165;
      }
      v30 = v23;
    }
    DoStackCaptureDirect(v30, v29);
    if ( v32 )
      operator delete(v32);
    goto LABEL_12;
  }
  if ( a4 != *(_DWORD *)(v10 + 8) )
  {
LABEL_4:
    v8 = -2147024809;
    DoStackCaptureDirect(-2147024809, 0x6Fu);
    return v8;
  }
LABEL_35:
  if ( v6 )
  {
    while ( 1 )
    {
      v27 = (unsigned int *)*v9;
      v28 = &a2[(unsigned int)(v5 * v4)];
      if ( !v28 )
      {
        gsl::details::terminate(this);
        __debugbreak();
      }
      memcpy_0(
        (void *)(*(_QWORD *)v27 + 8LL + v27[2]
                                      * (_InterlockedExchangeAdd(*(volatile signed __int32 **)v27, 1u) % v27[3])),
        v28,
        v27[2]);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v27 + 4LL));
      if ( ++v4 >= v6 )
        break;
      a2 = v40;
    }
  }
  return v8;
}
