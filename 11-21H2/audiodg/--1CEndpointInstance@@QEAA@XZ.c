/*
 * XREFs of ??1CEndpointInstance@@QEAA@XZ @ 0x1400048CC
 * Callers:
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x14000471C (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x14000491C (--1CDeviceProcessNode@@UEAA@XZ.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x14005A598 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CEndpointInstance::~CEndpointInstance(CEndpointInstance *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v2 )
    (**v2)(v2, 1LL);
  *((_QWORD *)this + 2) = 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 3);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this);
}
