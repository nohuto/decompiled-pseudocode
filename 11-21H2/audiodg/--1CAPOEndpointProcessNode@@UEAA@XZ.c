/*
 * XREFs of ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x14005A4B0
 * Callers:
 *     ??_ECAPOEndpointProcessNode@@UEAAPEAXI@Z @ 0x14005A530 (--_ECAPOEndpointProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x14005A598 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

void __fastcall CAPOEndpointProcessNode::~CAPOEndpointProcessNode(CAPOEndpointProcessNode *this, unsigned int a2)
{
  CEndpointInstance *v3; // rcx

  *(_QWORD *)this = &CAPOEndpointProcessNode::`vftable';
  v3 = (CEndpointInstance *)*((_QWORD *)this + 4);
  if ( v3 )
    CEndpointInstance::`scalar deleting destructor'(v3, a2);
  *((_QWORD *)this + 4) = 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 6);
  CProcessNode::~CProcessNode(this);
}
