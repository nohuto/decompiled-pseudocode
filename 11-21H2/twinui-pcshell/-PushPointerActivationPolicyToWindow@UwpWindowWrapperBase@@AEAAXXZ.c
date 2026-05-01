/*
 * XREFs of ?PushPointerActivationPolicyToWindow@UwpWindowWrapperBase@@AEAAXXZ @ 0x180415E20
 * Callers:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180418020 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?put_PointerActivationPolicy@UwpWindowWrapperBase@@UEAAJW4PointerActivationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18041A1D0 (-put_PointerActivationPolicy@UwpWindowWrapperBase@@UEAAJW4PointerActivationPolicy@ViewManagerInt.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f576a1c6e92786dd1ee63bcf62fd8bc8___ @ 0x180410BEC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f576a1c6e92786dd1ee63bcf62fd8bc8.c)
 */

void __fastcall UwpWindowWrapperBase::PushPointerActivationPolicyToWindow(UwpWindowWrapperBase *this)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  UwpWindowWrapperBase *v6; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 232LL))(*((_QWORD *)this + 34));
  if ( *((_DWORD *)this + 72) )
  {
    v6 = this;
    CurrentThreadId = GetCurrentThreadId();
    v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f576a1c6e92786dd1ee63bcf62fd8bc8___(
           v3,
           CurrentThreadId,
           &v6);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC2B,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v4);
  }
}
