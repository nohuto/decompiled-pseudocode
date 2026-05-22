/*
 * XREFs of ??$AtomicUpdate@V_lambda_52093a543d930a23227038ef4477ab24_@@V_lambda_5d7378cbef73702dd538c6a7e108f3f5_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_52093a543d930a23227038ef4477ab24_@@AEBV_lambda_5d7378cbef73702dd538c6a7e108f3f5_@@@Z @ 0x180172C08
 * Callers:
 *     ??R_lambda_d182d3414fe79c86c04964364aeaace7_@@QEBAJXZ @ 0x18017337C (--R_lambda_d182d3414fe79c86c04964364aeaace7_@@QEBAJXZ.c)
 * Callees:
 *     ??R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z @ 0x180141514 (--R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_52093a543d930a23227038ef4477ab24_,_lambda_5d7378cbef73702dd538c6a7e108f3f5_>(
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
