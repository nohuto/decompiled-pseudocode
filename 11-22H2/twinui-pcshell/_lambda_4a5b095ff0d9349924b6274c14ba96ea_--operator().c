/*
 * XREFs of _lambda_4a5b095ff0d9349924b6274c14ba96ea_::operator() @ 0x1801A8D20
 * Callers:
 *     wistd::__function::__func__lambda_4a5b095ff0d9349924b6274c14ba96ea__void___cdecl(_SEB_EVENT_HEADER_const_&)_::operator() @ 0x1801A8D10 (wistd--__function--__func__lambda_4a5b095ff0d9349924b6274c14ba96ea__void___cdecl(_S_ea_1801A8D10.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cc7fada248b85e5d1b4f2443fa1ae7ed_____lambda_cc7fada248b85e5d1b4f2443fa1ae7ed___ @ 0x1800EA138 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cc7fada248b85.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_4a5b095ff0d9349924b6274c14ba96ea_::operator()(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  __int64 v4; // rbx
  volatile signed __int32 *v5; // rcx
  DWORD CurrentThreadId; // eax
  int v7; // edi
  bool v9[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile signed __int32 *v12; // [rsp+50h] [rbp+8h] BYREF

  v9[0] = (*a2 & 2) != 0;
  v2 = *a1;
  v10 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cc7fada248b85e5d1b4f2443fa1ae7ed_____lambda_cc7fada248b85e5d1b4f2443fa1ae7ed___(
         &v12,
         v9);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v5);
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAE,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v7);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
}
