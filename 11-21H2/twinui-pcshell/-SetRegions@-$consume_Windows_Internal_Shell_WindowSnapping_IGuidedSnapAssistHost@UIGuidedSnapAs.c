/*
 * XREFs of ?SetRegions@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAXU?$array_view@$$CBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@3@@Z @ 0x18059CBA4
 * Callers:
 *     _lambda_257868cc277a89cd587da3eed8fcd545_::operator() @ 0x1801BE6D8 (_lambda_257868cc277a89cd587da3eed8fcd545_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
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
