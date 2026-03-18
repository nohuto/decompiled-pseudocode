/*
 * XREFs of ?Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x1802673A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

float __fastcall CNaturalAnimationScalarForceAdapater::Update(
        CNaturalAnimationScalarForceAdapater *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  int v10; // ecx
  unsigned __int8 v11; // al
  unsigned int v12; // edx
  CExpressionValue *v13; // rax
  float *v14; // rbx
  float result; // xmm0_4
  unsigned __int8 IsEnabled; // al
  unsigned int v17; // edx
  CExpressionValue *v18; // rax
  float *v19; // rbx
  _BYTE v20[80]; // [rsp+30h] [rbp-58h] BYREF
  const void *retaddr; // [rsp+88h] [rbp+0h]
  char v22; // [rsp+90h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    v7 = *(_QWORD *)(v4 + 16);
  else
    v7 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, __int64, char *))(*(_QWORD *)v7 + 256LL))(
         v7,
         a3,
         a4,
         &v22);
  if ( v8 < 0 )
    ModuleFailFastForHRESULT(v8, retaddr);
  v9 = *((_QWORD *)this + 4);
  if ( v9 )
    v9 = *(_QWORD *)(v9 + 16);
  v10 = *(_DWORD *)(v9 + 152);
  if ( v10 == 18 )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v17 = *((_DWORD *)a3 + 4) - 1;
    if ( IsEnabled && v17 >= *((_DWORD *)a3 + 12) )
    {
      v18 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      v19 = (float *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v18);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
    }
    else
    {
      v19 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)a3 + 3, v17);
    }
    result = *v19;
  }
  else
  {
    if ( v10 != 35 )
      ModuleFailFastForHRESULT(-2147467259, retaddr);
    v11 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v12 = *((_DWORD *)a3 + 4) - 1;
    if ( v11 && v12 >= *((_DWORD *)a3 + 12) )
    {
      v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      v14 = (float *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
    }
    else
    {
      v14 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)a3 + 3, v12);
    }
    result = *v14;
    if ( *((_DWORD *)this + 4) )
      result = v14[1];
  }
  --*((_DWORD *)a3 + 4);
  return result;
}
