/*
 * XREFs of ??$AtomicUpdate@V_lambda_6f7b9b02c1f72892bdbd71f7b6e9478a_@@V_lambda_73ccd5de7d2ce9965ce65d6983f66b4a_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_6f7b9b02c1f72892bdbd71f7b6e9478a_@@AEBV_lambda_73ccd5de7d2ce9965ce65d6983f66b4a_@@@Z @ 0x1801A0208
 * Callers:
 *     ??R_lambda_9f7ebfa46103631af54340278fcc0446_@@QEBAJXZ @ 0x1801A097C (--R_lambda_9f7ebfa46103631af54340278fcc0446_@@QEBAJXZ.c)
 * Callees:
 *     ??R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z @ 0x180141514 (--R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_6f7b9b02c1f72892bdbd71f7b6e9478a_,_lambda_73ccd5de7d2ce9965ce65d6983f66b4a_>(
        volatile signed __int32 *a1,
        __int64 a2,
        _BYTE ***a3)
{
  volatile signed __int32 v3; // edi
  int v7; // r9d
  bool v8; // zf
  signed __int32 v9; // eax
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v7 = _lambda_082c10bd67fcd6d68ed1c502f74d032a_::operator()(a2, v3, &v11);
    if ( v7 < 0 )
      break;
    v9 = _InterlockedCompareExchange(a1, v11, v3);
    v8 = v3 == v9;
    v3 = v9;
    if ( v8 )
      break;
    ***a3 = 0;
  }
  return (unsigned int)v7;
}
