/*
 * XREFs of ??1CNineGridDrawListBrush@@UEAA@XZ @ 0x1800A8D8C
 * Callers:
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x1800A8160 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x1800A8DBC (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??1CoordMap@@QEAA@XZ @ 0x1800A8ED0 (--1CoordMap@@QEAA@XZ.c)
 */

void __fastcall CNineGridDrawListBrush::~CNineGridDrawListBrush(CNineGridDrawListBrush *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  CoordMap::~CoordMap((CNineGridDrawListBrush *)((char *)this + 112));
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
    std::default_delete<CDrawListBrush>::operator()(v2, v3);
}
