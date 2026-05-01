/*
 * XREFs of _lambda_240ee78d6e8cdd91ee7835a3dd5ef9c5_::operator() @ 0x18031E4D0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_240ee78d6e8cdd91ee7835a3dd5ef9c5___::Run @ 0x180320760 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_240ee78d6e8cdd91ee7835a3dd5ef9c5___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800752E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x180320F94 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_240ee78d6e8cdd91ee7835a3dd5ef9c5_::operator()(Microsoft::WRL::WeakRef *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, (__int64)&v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( v7 )
    {
      FullScreenPositionerLogging::TraceLoggingInfo("FullScreenPositioner - Fading out overlay window now that time allowed for view repositioning is up.");
      (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 296LL) + 40LL))(
        *(_QWORD *)(*((_QWORD *)a1 + 1) + 296LL),
        *(_QWORD *)(*((_QWORD *)a1 + 1) + 344LL),
        &v6);
    }
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B7,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
  return v3;
}
