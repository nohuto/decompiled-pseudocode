/*
 * XREFs of ??$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x1804E373C
 * Callers:
 *     _lambda_029abab5a5354574d9f4afbbc91035ea_::operator() @ 0x1804E5BEC (_lambda_029abab5a5354574d9f4afbbc91035ea_--operator().c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D66A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VClientWindowReadyForPresentationEventArgs@@AEB_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@12@AEB_N@Z @ 0x1804E35AC (--$Make@VClientWindowReadyForPresentationEventArgs@@AEB_N@Details@WRL@Microsoft@@YA-AV-$ComPtr@V.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<ClientWindowReadyForPresentationEventArgs,bool const &>(_QWORD *a1, char *a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<ClientWindowReadyForPresentationEventArgs,bool const &>(a1, a2);
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x3D,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v3);
  return a1;
}
