/*
 * XREFs of ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000C760
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400105A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcessNode::SetRightFormat(CProcessNode *this, struct IUnknown *a2)
{
  struct IUnknown **v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = (struct IUnknown **)((char *)this + 8);
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( *v4 != a2 )
    ATL::AtlComPtrAssign(v4, a2);
  if ( *((struct IUnknown **)this + 2) != a2 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 2, a2);
}
