/*
 * XREFs of ??$TryGetProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@123@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEA_N@Z @ 0x1801481B0
 * Callers:
 *     ?TryGetBoolean@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAEPEAW4CompositionGetValueStatus@345@@Z @ 0x180149340 (-TryGetBoolean@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAEPEAW4C.c)
 * Callees:
 *     ?GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@Z @ 0x18006EDD4 (-GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::TryGetProperty<PropertySetBooleanValue,bool>(
        Windows::UI::Composition::CompositionPropertySet *a1,
        HSTRING a2,
        unsigned int a3,
        _BYTE *a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v8; // r8
  const void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = a3;
  v6 = 0;
  if ( Windows::UI::Composition::CompositionPropertySet::GetPropertyIdFromName(a1, a2, &v11) )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             (char *)a1 + 208,
                             v11) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    if ( *(_DWORD *)(*v8 + 8 * v7) == 17 )
      *a4 = *(_BYTE *)((*(_DWORD *)(*v8 + 8 * v7 + 4) & 0x1FFFFFFF) + *((_QWORD *)a1 + 30));
    else
      return 1;
  }
  else
  {
    return 2;
  }
  return v6;
}
