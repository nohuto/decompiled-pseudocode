/*
 * XREFs of ?PeekStackValue@CNaturalAnimation@@AEAA?ATInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x180226F90
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180225B8C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::PeekStackValue(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  unsigned __int8 v6; // al
  unsigned int v7; // edx
  CExpressionValue *v8; // rax
  _DWORD *v9; // rbx
  int v10; // eax
  unsigned __int8 v11; // al
  unsigned int v12; // edx
  CExpressionValue *v13; // rax
  _QWORD *v14; // rbx
  unsigned __int8 IsEnabled; // al
  unsigned int v16; // edx
  CExpressionValue *v17; // rax
  _DWORD *v18; // rbx
  _BYTE v20[88]; // [rsp+20h] [rbp-58h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v5 = *(_DWORD *)(a1 + 152);
  switch ( v5 )
  {
    case 18:
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v16 = *(_DWORD *)(a3 + 16) - 1;
      if ( IsEnabled && v16 >= *(_DWORD *)(a3 + 48) )
      {
        v17 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
        v18 = &CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v17);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
      }
      else
      {
        v18 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(a3 + 24), v16);
      }
      *(_DWORD *)a2 = *v18;
      break;
    case 35:
      v11 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v12 = *(_DWORD *)(a3 + 16) - 1;
      if ( v11 && v12 >= *(_DWORD *)(a3 + 48) )
      {
        v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
        v14 = &CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
      }
      else
      {
        v14 = (_QWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(a3 + 24), v12);
      }
      *(_QWORD *)a2 = *v14;
      break;
    case 52:
      v6 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v7 = *(_DWORD *)(a3 + 16) - 1;
      if ( v6 && v7 >= *(_DWORD *)(a3 + 48) )
      {
        v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
        v9 = &CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
      }
      else
      {
        v9 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(a3 + 24), v7);
      }
      v10 = v9[2];
      *(_QWORD *)a2 = *(_QWORD *)v9;
      *(_DWORD *)(a2 + 8) = v10;
      break;
    default:
      ModuleFailFastForHRESULT(2147500037LL, retaddr);
  }
  return a2;
}
