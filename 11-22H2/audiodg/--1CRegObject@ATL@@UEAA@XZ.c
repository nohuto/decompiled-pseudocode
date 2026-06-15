/*
 * XREFs of ??1CRegObject@ATL@@UEAA@XZ @ 0x1400902E4
 * Callers:
 *     ??_ECRegObject@ATL@@UEAAPEAXI@Z @ 0x140090820 (--_ECRegObject@ATL@@UEAAPEAXI@Z.c)
 *     ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x140094134 (-UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z.c)
 * Callees:
 *     ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x140091404 (-ClearReplacements@CExpansionVector@ATL@@QEAAJXZ.c)
 *     ?ClearReplacements@CRegObject@ATL@@UEAAJXZ @ 0x140091490 (-ClearReplacements@CRegObject@ATL@@UEAAJXZ.c)
 */

void __fastcall ATL::CRegObject::~CRegObject(ATL::CRegObject *this)
{
  *(_QWORD *)this = &ATL::CRegObject::`vftable';
  ATL::CRegObject::ClearReplacements(this);
  if ( *((_BYTE *)this + 72) )
  {
    *((_BYTE *)this + 72) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
  ATL::CExpansionVector::ClearReplacements((ATL::CRegObject *)((char *)this + 8));
  ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAll((__int64)this + 8);
}
