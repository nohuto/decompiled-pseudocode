/*
 * XREFs of ??$AtomicUpdate@V_lambda_da13972fd8f897e5ec530fac9e9574b1_@@V_lambda_6fdcd1a62bb591227af8c844bf35e9a9_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_da13972fd8f897e5ec530fac9e9574b1_@@AEBV_lambda_6fdcd1a62bb591227af8c844bf35e9a9_@@@Z @ 0x1803F2AE8
 * Callers:
 *     ??$Do@V_lambda_fb0fd1bbfe069265d6b33c489869e354_@@V_lambda_6fdcd1a62bb591227af8c844bf35e9a9_@@@?$InvalidationChecker@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEBV_lambda_fb0fd1bbfe069265d6b33c489869e354_@@AEBV_lambda_6fdcd1a62bb591227af8c844bf35e9a9_@@@Z @ 0x1803F3D00 (--$Do@V_lambda_fb0fd1bbfe069265d6b33c489869e354_@@V_lambda_6fdcd1a62bb591227af8c844bf35e9a9_@@@-.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R_lambda_126f2bb95a9c522f57958bcf46be2931_@@QEBA@XZ @ 0x1803F9FF4 (--R_lambda_126f2bb95a9c522f57958bcf46be2931_@@QEBA@XZ.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_da13972fd8f897e5ec530fac9e9574b1_,_lambda_6fdcd1a62bb591227af8c844bf35e9a9_>(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int32 v3; // ebx
  int v7; // eax
  __int64 v8; // rdx
  bool v9; // zf
  signed __int32 v10; // eax

  v3 = *a1;
  while ( 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(**(_QWORD **)a2 + 64LL)
                                                                           + 128LL))(
           *(_QWORD *)(**(_QWORD **)a2 + 64LL),
           v3,
           **(unsigned int **)(a2 + 8),
           **(_QWORD **)(a2 + 16),
           **(_QWORD **)(a2 + 24));
    v8 = (unsigned int)v7;
    if ( v7 < 0 )
      break;
    v10 = _InterlockedCompareExchange(a1, v3 + ***(_DWORD ***)(a2 + 24), v3);
    v9 = v3 == v10;
    v3 = v10;
    if ( v9 )
      break;
    _lambda_126f2bb95a9c522f57958bcf46be2931_::operator()(a3, v8);
  }
  return (unsigned int)v8;
}
