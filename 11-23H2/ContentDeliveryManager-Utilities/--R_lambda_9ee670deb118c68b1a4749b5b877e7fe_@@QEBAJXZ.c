/*
 * XREFs of ??R_lambda_9ee670deb118c68b1a4749b5b877e7fe_@@QEBAJXZ @ 0x180087620
 * Callers:
 *     ??$_DoWithInvalidationCheck@V_lambda_9ee670deb118c68b1a4749b5b877e7fe_@@V_lambda_7cb87bf4bdfa3f48fb11502d87680757_@@@?$SimpleVectorIterator@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@AEAAJAEBV_lambda_9ee670deb118c68b1a4749b5b877e7fe_@@AEBV_lambda_7cb87bf4bdfa3f48fb11502d87680757_@@@Z @ 0x180086A08 (--$_DoWithInvalidationCheck@V_lambda_9ee670deb118c68b1a4749b5b877e7fe_@@V_lambda_7cb87bf4bdfa3f4.c)
 * Callees:
 *     ??R_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@QEBA@XZ @ 0x180087540 (--R_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@QEBA@XZ.c)
 *     ??R_lambda_894185d22e1b3905ed8eff30edc7892d_@@QEBAJIPEAI@Z @ 0x1800875A0 (--R_lambda_894185d22e1b3905ed8eff30edc7892d_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall _lambda_9ee670deb118c68b1a4749b5b877e7fe_::operator()(__int64 *a1)
{
  __int64 v1; // rdx
  _QWORD **v2; // rsi
  __int64 v3; // rax
  volatile signed __int32 *v4; // rdi
  unsigned __int32 v5; // ebx
  bool v6; // zf
  __int64 v7; // rdx
  int v8; // edx
  signed __int32 v9; // eax
  _QWORD v11[4]; // [rsp+20h] [rbp-20h] BYREF
  signed __int32 v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF

  v1 = *a1;
  v2 = (_QWORD **)a1[4];
  v11[0] = &v13;
  v3 = a1[1];
  v13 = v1;
  v4 = (volatile signed __int32 *)(v1 + 40);
  v5 = *(_DWORD *)(v1 + 40);
  v6 = *(_BYTE *)(v1 + 56) == 0;
  v7 = v5;
  v11[1] = v3;
  v11[2] = a1[2];
  v11[3] = a1[3];
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = _lambda_894185d22e1b3905ed8eff30edc7892d_::operator()((__int64)v11, v7, &v12);
      if ( v8 < 0 )
        break;
      v9 = _InterlockedCompareExchange(v4, v12, v5);
      v6 = v5 == v9;
      v5 = v9;
      if ( v6 )
        break;
      _lambda_e4bebcfd8cff58714fd0d0cc226c9862_::operator()(v2);
      v7 = v5;
    }
  }
  else
  {
    return (unsigned int)_lambda_894185d22e1b3905ed8eff30edc7892d_::operator()((__int64)v11, v5, v4);
  }
  return (unsigned int)v8;
}
