/*
 * XREFs of ?GetSubmixProxy@CStreamInstanceProxyImpl@@IEAAJPEAPEAUISubmixProxy@@@Z @ 0x180044820
 * Callers:
 *     ?GetSubmixProxy@CStreamInstanceProxy@@UEAAJPEAPEAUISubmixProxy@@@Z @ 0x180044810 (-GetSubmixProxy@CStreamInstanceProxy@@UEAAJPEAPEAUISubmixProxy@@@Z.c)
 *     ?GetSubmixProxy@CBridgeStreamInstanceProxy@@UEAAJPEAPEAUISubmixProxy@@@Z @ 0x1801080D0 (-GetSubmixProxy@CBridgeStreamInstanceProxy@@UEAAJPEAPEAUISubmixProxy@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamInstanceProxyImpl::GetSubmixProxy(CStreamInstanceProxyImpl *this, struct ISubmixProxy **a2)
{
  struct ISubmixProxy *v2; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct ISubmixProxy *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(struct ISubmixProxy *))(*(_QWORD *)v2 + 8LL))(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF45,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
