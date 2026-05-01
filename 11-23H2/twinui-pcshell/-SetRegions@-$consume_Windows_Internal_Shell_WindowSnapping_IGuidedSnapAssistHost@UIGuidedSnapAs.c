/*
 * XREFs of ?SetRegions@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@3@@Z @ 0x18066B890
 * Callers:
 *     _lambda_017e4516d3db66192a06ba57bc482270_::operator() @ 0x180687984 (_lambda_017e4516d3db66192a06ba57bc482270_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>::SetRegions(
        __int64 *a1,
        __m128i *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 result; // rax

  v2 = *a1;
  v3 = 8LL;
  if ( _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8)) )
    v3 = a2->m128i_i64[0];
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v2 + 48LL))(v2, a2->m128i_u32[2], v3);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
