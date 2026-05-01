/*
 * XREFs of ?TagWindowForSnapAnimation@?$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_KAEBURect@Foundation@Windows@3@@Z @ 0x18078BE20
 * Callers:
 *     ?SnapPending@SnapAssistState@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x18078BD44 (-SnapPending@SnapAssistState@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::TagWindowForSnapAnimation(
        __int64 **a1,
        _QWORD *a2,
        __int64 a3,
        __int128 *a4)
{
  __int64 *v4; // rcx
  __int128 v5; // xmm0
  __int64 v7; // rax
  signed int v8; // eax
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = *a4;
  v11 = 0LL;
  v7 = *v4;
  v10 = v5;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64 *))(v7 + 72))(v4, a3, &v10, &v11);
  if ( v8 < 0 )
    winrt::throw_hresult(v8);
  *a2 = v11;
  return a2;
}
