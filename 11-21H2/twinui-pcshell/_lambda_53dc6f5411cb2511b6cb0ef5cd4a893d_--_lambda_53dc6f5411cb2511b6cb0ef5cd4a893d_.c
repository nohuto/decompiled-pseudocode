/*
 * XREFs of _lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::_lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_ @ 0x1801B6620
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_____lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___ @ 0x1801B6210 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_53dc6f5411cb2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::_lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_(
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
  v3 = *(_QWORD *)(a2 + 40);
  v4 = *(_OWORD *)(a2 + 8);
  v5 = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_OWORD *)(a1 + 8) = v4;
  *(_OWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 40) = v3;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  if ( a1 + 72 != a2 + 72 )
  {
    *(_QWORD *)(a1 + 72) = *v2;
    *v2 = 0LL;
  }
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
  *(_QWORD *)(a2 + 80) = 0LL;
  *(_QWORD *)(a2 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  result = a1;
  *(_QWORD *)(a2 + 104) = 0LL;
  return result;
}
