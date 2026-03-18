/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C007D940
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C003E160 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vInit@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E3F0 (-vInit@RGNMEMOBJ@@QEAAXK@Z.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this, unsigned int a2)
{
  unsigned int v2; // edi
  struct REGION *Region; // rax

  *(_QWORD *)this = 0LL;
  v2 = 112;
  if ( a2 >= 0x70 )
    v2 = a2;
  Region = RGNMEMOBJ::AllocateRegion(v2);
  *(_QWORD *)this = Region;
  if ( Region )
    RGNMEMOBJ::vInit(this, v2);
  return this;
}
