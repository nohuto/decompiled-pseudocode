/*
 * XREFs of ?UpdateRect@?$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@AEBW4ShellTransition@Transitions@Udwm@3@@Z @ 0x18010D50C
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800278D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D894C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::UpdateRect(
        __int64 **a1,
        __int128 *a2,
        unsigned int *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a1;
  v4 = *v3;
  v6 = *a2;
  result = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD))(v4 + 72))(v3, &v6, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
