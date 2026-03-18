/*
 * XREFs of ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180227600
 * Callers:
 *     <none>
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x18009A5F8 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     memset_0 @ 0x18010FFF8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180216E8C (--1CExpressionValue@@QEAA@XZ.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x18022726C (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802274FC (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180227B94 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CConditionalExpression::CalculateValueWorker(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        bool *a4)
{
  unsigned int v4; // r15d
  int v9; // ecx
  char v10; // r13
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v16; // eax
  CConditionalExpression *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int IsAnyConditionSatisfied; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  bool v35; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v36[64]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v37; // [rsp+80h] [rbp-9h]
  int v38; // [rsp+88h] [rbp-1h]
  char v39; // [rsp+8Ch] [rbp+3h]

  v4 = 0;
  *a4 = 0;
  v9 = *((_DWORD *)this + 94) - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      memset_0(v36, 0, sizeof(v36));
      v10 = 1;
      v11 = (__int64)(*((_QWORD *)this + 44) - *((_QWORD *)this + 43)) >> 4;
      v37 = 0LL;
      v38 = 18;
      v39 = 0;
      if ( v11 )
      {
        do
        {
          v12 = CConditionalExpression::CalculateConditionValue(this, v4, a2, a3, &v35);
          v14 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x120u, 0LL);
            goto LABEL_17;
          }
          if ( v35 )
          {
            v10 = 0;
            v15 = *(_QWORD *)(*((_QWORD *)this + 43) + 16LL * v4 + 8);
            v16 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v15 + 256LL))(
                    v15,
                    a2,
                    a3,
                    a4);
            v14 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v16, 0x127u, 0LL);
              goto LABEL_17;
            }
            if ( v16 != 1 )
            {
              v18 = CConditionalExpression::AddStackValueToSum(v17, (struct CExpressionValue *)v36, a2);
              v14 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x131u, 0LL);
                goto LABEL_17;
              }
            }
          }
          ++v4;
        }
        while ( v4 < (unsigned __int64)((__int64)(*((_QWORD *)this + 44) - *((_QWORD *)this + 43)) >> 4) );
        if ( v10 )
          goto LABEL_18;
        if ( v39 )
        {
          v20 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)v36);
          v14 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x149u, 0LL);
          goto LABEL_17;
        }
      }
      else
      {
LABEL_18:
        v22 = *((_QWORD *)this + 46);
        if ( v22 )
        {
          v23 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v22 + 256LL))(
                  v22,
                  a2,
                  a3,
                  a4);
          v14 = v23;
          if ( v23 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x13Bu, 0LL);
          goto LABEL_17;
        }
      }
      v14 = 1;
LABEL_17:
      CExpressionValue::~CExpressionValue((CExpressionValue *)v36);
      return v14;
    }
    return 1;
  }
  IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(this, a2, a3, 0LL);
  v14 = IsAnyConditionSatisfied;
  if ( IsAnyConditionSatisfied < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, IsAnyConditionSatisfied, 0xF5u, 0LL);
    return v14;
  }
  v27 = *((int *)this + 95);
  if ( (int)v27 < 0 )
  {
    v31 = *((_QWORD *)this + 46);
    if ( !v31 )
      return 1;
    v32 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v31 + 256LL))(
            v31,
            a2,
            a3,
            a4);
    v14 = v32;
    if ( v32 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xFDu, 0LL);
  }
  else
  {
    v28 = *(_QWORD *)(*((_QWORD *)this + 43) + 16 * v27 + 8);
    v29 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v28 + 256LL))(
            v28,
            a2,
            a3,
            a4);
    v14 = v29;
    if ( v29 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xF9u, 0LL);
  }
  return v14;
}
