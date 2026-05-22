/*
 * XREFs of ??R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z @ 0x180141514
 * Callers:
 *     ??$AtomicUpdate@V_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@V_lambda_d2fe55257c11a53baced69339d9810de_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@AEBV_lambda_d2fe55257c11a53baced69339d9810de_@@@Z @ 0x18014013C (--$AtomicUpdate@V_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@V_lambda_d2fe55257c11a53baced69339d9.c)
 *     ??$AtomicUpdate@V_lambda_af9785ca4f744620e9a39cf0eebaaf92_@@V_lambda_72b783508d248fabbda0c2bf712630dd_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_af9785ca4f744620e9a39cf0eebaaf92_@@AEBV_lambda_72b783508d248fabbda0c2bf712630dd_@@@Z @ 0x1801401AC (--$AtomicUpdate@V_lambda_af9785ca4f744620e9a39cf0eebaaf92_@@V_lambda_72b783508d248fabbda0c2bf712.c)
 *     ??R_lambda_22c970e794a7091f3c6f1fbdcdf59db3_@@QEBAJXZ @ 0x180141608 (--R_lambda_22c970e794a7091f3c6f1fbdcdf59db3_@@QEBAJXZ.c)
 *     ??R_lambda_6e445863887e508862c75d5b70d4ecb2_@@QEBAJXZ @ 0x1801416E0 (--R_lambda_6e445863887e508862c75d5b70d4ecb2_@@QEBAJXZ.c)
 *     ??$AtomicUpdate@V_lambda_09c9abe5d14f7257ba06feb90d45d0ab_@@V_lambda_3e2781199ebf22e7901e8a895445d5e7_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_09c9abe5d14f7257ba06feb90d45d0ab_@@AEBV_lambda_3e2781199ebf22e7901e8a895445d5e7_@@@Z @ 0x18016FB54 (--$AtomicUpdate@V_lambda_09c9abe5d14f7257ba06feb90d45d0ab_@@V_lambda_3e2781199ebf22e7901e8a89544.c)
 *     ??R_lambda_42cf37998c643a75e85d92a62c47960a_@@QEBAJXZ @ 0x1801702C8 (--R_lambda_42cf37998c643a75e85d92a62c47960a_@@QEBAJXZ.c)
 *     ??$AtomicUpdate@V_lambda_52093a543d930a23227038ef4477ab24_@@V_lambda_5d7378cbef73702dd538c6a7e108f3f5_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_52093a543d930a23227038ef4477ab24_@@AEBV_lambda_5d7378cbef73702dd538c6a7e108f3f5_@@@Z @ 0x180172C08 (--$AtomicUpdate@V_lambda_52093a543d930a23227038ef4477ab24_@@V_lambda_5d7378cbef73702dd538c6a7e10.c)
 *     ??R_lambda_d182d3414fe79c86c04964364aeaace7_@@QEBAJXZ @ 0x18017337C (--R_lambda_d182d3414fe79c86c04964364aeaace7_@@QEBAJXZ.c)
 *     ??$AtomicUpdate@V_lambda_6f7b9b02c1f72892bdbd71f7b6e9478a_@@V_lambda_73ccd5de7d2ce9965ce65d6983f66b4a_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_6f7b9b02c1f72892bdbd71f7b6e9478a_@@AEBV_lambda_73ccd5de7d2ce9965ce65d6983f66b4a_@@@Z @ 0x1801A0208 (--$AtomicUpdate@V_lambda_6f7b9b02c1f72892bdbd71f7b6e9478a_@@V_lambda_73ccd5de7d2ce9965ce65d6983f.c)
 *     ??R_lambda_9f7ebfa46103631af54340278fcc0446_@@QEBAJXZ @ 0x1801A097C (--R_lambda_9f7ebfa46103631af54340278fcc0446_@@QEBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_082c10bd67fcd6d68ed1c502f74d032a_::operator()(__int64 a1, unsigned int a2, _DWORD *a3)
{
  bool **v3; // r9
  __int64 *v4; // rax
  __int64 v5; // rcx

  v3 = *(bool ***)a1;
  ***(_BYTE ***)a1 = 0;
  v4 = *(__int64 **)(a1 + 8);
  v5 = *v4;
  if ( a2 >= *(_DWORD *)(*v4 + 44) )
  {
    RoOriginateError(2147483659LL, 0LL);
    return 2147483659LL;
  }
  else
  {
    *a3 = a2 + 1;
    **v3 = a2 + 1 < *(_DWORD *)(v5 + 44);
    return 0LL;
  }
}
