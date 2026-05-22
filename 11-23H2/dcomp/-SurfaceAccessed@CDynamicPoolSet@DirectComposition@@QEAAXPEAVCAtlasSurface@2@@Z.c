/*
 * XREFs of ?SurfaceAccessed@CDynamicPoolSet@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z @ 0x180039320
 * Callers:
 *     ?SurfaceAccessed@CSurfaceManager@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z @ 0x180038D00 (-SurfaceAccessed@CSurfaceManager@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z.c)
 * Callees:
 *     ?Remove@?$CLinkTargetedDoubleLinkedList@VCDynamicPool@DirectComposition@@$0BA@$0BA@@@QEAAXPEAVCDynamicPool@DirectComposition@@@Z @ 0x1800393A8 (-Remove@-$CLinkTargetedDoubleLinkedList@VCDynamicPool@DirectComposition@@$0BA@$0BA@@@QEAAXPEAVCD.c)
 */

void __fastcall DirectComposition::CDynamicPoolSet::SurfaceAccessed(
        DirectComposition::CDynamicPoolSet *this,
        struct DirectComposition::CAtlasSurface *a2)
{
  DirectComposition::CDynamicPoolSet *v3; // rax
  __int64 v4; // rdx
  DirectComposition::CDynamicPoolSet **v5; // r9
  _QWORD *v6; // r9
  __int64 v7; // r10
  _QWORD *v8; // rcx

  if ( *((_DWORD *)this + 6) )
  {
    v3 = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)this + 4);
    v4 = (__int64)v3 - 16;
    if ( v3 == (DirectComposition::CDynamicPoolSet *)((char *)this + 32) )
      v4 = 0LL;
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = (DirectComposition::CDynamicPoolSet **)(v4 + 16);
        if ( *(_QWORD *)(v4 + 32) == *((_QWORD *)a2 + 8) )
          break;
        v4 = (__int64)*v5 - 16;
        if ( *v5 == (DirectComposition::CDynamicPoolSet *)((char *)this + 32) )
          v4 = 0LL;
        if ( !v4 )
          return;
      }
      CLinkTargetedDoubleLinkedList<DirectComposition::CDynamicPool,16,16>::Remove((char *)this + 24, v4, a2, v5);
      v8 = *(_QWORD **)(v7 + 16);
      if ( *v8 != v7 + 8 )
        __fastfail(3u);
      *v6 = v7 + 8;
      v6[1] = v8;
      *v8 = v6;
      *(_QWORD *)(v7 + 16) = v6;
      ++*(_DWORD *)v7;
    }
  }
}
