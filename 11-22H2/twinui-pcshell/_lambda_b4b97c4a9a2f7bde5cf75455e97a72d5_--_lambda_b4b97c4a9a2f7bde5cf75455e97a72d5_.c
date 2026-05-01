/*
 * XREFs of _lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_::_lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_ @ 0x1802337B8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1802389D0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_::_lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7,
        _QWORD *a8)
{
  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 24) = *a4;
  std::wstring::wstring((_QWORD *)(a1 + 32), a5);
  std::wstring::wstring((_QWORD *)(a1 + 64), a6);
  *(_BYTE *)(a1 + 96) = *a7;
  *(_QWORD *)(a1 + 104) = *a8;
  return a1;
}
