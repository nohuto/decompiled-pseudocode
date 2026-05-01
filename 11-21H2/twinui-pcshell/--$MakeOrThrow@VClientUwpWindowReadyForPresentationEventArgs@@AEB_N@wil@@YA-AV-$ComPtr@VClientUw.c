/*
 * XREFs of ??$MakeOrThrow@VClientUwpWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientUwpWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x18040ED48
 * Callers:
 *     _lambda_310967b6236448b3e5aa64da1763cc03_::operator() @ 0x18041172C (_lambda_310967b6236448b3e5aa64da1763cc03_--operator().c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VClientUwpWindowReadyForPresentationEventArgs@@AEB_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VClientUwpWindowReadyForPresentationEventArgs@@@12@AEB_N@Z @ 0x18040ECAC (--$Make@VClientUwpWindowReadyForPresentationEventArgs@@AEB_N@Details@WRL@Microsoft@@YA-AV-$ComPt.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<ClientUwpWindowReadyForPresentationEventArgs,bool const &>(_QWORD *a1, char *a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<ClientUwpWindowReadyForPresentationEventArgs,bool const &>(a1, a2);
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x38,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v3);
  return a1;
}
