/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e4386f35b8603616d8ddd0087d6df351__Spectre::Utils::Math::Color_Spectre::Utils::Math::Color_::_Do_call @ 0x180091310
 * Callers:
 *     <none>
 * Callees:
 *     ?Evaluate@ColorTransform@Engine@Spectre@@QEBA?AUColor@Math@Utils@3@U4563@@Z @ 0x18008FADC (-Evaluate@ColorTransform@Engine@Spectre@@QEBA-AUColor@Math@Utils@3@U4563@@Z.c)
 */

__m128 *__fastcall std::_Func_impl_no_alloc__lambda_e4386f35b8603616d8ddd0087d6df351__Spectre::Utils::Math::Color_Spectre::Utils::Math::Color_::_Do_call(
        __int64 a1,
        __m128 *a2,
        __m128 *a3)
{
  __int64 v3; // rcx
  __m128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6 = *a3;
  Spectre::Engine::ColorTransform::Evaluate(v3, a2, &v6);
  return a2;
}
