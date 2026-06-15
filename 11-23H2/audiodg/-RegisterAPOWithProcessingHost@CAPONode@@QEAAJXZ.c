/*
 * XREFs of ?RegisterAPOWithProcessingHost@CAPONode@@QEAAJXZ @ 0x140014C18
 * Callers:
 *     _lambda_89f25345d625e50d879fcb99a1803143_::operator() @ 0x140011F68 (_lambda_89f25345d625e50d879fcb99a1803143_--operator().c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPONode::RegisterAPOWithProcessingHost(CAPONode *this)
{
  unsigned int v2; // ebx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 1))(
         *((_QWORD *)this + 1),
         &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17,
         &v7) >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 24LL))(
           *((_QWORD *)this + 6),
           *((_QWORD *)this + 1));
    v2 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B9,
        (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
        (const char *)(unsigned int)v4,
        v5);
      goto LABEL_3;
    }
    if ( *((struct IUnknown **)this + 4) != v7 )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 4, v7);
  }
  v2 = 0;
LABEL_3:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v7);
  return v2;
}
