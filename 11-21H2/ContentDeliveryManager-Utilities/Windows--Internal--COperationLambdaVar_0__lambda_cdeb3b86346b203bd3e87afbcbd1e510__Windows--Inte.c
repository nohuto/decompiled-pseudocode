/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_cdeb3b86346b203bd3e87afbcbd1e510__Windows::Internal::CNoResult_::COperationLambdaVar_0__lambda_cdeb3b86346b203bd3e87afbcbd1e510__Windows::Internal::CNoResult___lambda_cdeb3b86346b203bd3e87afbcbd1e510___ @ 0x180051B58
 * Callers:
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_cdeb3b86346b203bd3e87afbcbd1e510___ @ 0x180052F50 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymous_namespace_-.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180022218 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_cdeb3b86346b203bd3e87afbcbd1e510__Windows::Internal::CNoResult_::COperationLambdaVar_0__lambda_cdeb3b86346b203bd3e87afbcbd1e510__Windows::Internal::CNoResult___lambda_cdeb3b86346b203bd3e87afbcbd1e510___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // r8
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx

  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
  v3 = (_QWORD *)(a1 + 16);
  v4 = (_QWORD *)(a2 + 8);
  *v3 = 0LL;
  if ( v3 != (_QWORD *)(a2 + 8) )
  {
    *v3 = *v4;
    *v4 = 0LL;
  }
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  *(_BYTE *)(a2 + 32) = 1;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_BYTE *)(a1 + 56) = 0;
  *(_BYTE *)(a2 + 48) = 1;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a1 + 72) = 0;
  *(_BYTE *)(a2 + 64) = 1;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_BYTE *)(a1 + 88) = 0;
  *(_BYTE *)(a2 + 80) = 1;
  v5 = (_QWORD *)(a2 + 88);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( a1 + 96 != a2 + 88 )
  {
    *(_QWORD *)(a1 + 96) = *v5;
    *v5 = 0LL;
  }
  v6 = (_QWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( (_QWORD *)(a1 + 104) != v6 )
  {
    *(_QWORD *)(a1 + 104) = *v6;
    *v6 = 0LL;
  }
  *(_QWORD *)a1 = off_1800FE8B0;
  *(_DWORD *)(a1 + 112) = 0;
  `eh vector constructor iterator'(
    (void *)(a1 + 120),
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  *(_DWORD *)(a1 + 112) = 0;
  return a1;
}
