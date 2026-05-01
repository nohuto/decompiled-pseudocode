/*
 * XREFs of ??0_lambda_64a0ca36886088acec354edd3b9eaf9e_@@QEAA@PEAU_ITEMIDLIST@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18024F55C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$1 @ 0x180250E90 (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_ResumeCo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_64a0ca36886088acec354edd3b9eaf9e_::_lambda_64a0ca36886088acec354edd3b9eaf9e_(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int64 result; // rax

  v3 = *a3;
  *(_QWORD *)a1 = a2;
  v4 = a3[1];
  *((_QWORD *)a3 + 2) = 0LL;
  *(_OWORD *)(a1 + 8) = v3;
  *(_WORD *)a3 = 0;
  result = a1;
  *(_OWORD *)(a1 + 24) = v4;
  *((_QWORD *)a3 + 3) = 7LL;
  return result;
}
