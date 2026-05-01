/*
 * XREFs of _lambda_0ccf2911bb3556e965c79eb60c053427_::_lambda_0ccf2911bb3556e965c79eb60c053427_ @ 0x1801B64E4
 * Callers:
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390_____lambda_5aee2b6cb60dad32042c7fd4933dc390___ @ 0x1801B6174 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390_.c)
 *     CreationThreadDispatcher::RunSync__lambda_0ccf2911bb3556e965c79eb60c053427___ @ 0x1801B6334 (CreationThreadDispatcher--RunSync__lambda_0ccf2911bb3556e965c79eb60c053427___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_0ccf2911bb3556e965c79eb60c053427_::_lambda_0ccf2911bb3556e965c79eb60c053427_(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v2 = (_QWORD *)(a2 + 72);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 48);
  v4 = *(_OWORD *)(a2 + 16);
  v5 = *(_OWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_OWORD *)(a1 + 16) = v4;
  *(_OWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 48) = v3;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  if ( a1 + 72 != a2 + 72 )
  {
    *(_QWORD *)(a1 + 72) = *v2;
    *v2 = 0LL;
  }
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
  result = a1;
  *(_QWORD *)(a2 + 88) = 0LL;
  return result;
}
