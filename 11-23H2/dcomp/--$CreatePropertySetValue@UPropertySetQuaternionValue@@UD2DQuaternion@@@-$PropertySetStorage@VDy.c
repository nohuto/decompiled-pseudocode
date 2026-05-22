/*
 * XREFs of ??$CreatePropertySetValue@UPropertySetQuaternionValue@@UD2DQuaternion@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AUPropertySetQuaternionValue@@IPEBUD2DQuaternion@@@Z @ 0x180147BBC
 * Callers:
 *     ??$AddProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801479F8 (--$AddProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Composition@.c)
 *     ??$InsertProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DQuaternion@@@Z @ 0x180147C80 (--$InsertProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Compositi.c)
 *     ??$UpdateAnimatedProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBUD2DQuaternion@@_N1G@Z @ 0x1801489C8 (--$UpdateAnimatedProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@C.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::CreatePropertySetValue<PropertySetQuaternionValue,D2DQuaternion>(
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
  const void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1, a3) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  *v4 = v5;
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v3, v5) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  v10 = *v7;
  *(_DWORD *)(v8 + 8) = *(_DWORD *)(*v7 + 8 * v9);
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  *(_DWORD *)(v14 + 4) = *(_DWORD *)(v10 + 8 * v15 + 4) & 0x1FFFFFFF;
  if ( v13 )
  {
    v18 = v13;
  }
  else
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v12, v11) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v18 = (_OWORD *)(*(_QWORD *)(v16 + 32) + (v17 & 0x1FFFFFFF));
  }
  result = v14;
  *(_OWORD *)(v14 + 12) = *v18;
  return result;
}
