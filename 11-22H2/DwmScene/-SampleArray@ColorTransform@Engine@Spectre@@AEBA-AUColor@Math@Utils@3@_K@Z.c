/*
 * XREFs of ?SampleArray@ColorTransform@Engine@Spectre@@AEBA?AUColor@Math@Utils@3@_K@Z @ 0x180090F6C
 * Callers:
 *     ?Evaluate@ColorTransform@Engine@Spectre@@QEBA?AUColor@Math@Utils@3@U4563@@Z @ 0x18008FADC (-Evaluate@ColorTransform@Engine@Spectre@@QEBA-AUColor@Math@Utils@3@U4563@@Z.c)
 * Callees:
 *     ?FromARGB@Color@Math@Utils@Spectre@@SA?AU1234@I@Z @ 0x18008FCD8 (-FromARGB@Color@Math@Utils@Spectre@@SA-AU1234@I@Z.c)
 */

__int64 __fastcall Spectre::Engine::ColorTransform::SampleArray(__int64 a1, float *a2, __int64 a3)
{
  __int64 v3; // r9

  Spectre::Utils::Math::Color::FromARGB(a2, *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4 * a3));
  return v3;
}
