/*
 * XREFs of ??1CProcessNode@@UEAA@XZ @ 0x14000489C
 * Callers:
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x14000471C (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x14000491C (--1CDeviceProcessNode@@UEAA@XZ.c)
 *     ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x14005A4B0 (--1CAPOEndpointProcessNode@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CProcessNode::~CProcessNode(CProcessNode *this)
{
  *(_QWORD *)this = &CProcessNode::`vftable';
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 1);
}
