/*
 * XREFs of ??1CProcessNode@@UEAA@XZ @ 0x140013838
 * Callers:
 *     ??1CAPOProcessNode@@UEAA@XZ @ 0x140017888 (--1CAPOProcessNode@@UEAA@XZ.c)
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x140022EBC (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ??_ECProcessNode@@UEAAPEAXI@Z @ 0x140025180 (--_ECProcessNode@@UEAAPEAXI@Z.c)
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x14003821A (--1CDeviceProcessNode@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CProcessNode::~CProcessNode(CProcessNode *this)
{
  *(_QWORD *)this = &CProcessNode::`vftable';
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 1);
}
