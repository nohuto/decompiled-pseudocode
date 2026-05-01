/*
 * XREFs of _lambda_5ac696817d9ead6e33159563da3f5a7c_::_lambda_5ac696817d9ead6e33159563da3f5a7c_ @ 0x1802336D8
 * Callers:
 *     ?StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x180697FE0 (-StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall lambda_5ac696817d9ead6e33159563da3f5a7c_::_lambda_5ac696817d9ead6e33159563da3f5a7c_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 v5; // rax
  __int64 result; // rax

  v5 = *a3;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v5;
  std::wstring::wstring((_QWORD *)(a1 + 16), a4);
  result = a1;
  *(_BYTE *)(a1 + 48) = *a5;
  return result;
}
