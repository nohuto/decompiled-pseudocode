/*
 * XREFs of ?EstablishEndpointToSendMessagesFromRoutingInfo@TestCommandHost@@AEAAXPEBUtagMsgRoutingInfo@@@Z @ 0x1801168F4
 * Callers:
 *     _lambda_e553b185ff1de720e49cf48bc3fd719c_::_lambda_invoker_cdecl_ @ 0x180116810 (_lambda_e553b185ff1de720e49cf48bc3fd719c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C0A0C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall TestCommandHost::EstablishEndpointToSendMessagesFromRoutingInfo(
        TestCommandHost *this,
        const struct tagMsgRoutingInfo *a2)
{
  _QWORD *v2; // rdi
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 168LL))(*(_QWORD *)this);
    *v2 = 0LL;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct tagMsgRoutingInfo *, _QWORD *))(**(_QWORD **)this + 120LL))(
         *(_QWORD *)this,
         a2,
         v2);
  if ( v5 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      138LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v5,
      v6);
}
