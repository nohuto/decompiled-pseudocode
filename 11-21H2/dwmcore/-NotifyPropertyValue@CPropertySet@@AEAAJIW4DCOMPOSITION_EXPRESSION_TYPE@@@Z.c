/*
 * XREFs of ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180047FBC
 * Callers:
 *     ??$PropertyUpdated@UD2DVector2@@@CPropertySet@@AEAAJIIPEBUD2DVector2@@@Z @ 0x180019288 (--$PropertyUpdated@UD2DVector2@@@CPropertySet@@AEAAJIIPEBUD2DVector2@@@Z.c)
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x180047A48 (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ??$PropertyUpdated@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180047E9C (--$PropertyUpdated@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIPEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$PropertyUpdated@UD2DVector3@@@CPropertySet@@AEAAJIIPEBUD2DVector3@@@Z @ 0x1800E1AAC (--$PropertyUpdated@UD2DVector3@@@CPropertySet@@AEAAJIIPEBUD2DVector3@@@Z.c)
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x1800E763C (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ??$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z @ 0x1800EBC70 (--$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z.c)
 *     ?NotifyCurrentPropertyValuesInternal@CPropertySet@@IEAAJI@Z @ 0x1800EFD6C (-NotifyCurrentPropertyValuesInternal@CPropertySet@@IEAAJI@Z.c)
 *     ??$PropertyUpdated@UD2DQuaternion@@@CPropertySet@@AEAAJIIPEBUD2DQuaternion@@@Z @ 0x1802390C8 (--$PropertyUpdated@UD2DQuaternion@@@CPropertySet@@AEAAJIIPEBUD2DQuaternion@@@Z.c)
 *     ??$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z @ 0x1802391E8 (--$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z.c)
 *     ??$PropertyUpdated@_N@CPropertySet@@AEAAJIIPEB_N@Z @ 0x180239308 (--$PropertyUpdated@_N@CPropertySet@@AEAAJIIPEB_N@Z.c)
 * Callees:
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x1800476E8 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x1800477A4 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180047888 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180048304 (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x18004832C (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801BCAB8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x180203498 (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::NotifyPropertyValue(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // r9
  CPropertyChangeResource *v7; // r10
  _QWORD *v8; // r11
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // r9
  CPropertyChangeResource *v16; // r10
  _QWORD *v17; // r11
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // edx
  __int64 v23; // r9
  CPropertyChangeResource *v24; // r10
  _QWORD *v25; // r11
  int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // edx
  __int64 v31; // r9
  CPropertyChangeResource *v32; // r10
  _QWORD *v33; // r11
  int v34; // eax
  unsigned int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // edx
  __int64 v39; // r9
  CPropertyChangeResource *v40; // r10
  _QWORD *v41; // r11
  int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // r8
  __int64 v47; // r9
  CPropertyChangeResource *v48; // r10
  int v49; // eax
  unsigned int v50; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  switch ( a3 )
  {
    case 18:
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               a1 + 88,
                               a2) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v45,
                               v44) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v49 = CPropertyChangeResource::NotifyScalarPropertyChanged(
              v48,
              v47,
              *(float *)(v46[4] + (*(_DWORD *)(*v46 + 8 * v47 + 4) & 0x1FFFFFFF)));
      v11 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x22Eu, 0LL);
        return v11;
      }
      return 0;
    case 35:
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               a1 + 88,
                               a2) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v37,
                               v36) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v42 = CPropertyChangeResource::NotifyVector2PropertyChanged(
              v40,
              v38,
              (const struct D2DVector2 *)(v41[4] + (*(_DWORD *)(*v41 + 8 * v39 + 4) & 0x1FFFFFFF)));
      v11 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x231u, 0LL);
        return v11;
      }
      return 0;
    case 52:
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               a1 + 88,
                               a2) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v29,
                               v28) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v34 = CPropertyChangeResource::NotifyVector3PropertyChanged(
              v32,
              v30,
              (const struct D2DVector3 *)(v33[4] + (*(_DWORD *)(*v33 + 8 * v31 + 4) & 0x1FFFFFFF)));
      v11 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x234u, 0LL);
        return v11;
      }
      return 0;
    case 69:
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               a1 + 88,
                               a2) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v21,
                               v20) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v26 = CPropertyChangeResource::NotifyVector4PropertyChanged(
              v24,
              v22,
              (const struct D2DVector4 *)(v25[4] + (*(_DWORD *)(*v25 + 8 * v23 + 4) & 0x1FFFFFFF)));
      v11 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x237u, 0LL);
        return v11;
      }
      return 0;
    case 104:
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               a1 + 88,
                               a2) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v13,
                               v12) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v18 = CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(
              v16,
              v14,
              (const struct D2D_MATRIX_3X2_F *)(v17[4] + (*(_DWORD *)(*v17 + 8 * v15 + 4) & 0x1FFFFFFF)));
      v11 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x23Eu, 0LL);
        return v11;
      }
      return 0;
  }
  if ( a3 != 265 )
    return 0;
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 88, a2) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v4, v3) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  v9 = CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
         v7,
         v5,
         (const struct D2DMatrix *)(v8[4] + (*(_DWORD *)(*v8 + 8 * v6 + 4) & 0x1FFFFFFF)));
  v11 = v9;
  if ( v9 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x241u, 0LL);
  return v11;
}
