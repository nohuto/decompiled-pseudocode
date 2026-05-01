/*
 * XREFs of ?SubscribeToWindowMessageService@CVirtualDesktopManager@@UEAAJPEAUIImmersiveWindowMessageService@@@Z @ 0x18017E2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::SubscribeToWindowMessageService(
        CVirtualDesktopManager *this,
        struct IImmersiveWindowMessageService *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(struct IImmersiveWindowMessageService *, __int64, unsigned __int64, char *))(*(_QWORD *)a2 + 24LL))(
         a2,
         26LL,
         ((unsigned __int64)this + 32) & -(__int64)(this != (CVirtualDesktopManager *)8),
         (char *)this + 272);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x311,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
