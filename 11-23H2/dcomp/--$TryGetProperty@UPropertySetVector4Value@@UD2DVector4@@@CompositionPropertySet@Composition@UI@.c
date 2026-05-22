/*
 * XREFs of ??$TryGetProperty@UPropertySetVector4Value@@UD2DVector4@@@CompositionPropertySet@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@123@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x180148638
 * Callers:
 *     ?TryGetVector4@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUVector4@Numerics@Foundation@5@PEAW4CompositionGetValueStatus@345@@Z @ 0x180149890 (-TryGetVector4@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUVector.c)
 * Callees:
 *     ?GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@Z @ 0x18006EDD4 (-GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::TryGetProperty<PropertySetVector4Value,D2DVector4>(
        Windows::UI::Composition::CompositionPropertySet *a1,
        HSTRING a2,
        unsigned int a3,
        _OWORD *a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r10
  const void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v17; // [rsp+40h] [rbp+18h] BYREF

  v17 = a3;
  v6 = 0;
  if ( Windows::UI::Composition::CompositionPropertySet::GetPropertyIdFromName(a1, a2, &v17) )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             (char *)a1 + 208,
                             v17) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    if ( *(_DWORD *)(*v9 + 8 * v7) == 69 )
    {
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v8, v7) )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v11,
                               v10) )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      *a4 = *(_OWORD *)((*(_DWORD *)(v14 + 8 * v12 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v13 + 32));
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 2;
  }
  return v6;
}
