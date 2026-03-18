/*
 * XREFs of ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x1800435B4
 * Callers:
 *     ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x180043570 (--_ECAtlasedRectsMesh@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ @ 0x180044510 (-UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ.c)
 */

void __fastcall CAtlasedRectsMesh::~CAtlasedRectsMesh(CAtlasedRectsMesh *this)
{
  *(_QWORD *)this = &CAtlasedRectsMesh::`vftable';
  CAtlasedRectsMesh::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
