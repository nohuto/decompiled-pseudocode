/*
 * XREFs of ?CreateInstance@?$consume_Windows_Internal_Shell_TaskGroups_ISnapLayoutEventArgsFactory@UISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SnapLayoutOperation@TaskGroups@Shell@Internal@Windows@3@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@3@@Z @ 0x1806476A0
 * Callers:
 *     ??R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA@AEBUISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x180646D90 (--R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA@AEBUISnapLayoutEventArgsFactory@TaskGroups@Sh.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ISnapLayoutEventArgsFactory<winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>::CreateInstance(
        __int64 *a1,
        _QWORD *a2,
        unsigned int *a3,
        __m128i *a4)
{
  __m128i v4; // xmm0
  __int64 v6; // rcx
  __int64 v8; // r9
  signed int v9; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a4;
  v11 = 0LL;
  v6 = *a1;
  v8 = 4LL;
  if ( _mm_cvtsi128_si32(_mm_srli_si128(v4, 8)) )
    v8 = v4.m128i_i64[0];
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64 *))(*(_QWORD *)v6 + 48LL))(
         v6,
         *a3,
         a4->m128i_u32[2],
         v8,
         &v11);
  if ( v9 < 0 )
    winrt::throw_hresult(v9);
  *a2 = v11;
  return a2;
}
