/*
 * XREFs of ??$CreatePropertySetValue@UPropertySetMatrix4x4Value@@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AUPropertySetMatrix4x4Value@@IPEBUD2DMatrix@@@Z @ 0x18006F2C8
 * Callers:
 *     ??$AddProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x18006EC6C (--$AddProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Wi.c)
 *     ??$InsertProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DMatrix@@@Z @ 0x18006EE54 (--$InsertProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI.c)
 *     ??$UpdateAnimatedProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBUD2DMatrix@@_N1G@Z @ 0x1801488D0 (--$UpdateAnimatedProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Compos.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::CreatePropertySetValue<PropertySetMatrix4x4Value,D2DMatrix>(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  unsigned int *v4; // r10
  unsigned int v5; // r11d
  __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _OWORD *v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // rcx
  int v17; // r8d
  _OWORD *v18; // r8
  __int64 result; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1, a3) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  *v4 = v5;
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v3, v5) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  v10 = *v7;
  *(_DWORD *)(v8 + 8) = *(_DWORD *)(*v7 + 8 * v9);
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  *(_DWORD *)(v14 + 4) = *(_DWORD *)(v10 + 8 * v15 + 4) & 0x1FFFFFFF;
  if ( v13 )
  {
    v18 = v13;
  }
  else
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v12, v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v18 = (_OWORD *)(*(_QWORD *)(v16 + 32) + (v17 & 0x1FFFFFFF));
  }
  result = v14;
  v20 = v18[1];
  *(_OWORD *)(v14 + 12) = *v18;
  v21 = v18[2];
  *(_OWORD *)(v14 + 28) = v20;
  v22 = v18[3];
  *(_OWORD *)(v14 + 44) = v21;
  *(_OWORD *)(v14 + 60) = v22;
  return result;
}
