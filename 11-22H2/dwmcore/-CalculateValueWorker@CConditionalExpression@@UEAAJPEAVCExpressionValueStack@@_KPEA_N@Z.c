/*
 * XREFs of ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180227AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800BD9F0 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     memset_0 @ 0x1801100E8 (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_14978362@@@details@wil@@QEAA_NXZ @ 0x180119B04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_14978362@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18021737C (--1CExpressionValue@@QEAA@XZ.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x18022775C (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802279EC (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180228104 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CConditionalExpression::CalculateValueWorker(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        bool *a4)
{
  unsigned int v4; // r15d
  unsigned int v9; // ebx
  int v10; // ecx
  char v11; // r13
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  CConditionalExpression *v17; // rcx
  __int64 v18; // rcx
  int IsAnyConditionSatisfied; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  unsigned int v29; // [rsp+20h] [rbp-69h]
  bool v30; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v31[64]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v32; // [rsp+80h] [rbp-9h]
  int v33; // [rsp+88h] [rbp-1h]
  char v34; // [rsp+8Ch] [rbp+3h]

  v4 = 0;
  *a4 = 0;
  v9 = 0;
  v10 = *((_DWORD *)this + 94) - 1;
  if ( !v10 )
  {
    IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(this, a2, a3, 0LL);
    v9 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, IsAnyConditionSatisfied, 0xF6u, 0LL);
      return v9;
    }
    v21 = *((int *)this + 95);
    if ( (int)v21 < 0 )
    {
      v25 = *((_QWORD *)this + 46);
      if ( !v25 )
        return 1;
      v26 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v25 + 256LL))(
              v25,
              a2,
              a3,
              a4);
      v9 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xFEu, 0LL);
    }
    else
    {
      v22 = *(_QWORD *)(*((_QWORD *)this + 43) + 16 * v21 + 8);
      v23 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v22 + 256LL))(
              v22,
              a2,
              a3,
              a4);
      v9 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xFAu, 0LL);
    }
    return v9;
  }
  if ( v10 == 1 )
  {
    memset_0(v31, 0, sizeof(v31));
    v11 = 1;
    v12 = (__int64)(*((_QWORD *)this + 44) - *((_QWORD *)this + 43)) >> 4;
    v32 = 0LL;
    v33 = 18;
    v34 = 0;
    if ( v12 )
    {
      do
      {
        v13 = CConditionalExpression::CalculateConditionValue(this, v4, a2, a3, &v30);
        v9 = v13;
        if ( v13 < 0 )
        {
          v29 = 289;
          goto LABEL_25;
        }
        if ( v30 )
        {
          v11 = 0;
          v15 = *(_QWORD *)(*((_QWORD *)this + 43) + 16LL * v4 + 8);
          v9 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v15 + 256LL))(
                 v15,
                 a2,
                 a3,
                 a4);
          if ( (v9 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v9, 0x128u, 0LL);
            goto LABEL_26;
          }
          if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_14978362>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_14978362>::GetImpl'::`2'::impl) )
          {
            if ( v9 != 1 )
            {
              v13 = CConditionalExpression::AddStackValueToSum(v17, (struct CExpressionValue *)v31, a2);
              v9 = v13;
              if ( v13 < 0 )
              {
                v29 = 307;
                goto LABEL_25;
              }
            }
          }
          else
          {
            v13 = CConditionalExpression::AddStackValueToSum(v17, (struct CExpressionValue *)v31, a2);
            v9 = v13;
            if ( v13 < 0 )
            {
              v29 = 312;
              goto LABEL_25;
            }
          }
        }
        ++v4;
      }
      while ( v4 < (unsigned __int64)((__int64)(*((_QWORD *)this + 44) - *((_QWORD *)this + 43)) >> 4) );
      if ( v11 )
        goto LABEL_27;
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_14978362>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_14978362>::GetImpl'::`2'::impl) )
      {
        if ( !v34 )
          goto LABEL_30;
        v13 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)v31);
        v9 = v13;
        if ( v13 < 0 )
        {
          v29 = 337;
          goto LABEL_25;
        }
        goto LABEL_26;
      }
      v13 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)v31);
      v9 = v13;
      if ( v13 >= 0 )
        goto LABEL_26;
      v29 = 346;
    }
    else
    {
LABEL_27:
      v18 = *((_QWORD *)this + 46);
      if ( !v18 )
      {
LABEL_30:
        v9 = 1;
        goto LABEL_26;
      }
      v13 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v18 + 256LL))(
              v18,
              a2,
              a3,
              a4);
      v9 = v13;
      if ( v13 >= 0 )
      {
LABEL_26:
        CExpressionValue::~CExpressionValue((CExpressionValue *)v31);
        return v9;
      }
      v29 = 322;
    }
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, v29, 0LL);
    goto LABEL_26;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_14978362>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_14978362>::GetImpl'::`2'::impl) )
    return 1;
  return v9;
}
