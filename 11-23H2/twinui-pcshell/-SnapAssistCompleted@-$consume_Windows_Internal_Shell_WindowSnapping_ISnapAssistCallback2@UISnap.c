/*
 * XREFs of ?SnapAssistCompleted@?$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@3@U?$array_view@$$CB_K@3@@Z @ 0x180688624
 * Callers:
 *     __lambda_017e4516d3db66192a06ba57bc482270_::operator()_::_1_::catch$19 @ 0x180687C4B (__lambda_017e4516d3db66192a06ba57bc482270_--operator()_--_1_--catch$19.c)
 *     ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x18076F9B0 (-v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::SnapAssistCompleted(
        __int64 *a1,
        unsigned int *a2,
        __m128i *a3)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 result; // rax

  v3 = *a1;
  v4 = 8LL;
  if ( _mm_cvtsi128_si32(_mm_srli_si128(*a3, 8)) )
    v4 = a3->m128i_i64[0];
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v3 + 64LL))(
             v3,
             *a2,
             a3->m128i_u32[2],
             v4);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
