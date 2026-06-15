/*
 * XREFs of ??_GCEndpointCharacteristicsCache@@UEAAPEAXI@Z @ 0x18014ACF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CEndpointCharacteristicsCache@@UEAA@XZ @ 0x18014A798 (--1CEndpointCharacteristicsCache@@UEAA@XZ.c)
 */

CEndpointCharacteristicsCache *__fastcall CEndpointCharacteristicsCache::`scalar deleting destructor'(
        CEndpointCharacteristicsCache *this,
        char a2)
{
  CEndpointCharacteristicsCache::~CEndpointCharacteristicsCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
