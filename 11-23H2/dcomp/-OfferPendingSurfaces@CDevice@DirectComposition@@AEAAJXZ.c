/*
 * XREFs of ?OfferPendingSurfaces@CDevice@DirectComposition@@AEAAJXZ @ 0x1800194F8
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     ?OfferSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJXZ @ 0x180019670 (-OfferSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJXZ.c)
 *     ?CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z @ 0x180021458 (-CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z.c)
 *     ?GetNext@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@PEAV23@@Z @ 0x18009B538 (-GetNext@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAP.c)
 */

__int64 __fastcall DirectComposition::CDevice::OfferPendingSurfaces(
        DirectComposition::CDevice *this,
        __int64 a2,
        __int64 a3)
{
  char *v3; // rdi
  _QWORD *v4; // rcx
  int v5; // r9d
  __int64 Next; // rbx
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rcx

  v3 = (char *)this + 608;
  v4 = (_QWORD *)((char *)this + 616);
  v5 = 0;
  Next = *v4 - 288LL;
  if ( (_QWORD *)*v4 == v4 )
    Next = 0LL;
  do
  {
    if ( !Next )
      break;
    v7 = 0LL;
    if ( *(_DWORD *)(Next + 344) == 1 )
    {
      DirectComposition::CScratchSurfaceManager::CollectScratchSurfaces(
        *(DirectComposition::CScratchSurfaceManager **)(Next + 304),
        1);
      v8 = DirectComposition::CSurfaceManager::OfferSurfaceResources(*(DirectComposition::CSurfaceManager **)(Next + 312));
      v7 = (unsigned int)v8;
      if ( v8 >= 0 )
      {
        v9 = *(_QWORD *)(Next + 24);
        *(_DWORD *)(Next + 344) = 2;
        --*(_DWORD *)(v9 + 372);
      }
    }
    Next = CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::GetNext(v3, Next, a3, v7);
  }
  while ( v5 >= 0 );
  return (unsigned int)v5;
}
