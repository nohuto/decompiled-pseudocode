/*
 * XREFs of ??1?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@UEAA@XZ @ 0x1800F8E14
 * Callers:
 *     ??_ECAtlasedRectsMesh@@UEAAPEAXI@Z @ 0x1800F8DD0 (--_ECAtlasedRectsMesh@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAAXXZ @ 0x1800F85F8 (-_Tidy@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::~CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>(
        CResource *this)
{
  std::vector<MilRectF>::_Tidy((__int64)this + 96);
  std::vector<MilRectF>::_Tidy((__int64)this + 72);
  CResource::~CResource(this);
}
