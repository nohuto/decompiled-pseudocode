/*
 * XREFs of ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x1800EA830
 * Callers:
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x1800E74A4 (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 *     ?EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800E7804 (-EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMessageSession@@@Z @ 0x1800A9E98 (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMessageSession@@@Z.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800DE138 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z @ 0x1800E11F0 (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x1800E1318 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z @ 0x1800E18E8 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollectionHeadEventHandler::SetOwner(
        SpatialRimDeviceCollectionHeadEventHandler *this,
        struct SpatialRimDeviceCollection *a2,
        struct IMessageSession *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rdi
  MPCHeadUpdateListener *Instance; // rax
  struct _RTL_CRITICAL_SECTION *v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+40h] [rbp+8h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v14 = v6;
  if ( a2 && *((_QWORD *)this + 3) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)0x8000FFFFLL);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v14);
    return 2147549183LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<IMessageSession>::operator=((__int64 *)this + 9, (__int64)a3);
    *((_QWORD *)this + 3) = a2;
    v10 = (__int64 *)((char *)this + 16);
    if ( a2 )
    {
      if ( !*v10 )
      {
        Instance = MPCHeadUpdateListener::GetInstance(v9, v8);
        MPCHeadUpdateListener::AddHeadEventOccurred(Instance, this, (unsigned __int8 *)this + 16);
      }
    }
    else if ( *v10 )
    {
      v12 = (struct _RTL_CRITICAL_SECTION *)MPCHeadUpdateListener::GetInstance(v9, v8);
      MPCHeadUpdateListener::RemoveHeadEventOccurred(v12, *v10);
      *v10 = 0LL;
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    return 0LL;
  }
}
