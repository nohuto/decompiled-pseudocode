/*
 * XREFs of ?QueueUnavailableRegion@CTileClump@DirectComposition@@AEAAXAEBVCRegion@@K@Z @ 0x180038164
 * Callers:
 *     ?RemoveFromValidRegion@CTileClump@DirectComposition@@QEAAJAEBVCRegion@@K@Z @ 0x1800380E4 (-RemoveFromValidRegion@CTileClump@DirectComposition@@QEAAJAEBVCRegion@@K@Z.c)
 *     ?RecoverValidRegions@CVirtualSurface@DirectComposition@@QEAAXXZ @ 0x1800FE280 (-RecoverValidRegions@CVirtualSurface@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A3CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 */

void __fastcall DirectComposition::CTileClump::QueueUnavailableRegion(
        DirectComposition::CTileClump *this,
        const struct CRegion *a2,
        int a3)
{
  char *v3; // rbx
  _DWORD *v4; // r10
  __int64 v5; // r9
  unsigned int v9; // edx
  _DWORD *v10; // r8
  int v11; // r11d
  int v12; // r10d
  int v13; // eax
  int v14; // r9d
  _DWORD *v15; // rdx
  _DWORD *v16; // r8

  v3 = 0LL;
  v4 = (_DWORD *)((char *)this + 248);
  v5 = 0LL;
  while ( !**((_DWORD **)v4 - 9) )
  {
    v3 = (char *)this + 80 * v5 + 176;
LABEL_4:
    v5 = (unsigned int)(v5 + 1);
    v4 += 20;
    if ( (unsigned int)v5 >= 4 )
      goto LABEL_5;
  }
  if ( *v4 != a3 )
    goto LABEL_4;
  v3 = (char *)this + 80 * v5 + 176;
LABEL_5:
  if ( !v3 )
  {
    v3 = (char *)this + 176;
    v9 = 1;
    v10 = (_DWORD *)((char *)this + 328);
    do
    {
      if ( *v10 > *((_DWORD *)v3 + 18) )
        v3 = (char *)this + 80 * v9 + 176;
      ++v9;
      v10 += 20;
    }
    while ( v9 < 4 );
  }
  if ( (int)FastRegion::CRegion::Union((FastRegion::CRegion *)v3, a2) < 0 )
  {
    v11 = *((_DWORD *)this + 14);
    v12 = *((_DWORD *)this + 16);
    v13 = *((_DWORD *)this + 15);
    v14 = *((_DWORD *)this + 17);
    if ( v11 >= v12 || v13 >= v14 )
    {
      **(_DWORD **)v3 = 0;
    }
    else
    {
      v15 = *(_DWORD **)v3;
      v16 = (_DWORD *)(*(_QWORD *)v3 + 28LL);
      *v15 = 2;
      *v16 = v11;
      v15[3] = v13;
      v16[1] = v12;
      v15[4] = (_DWORD)v16 - ((_DWORD)v15 + 12);
      v15[1] = v11;
      v15[2] = v12;
      v15[6] = (_DWORD)v16 - ((_DWORD)v15 + 20) + 8;
      v15[5] = v14;
    }
  }
  *((_DWORD *)v3 + 18) = a3;
}
