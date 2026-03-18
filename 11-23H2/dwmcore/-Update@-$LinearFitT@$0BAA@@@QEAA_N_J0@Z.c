/*
 * XREFs of ?Update@?$LinearFitT@$0BAA@@@QEAA_N_J0@Z @ 0x1800461B8
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180046D40 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?Compute_b0_b1@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x180045FB0 (-Compute_b0_b1@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x1800C0938 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     ?AddToSums@?$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z @ 0x1800D98B0 (-AddToSums@-$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z.c)
 *     ?InitWithPoint@?$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z @ 0x1801D181C (-InitWithPoint@-$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z.c)
 *     ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x1801D1864 (-RebaseSums@-$LinearFitT@$0BAA@@@QEAA_NXZ.c)
 */

char __fastcall LinearFitT<256>::Update(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  _QWORD *v6; // rdi
  bool v8; // bp
  __int64 v9; // r15
  signed __int64 v10; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx

  v3 = *(_DWORD *)(a1 + 8);
  v6 = (_QWORD *)(16LL * (unsigned __int8)v3 + a1 + 104);
  if ( !v3 )
  {
    *v6 = a2;
    v6[1] = a3;
    LinearFitT<256>::Reset();
    *(_OWORD *)(a1 + 104) = *(_OWORD *)v6;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 8) = 1;
LABEL_11:
    LinearFitT<256>::Compute_b0_b1(a1);
    return 1;
  }
  v8 = 0;
  v9 = 2LL * (unsigned __int8)(v3 - 1);
  v10 = abs64(a3 - *(_QWORD *)(a1 + 16LL * (unsigned __int8)(v3 - 1) + 112));
  if ( a2 > *(_QWORD *)(a1 + 16LL * (unsigned __int8)(v3 - 1) + 104) + *(_QWORD *)(a1 + 88)
    || v10 > *(_QWORD *)(a1 + 96) )
  {
    if ( v3 > 0x100 )
    {
      if ( (v3 & 0x1FF) == 0 )
        v8 = (unsigned __int8)LinearFitT<256>::RebaseSums(a1) == 0;
      v12 = *v6 - *(_QWORD *)(a1 + 40);
      v13 = v6[1] - *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 56) -= v12;
      *(_QWORD *)(a1 + 64) -= v13;
      *(_QWORD *)(a1 + 72) -= v12 * v13;
      *(_QWORD *)(a1 + 80) -= v12 * v12;
    }
    *v6 = a2;
    v6[1] = a3;
    if ( !(unsigned __int8)LinearFitT<256>::AddToSums(a1, v6)
      && (!(unsigned __int8)LinearFitT<256>::RebaseSums(a1) || !(unsigned __int8)LinearFitT<256>::AddToSums(a1, v6))
      || v8
      || *v6 <= *(_QWORD *)(a1 + 8 * v9 + 104)
      || *(__int64 *)(a1 + 96) > 0 && v10 > *(_QWORD *)(a1 + 96) )
    {
      LinearFitT<256>::InitWithPoint(a1, v6);
    }
    goto LABEL_11;
  }
  return 0;
}
