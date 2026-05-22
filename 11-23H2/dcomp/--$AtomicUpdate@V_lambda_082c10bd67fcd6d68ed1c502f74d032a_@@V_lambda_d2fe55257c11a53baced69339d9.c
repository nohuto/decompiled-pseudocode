/*
 * XREFs of ??$AtomicUpdate@V_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@V_lambda_d2fe55257c11a53baced69339d9810de_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@AEBV_lambda_d2fe55257c11a53baced69339d9810de_@@@Z @ 0x18014013C
 * Callers:
 *     ??R_lambda_6e445863887e508862c75d5b70d4ecb2_@@QEBAJXZ @ 0x1801416E0 (--R_lambda_6e445863887e508862c75d5b70d4ecb2_@@QEBAJXZ.c)
 * Callees:
 *     ??R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z @ 0x180141514 (--R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_082c10bd67fcd6d68ed1c502f74d032a_,_lambda_d2fe55257c11a53baced69339d9810de_>(
        volatile signed __int32 *a1,
        __int64 a2,
        _BYTE ***a3)
{
  unsigned __int32 v3; // edi
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
