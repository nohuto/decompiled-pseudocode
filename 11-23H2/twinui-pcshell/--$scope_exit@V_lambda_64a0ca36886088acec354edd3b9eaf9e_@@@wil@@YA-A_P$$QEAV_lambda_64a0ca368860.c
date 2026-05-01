/*
 * XREFs of ??$scope_exit@V_lambda_64a0ca36886088acec354edd3b9eaf9e_@@@wil@@YA?A_P$$QEAV_lambda_64a0ca36886088acec354edd3b9eaf9e_@@@Z @ 0x18024F428
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$1 @ 0x180250E90 (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_ResumeCo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit<_lambda_64a0ca36886088acec354edd3b9eaf9e_>(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_WORD *)(a2 + 8) = 0;
  result = a1;
  *(_QWORD *)(a2 + 32) = 7LL;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}
