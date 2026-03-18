/*
 * XREFs of ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x180239828
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180047B70 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x180237B6C (--$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801BCAB8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ??$PropertyUpdated@_N@CPropertySet@@AEAAJIIPEB_N@Z @ 0x180239308 (--$PropertyUpdated@_N@CPropertySet@@AEAAJIIPEB_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<bool>(CResource *this, unsigned int a2)
{
  _QWORD *v3; // rcx
  unsigned int v4; // r10d
  unsigned int v5; // edx
  __int64 v6; // r10
  int v7; // r11d
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  int *v12; // r9
  __int64 v13; // r10
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)this + 88, a2) )
    goto LABEL_9;
  if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)v3, v4) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( *(_DWORD *)(*v3 + 8 * v6) == v7 )
  {
    if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)v3, v5) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v9, v8) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_BYTE *)((*(_DWORD *)(v11 + 8 * v13 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v10 + 32)) = *(_BYTE *)v12;
    v14 = CPropertySet::PropertyUpdated<bool>(this, v13, 1u, v12);
    v16 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x19Fu);
    else
      return 0;
  }
  else
  {
LABEL_9:
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v3, 0LL, 0LL, -2147024809, 0x198u);
  }
  return v16;
}
