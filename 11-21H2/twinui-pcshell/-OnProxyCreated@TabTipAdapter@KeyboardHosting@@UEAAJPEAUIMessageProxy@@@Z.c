/*
 * XREFs of ?OnProxyCreated@TabTipAdapter@KeyboardHosting@@UEAAJPEAUIMessageProxy@@@Z @ 0x180476E60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnProxyCreated(
        KeyboardHosting::TabTipAdapter *this,
        __int64 (__fastcall ***a2)(struct IMessageProxy *, GUID *, char *))
{
  char *v2; // rbx
  __int64 (__fastcall *v4)(struct IMessageProxy *, GUID *, char *); // rdi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this + 48;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
  v5 = v4((struct IMessageProxy *)a2, &GUID_4184362c_9bcb_410f_a461_0bb9001ee6c7, v2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x74C,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
