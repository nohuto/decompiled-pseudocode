/*
 * XREFs of ?HideSurfacesPendingOffer@CDevice@DirectComposition@@AEAAJXZ @ 0x1800195A0
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     ?HideSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJXZ @ 0x1800391EC (-HideSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJXZ.c)
 *     ?Hide@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180039250 (-Hide@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 *     ?GetNext@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@PEAV23@@Z @ 0x18009B538 (-GetNext@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAP.c)
 */

__int64 __fastcall DirectComposition::CDevice::HideSurfacesPendingOffer(
        DirectComposition::CDevice *this,
        __int64 a2,
        __int64 a3)
{
  char *v3; // rbp
  _QWORD *v4; // rcx
  int v5; // r9d
  __int64 Next; // rbx
  __int64 v7; // r9
  __int64 v8; // rdi
  DirectComposition::CDynamicPoolSet *v9; // rcx
  __int64 v10; // rsi
  __int64 i; // rax
  __int64 v12; // rdi

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
      v8 = *(_QWORD *)(Next + 312);
      v9 = *(DirectComposition::CDynamicPoolSet **)(v8 + 16);
      if ( v9 )
        v7 = (unsigned int)DirectComposition::CDynamicPoolSet::HideSurfaces(v9);
      v10 = v8 + 32;
      for ( i = *(_QWORD *)(v8 + 32); ; i = *(_QWORD *)(v12 + 32) )
      {
        v12 = i - 32;
        if ( i == v10 )
          v12 = 0LL;
        if ( (int)v7 < 0 || !v12 )
          break;
        v7 = (unsigned int)DirectComposition::CAtlasSurfacePool::Hide(*(DirectComposition::CAtlasSurfacePool **)(v12 + 64));
      }
    }
    Next = CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::GetNext(v3, Next, a3, v7);
  }
  while ( v5 >= 0 );
  return (unsigned int)v5;
}
