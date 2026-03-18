/*
 * XREFs of ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C02BAA6C
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C02B9738 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02BA5BC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C001D470 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 */

void __fastcall DXGADAPTER::DestroyPhysicalAdapterData(DXGADAPTER *this)
{
  unsigned int i; // esi
  __int64 v3; // rcx
  __int64 v4; // rdi

  if ( *((_QWORD *)this + 335) )
  {
    for ( i = 0; i < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(this); ++i )
    {
      v3 = *((_QWORD *)this + 335);
      v4 = 344LL * i;
      if ( *(_QWORD *)(v4 + v3 + 64) )
      {
        ObfDereferenceObject(*(PVOID *)(v4 + v3 + 64));
        *(_QWORD *)(v4 + *((_QWORD *)this + 335) + 64) = 0LL;
        v3 = *((_QWORD *)this + 335);
      }
      operator delete[](*(void **)(v4 + v3 + 32));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 335) + 40));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 335) + 104));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 335) + 112));
      *(_QWORD *)(v4 + *((_QWORD *)this + 335) + 32) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 335) + 40) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 335) + 104) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 335) + 112) = 0LL;
    }
  }
}
