/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C0027720
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0025B30 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this, unsigned int a2)
{
  unsigned int v2; // edi
  struct REGION *Region; // rax
  struct REGION *v5; // rcx
  _DWORD *v6; // rax
  _QWORD *v7; // rax

  *((_DWORD *)this + 2) = 0;
  v2 = 112;
  if ( a2 >= 0x70 )
    v2 = a2;
  Region = RGNMEMOBJ::AllocateRegion(v2);
  *(_QWORD *)this = Region;
  v5 = Region;
  if ( Region )
  {
    *((_DWORD *)Region + 24) = 0;
    *((_DWORD *)Region + 25) = 0;
    *((_DWORD *)Region + 26) = 0;
    *((_DWORD *)Region + 27) = 0;
    *((_DWORD *)Region + 20) = 16;
    *((_DWORD *)Region + 21) = 1;
    v6 = (_DWORD *)*((_QWORD *)Region + 11);
    *v6 = 0;
    v6[3] = 0;
    v6[1] = 0x80000000;
    v6[2] = 0x7FFFFFFF;
    *((_QWORD *)v5 + 5) = v6 + 4;
    *(_DWORD *)(*(_QWORD *)this + 24LL) = v2;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    v7 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v7[1] = v7;
    *v7 = v7;
  }
  return this;
}
