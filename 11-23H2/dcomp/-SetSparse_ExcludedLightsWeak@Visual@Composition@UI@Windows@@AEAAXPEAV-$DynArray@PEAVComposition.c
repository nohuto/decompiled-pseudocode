/*
 * XREFs of ?SetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEAAXPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@@Z @ 0x18010C288
 * Callers:
 *     ?RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z @ 0x180001C58 (-RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z.c)
 *     ?AddLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z @ 0x180001F90 (-AddLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18005DC0C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall Windows::UI::Composition::Visual::SetSparse_ExcludedLightsWeak(__int64 a1, __int64 a2)
{
  CSparseStorage *v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (CSparseStorage *)(a1 + 112);
  if ( a2 == `Windows::UI::Composition::Visual::SetSparse_ExcludedLightsWeak'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x20000u;
  else
    CSparseStorage::SetData(v2, 15, 8u, &v3);
}
