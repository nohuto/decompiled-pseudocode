/*
 * XREFs of _lambda_b5a77111c728e18e017b33cb0f4bfddb_::_lambda_b5a77111c728e18e017b33cb0f4bfddb_ @ 0x1801C3E38
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1801C6200 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall lambda_b5a77111c728e18e017b33cb0f4bfddb_::_lambda_b5a77111c728e18e017b33cb0f4bfddb_(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 *a4,
        __int64 a5,
        _BYTE *a6)
{
  __int128 v6; // xmm0
  __int64 v7; // rax
  __int64 result; // rax

  v6 = *a3;
  v7 = *a4;
  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 24) = v7;
  std::wstring::wstring(a1 + 32, a5);
  result = a1;
  *(_BYTE *)(a1 + 64) = *a6;
  return result;
}
