/*
 * XREFs of ?Step@BreakdownIterator@CRegion@@QEAAXXZ @ 0x1801B23E4
 * Callers:
 *     ?ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z @ 0x1800FE198 (-ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800816D8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

void __fastcall CRegion::BreakdownIterator::Step(CRegion::BreakdownIterator *this)
{
  int v2; // r9d
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // r8d
  int v6; // r11d
  int v7; // edx
  int v8; // ecx
  FastRegion::Internal::CRgnData *v9; // rcx
  __int64 v10; // r10
  int *v11; // r11
  int v12; // edx

  v2 = *(_DWORD *)(*((_QWORD *)this + 2) + 8LL);
  v3 = 2 * *((_DWORD *)this + 8);
  v4 = *((_QWORD *)this + 3);
  v5 = *(_DWORD *)(v4 + 4 * v3 + 4);
  v6 = *(_DWORD *)(v4 + 4 * v3);
  v7 = *((_DWORD *)this + 14);
  v8 = v7 + *((_DWORD *)this + 13);
  *((_DWORD *)this + 13) = v8;
  if ( v8 >= v5 )
  {
    v9 = (FastRegion::Internal::CRgnData *)(unsigned int)(v7 + *((_DWORD *)this + 12));
    *((_DWORD *)this + 13) = v6;
    *((_DWORD *)this + 12) = (_DWORD)v9;
    if ( (int)v9 >= v2 )
    {
      FastRegion::Internal::CRgnData::StepIterator(v9, this);
      v11 = *(int **)(v10 + 16);
      if ( (unsigned __int64)v11 < *(_QWORD *)(v10 + 8) )
      {
        v12 = *v11;
        *(_DWORD *)(v10 + 52) = *(_DWORD *)(*(_QWORD *)(v10 + 24) + 8LL * *(_DWORD *)(v10 + 32));
        *(_DWORD *)(v10 + 48) = v12;
      }
      else
      {
        *(_BYTE *)(v10 + 60) = 1;
      }
    }
  }
}
