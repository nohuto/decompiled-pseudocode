/*
 * XREFs of ??1CDeviceProcessNode@@UEAA@XZ @ 0x1400381DA
 * Callers:
 *     ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x140038220 (--_ECDeviceProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140022F00 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

void __fastcall CDeviceProcessNode::~CDeviceProcessNode(CDeviceProcessNode *this)
{
  CEndpointInstance *v2; // rcx

  *(_QWORD *)this = &CDeviceProcessNode::`vftable';
  v2 = (CEndpointInstance *)*((_QWORD *)this + 4);
  if ( v2 )
    CEndpointInstance::`scalar deleting destructor'(v2);
  *((_QWORD *)this + 4) = 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 6);
  CProcessNode::~CProcessNode(this);
}
