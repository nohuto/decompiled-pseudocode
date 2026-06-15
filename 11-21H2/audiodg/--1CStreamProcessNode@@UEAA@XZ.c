/*
 * XREFs of ??1CStreamProcessNode@@UEAA@XZ @ 0x14000471C
 * Callers:
 *     ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x1400046E0 (--_GCStreamProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1CEndpointInstance@@QEAA@XZ @ 0x1400048CC (--1CEndpointInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CStreamProcessNode::~CStreamProcessNode(CStreamProcessNode *this)
{
  CEndpointInstance *v1; // rdi

  v1 = (CEndpointInstance *)*((_QWORD *)this + 4);
  *(_QWORD *)this = &CStreamProcessNode::`vftable';
  if ( v1 )
  {
    CEndpointInstance::~CEndpointInstance(v1);
    operator delete(v1);
  }
  *((_QWORD *)this + 4) = 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 6);
  CProcessNode::~CProcessNode(this);
}
