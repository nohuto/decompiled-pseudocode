/*
 * XREFs of ??$TryGetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@123@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatrix@@@Z @ 0x1801483B8
 * Callers:
 *     ?TryGetMatrix4x4@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUMatrix4x4@Numerics@Foundation@5@PEAW4CompositionGetValueStatus@345@@Z @ 0x180149610 (-TryGetMatrix4x4@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUMatr.c)
 * Callees:
 *     ?GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@Z @ 0x18006EDD4 (-GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::TryGetProperty<PropertySetMatrix4x4Value,D2DMatrix>(
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
  __int64 v15; // rax
  __int64 v16; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v19; // [rsp+40h] [rbp+18h] BYREF

  v19 = a3;
  v6 = 0;
  if ( Windows::UI::Composition::CompositionPropertySet::GetPropertyIdFromName(a1, a2, &v19) )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             (char *)a1 + 208,
                             v19) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    if ( *(_DWORD *)(*v9 + 8 * v7) == 265 )
    {
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v8, v7) )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v11,
                               v10) )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v15 = *(_QWORD *)(v13 + 32);
      v16 = *(_DWORD *)(v14 + 8 * v12 + 4) & 0x1FFFFFFF;
      *a4 = *(_OWORD *)(v16 + v15);
      a4[1] = *(_OWORD *)(v16 + v15 + 16);
      a4[2] = *(_OWORD *)(v16 + v15 + 32);
      a4[3] = *(_OWORD *)(v16 + v15 + 48);
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
