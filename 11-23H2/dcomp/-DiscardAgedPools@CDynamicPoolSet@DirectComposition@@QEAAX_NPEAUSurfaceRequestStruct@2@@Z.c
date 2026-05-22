/*
 * XREFs of ?DiscardAgedPools@CDynamicPoolSet@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@@Z @ 0x18001FD40
 * Callers:
 *     ?CollectDeadSurfaces@CSurfaceManager@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@0@Z @ 0x180019440 (-CollectDeadSurfaces@CSurfaceManager@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@0@Z.c)
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 * Callees:
 *     ?IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ @ 0x18001FE50 (-IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ.c)
 *     ?RemoveDynamicPool@CDynamicPoolSet@DirectComposition@@AEAAXPEAVCDynamicPool@2@@Z @ 0x1800396D8 (-RemoveDynamicPool@CDynamicPoolSet@DirectComposition@@AEAAXPEAVCDynamicPool@2@@Z.c)
 */

void __fastcall DirectComposition::CDynamicPoolSet::DiscardAgedPools(
        DirectComposition::CDynamicPoolSet *this,
        char a2,
        struct DirectComposition::SurfaceRequestStruct *a3)
{
  char *v3; // r14
  DirectComposition::CDynamicPoolSet *v4; // rax
  char *v8; // rdi
  char *v9; // rax
  char *v10; // rsi
  unsigned int v11; // edx
  __int64 v12; // rcx
  DirectComposition::CAtlasSurfacePool *v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // [rsp+50h] [rbp+8h]

  v3 = (char *)this + 32;
  v4 = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)this + 4);
  v8 = (char *)v4 - 16;
  if ( v4 == (DirectComposition::CDynamicPoolSet *)((char *)this + 32) )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      v9 = (char *)*((_QWORD *)v8 + 2);
      v10 = 0LL;
      if ( v9 != v3 )
        v10 = v9 - 16;
      v17 = *((_QWORD *)v8 + 6);
      if ( DirectComposition::CAtlasSurfacePool::IsAvailable(*((DirectComposition::CAtlasSurfacePool **)v8 + 4)) )
      {
        if ( a3
          && *((_BYTE *)a3 + 12)
          && *(_DWORD *)(v12 + 160) == *(_DWORD *)a3
          && v11 >= *((_DWORD *)a3 + 1)
          && HIDWORD(v17) >= *((_DWORD *)a3 + 2)
          && (!*((_BYTE *)a3 + 13) || *(_QWORD *)(v12 + 200)) )
        {
          a3 = 0LL;
        }
        else if ( !a2
               || (GetTickCount(),
                   v13 = (DirectComposition::CAtlasSurfacePool *)*((_QWORD *)v8 + 4),
                   !*((_DWORD *)v13 + 34))
               && (!DirectComposition::CAtlasSurfacePool::IsAvailable(v13)
                 ? (v16 = v14 - *(_DWORD *)(v15 + 164))
                 : (v16 = v14 - *(_DWORD *)(v15 + 168)),
                   v16 > 0x1F4) )
        {
          DirectComposition::CDynamicPoolSet::RemoveDynamicPool(this, (struct DirectComposition::CDynamicPool *)v8);
        }
      }
      v8 = v10;
    }
    while ( v10 );
  }
}
