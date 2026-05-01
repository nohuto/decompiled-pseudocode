/*
 * XREFs of ?VirtualDesktopDestroyFailed@XamlAllUpViewHost@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x180439E90
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::VirtualDesktopDestroyFailed(
        XamlAllUpViewHost *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3,
        struct IVirtualDesktop *a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v6; // esi
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 112) & -(__int64)(this != (XamlAllUpViewHost *)136));
  try
  {
    v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v5, 1);
    *((_BYTE *)this + 580) = 0;
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 72LL))(*((_QWORD *)this + 4));
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
    if ( v6 >= 0 )
      LeaveCriticalSection(v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1BC,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
                           v8);
  }
  return result;
}
