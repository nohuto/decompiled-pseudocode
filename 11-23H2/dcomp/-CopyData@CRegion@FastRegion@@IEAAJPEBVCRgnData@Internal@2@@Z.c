/*
 * XREFs of ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x18007A550
 * Callers:
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18007A4A8 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A518 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x18007A608 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180083180 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::CopyData(
        FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData *a2)
{
  int *v2; // r14
  FastRegion::Internal::CRgnData *v3; // rbx
  char *v6; // r10
  int v7; // eax
  int v8; // edi

  v2 = (int *)(this + 1);
  v3 = *this;
  v6 = (char *)a2 + 8 * *(_DWORD *)a2 - 8;
  v7 = 60;
  v8 = *((_DWORD *)v6 + 4) + 8 * *(_DWORD *)a2 - *((_DWORD *)a2 + 4) - ((_DWORD)a2 + 12) + (_DWORD)v6 + 24;
  if ( this + 1 != (FastRegion::Internal::CRgnData **)*this )
    v7 = *v2;
  if ( v7 >= v8 )
    goto LABEL_4;
  v3 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v8);
  if ( v3 )
  {
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
    *this = v3;
    *v2 = v8;
LABEL_4:
    FastRegion::Internal::CRgnData::Copy(v3, a2);
    return 0LL;
  }
  return 2147942414LL;
}
