/*
 * XREFs of ?TrimPools@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x1800F7D60
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z @ 0x1800FBB88 (-RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z.c)
 * Callees:
 *     ?IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ @ 0x18001FE50 (-IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ.c)
 *     ?RemoveDynamicPool@CDynamicPoolSet@DirectComposition@@AEAAXPEAVCDynamicPool@2@@Z @ 0x1800396D8 (-RemoveDynamicPool@CDynamicPoolSet@DirectComposition@@AEAAXPEAVCDynamicPool@2@@Z.c)
 */

void __fastcall DirectComposition::CDynamicPoolSet::TrimPools(DirectComposition::CDynamicPoolSet *this)
{
  char *v1; // rsi
  DirectComposition::CDynamicPoolSet *v2; // rax
  char *v4; // rdx
  char *v5; // rax
  char *v6; // rbx
  struct DirectComposition::CDynamicPool *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r9d
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r10

  v1 = (char *)this + 32;
  v2 = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)this + 4);
  v4 = (char *)v2 - 16;
  if ( v2 == (DirectComposition::CDynamicPoolSet *)((char *)this + 32) )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      v5 = (char *)*((_QWORD *)v4 + 2);
      v6 = v5 - 16;
      if ( v5 == v1 )
        v6 = 0LL;
      if ( DirectComposition::CAtlasSurfacePool::IsAvailable(*((DirectComposition::CAtlasSurfacePool **)v4 + 4)) )
        goto LABEL_13;
      v9 = *(_DWORD *)(v8 + 136);
      v10 = 0LL;
      if ( v9 )
      {
        v11 = *(_QWORD *)(v8 + 112);
        v12 = v9;
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)v11 + 24LL) == 4 )
            v10 += *(_QWORD *)(*(_QWORD *)v11 + 104LL);
          v11 += 8LL;
          --v12;
        }
        while ( v12 );
      }
      if ( v10 == *(_QWORD *)(v8 + 184) )
LABEL_13:
        DirectComposition::CDynamicPoolSet::RemoveDynamicPool(this, v7);
      v4 = v6;
    }
    while ( v6 );
  }
}
