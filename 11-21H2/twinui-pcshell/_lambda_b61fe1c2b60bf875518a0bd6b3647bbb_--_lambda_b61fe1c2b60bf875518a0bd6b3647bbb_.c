/*
 * XREFs of _lambda_b61fe1c2b60bf875518a0bd6b3647bbb_::_lambda_b61fe1c2b60bf875518a0bd6b3647bbb_ @ 0x1801C3E7C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x1801CAF20 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall lambda_b61fe1c2b60bf875518a0bd6b3647bbb_::_lambda_b61fe1c2b60bf875518a0bd6b3647bbb_(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        _QWORD *a4,
        _OWORD *a5,
        __int64 a6,
        _BYTE *a7)
{
  __int128 v8; // xmm0
  __int64 result; // rax

  v8 = *a3;
  *(_QWORD *)(a1 + 24) = *a4;
  *(_OWORD *)(a1 + 8) = v8;
  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 32) = *a5;
  std::wstring::wstring(a1 + 48, a6);
  result = a1;
  *(_BYTE *)(a1 + 80) = *a7;
  return result;
}
