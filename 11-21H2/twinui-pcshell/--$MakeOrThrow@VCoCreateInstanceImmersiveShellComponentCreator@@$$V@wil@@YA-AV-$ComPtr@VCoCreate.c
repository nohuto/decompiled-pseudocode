/*
 * XREFs of ??$MakeOrThrow@VCoCreateInstanceImmersiveShellComponentCreator@@$$V@wil@@YA?AV?$ComPtr@VCoCreateInstanceImmersiveShellComponentCreator@@@WRL@Microsoft@@XZ @ 0x1801429BC
 * Callers:
 *     ??0ComponentCreator@@QEAA@XZ @ 0x180142848 (--0ComponentCreator@@QEAA@XZ.c)
 * Callees:
 *     ??$Make@VCoCreateInstanceImmersiveShellComponentCreator@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCoCreateInstanceImmersiveShellComponentCreator@@@12@XZ @ 0x1801429F8 (--$Make@VCoCreateInstanceImmersiveShellComponentCreator@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPt.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<CoCreateInstanceImmersiveShellComponentCreator,>(_QWORD *a1)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<CoCreateInstanceImmersiveShellComponentCreator,>(a1);
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x38,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\wrl.h",
      v2);
  return a1;
}
