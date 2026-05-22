/*
 * XREFs of ?CollectLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAX_N0PEAUSurfaceRequestStruct@2@0@Z @ 0x1800214A8
 * Callers:
 *     ?CollectDeadSurfaces@CSurfaceManager@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@0@Z @ 0x180019440 (-CollectDeadSurfaces@CSurfaceManager@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@0@Z.c)
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 * Callees:
 *     ?CanSatisfyLargeSurfaceRequest@CAtlasSurface@DirectComposition@@QEBA_NAEBUSurfaceRequestStruct@2@@Z @ 0x180009380 (-CanSatisfyLargeSurfaceRequest@CAtlasSurface@DirectComposition@@QEBA_NAEBUSurfaceRequestStruct@2.c)
 *     ?DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z @ 0x18001E48C (-DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z.c)
 *     ?ComputeLargeSurfaceAllocationSizes@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestStruct@2@_NPEAVSizeU@2@PEAUDCOMPOSITION_GUTTERS@@PEA_N@Z @ 0x18001E784 (-ComputeLargeSurfaceAllocationSizes@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestSt.c)
 *     ?IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ @ 0x18001FE50 (-IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ.c)
 *     ?IsAvailable@CCompositorSynchronizedObject@DirectComposition@@QEAA_NXZ @ 0x180085CEC (-IsAvailable@CCompositorSynchronizedObject@DirectComposition@@QEAA_NXZ.c)
 */

void __fastcall DirectComposition::CSurfaceManager::CollectLargeSurfaces(
        DirectComposition::CSurfaceManager *this,
        char a2,
        char a3,
        struct DirectComposition::SurfaceRequestStruct *a4,
        bool a5)
{
  const struct DirectComposition::SurfaceRequestStruct *v5; // rbx
  DirectComposition::CAtlasSurfacePool **v8; // r15
  DirectComposition::CSurfaceManager *v9; // rax
  char *v10; // rdi
  DWORD TickCount; // eax
  DirectComposition::CSurfaceManager *v12; // rcx
  _QWORD *v13; // r14
  DWORD v14; // ebp
  DirectComposition::CAtlasSurfacePool **v15; // r9
  __int64 v16; // rdi
  _QWORD *v17; // rax
  DirectComposition::CAtlasSurfacePool **v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // eax
  DirectComposition::CSurfaceManager *v21; // rax
  char *v22; // rcx
  __int64 v23; // rcx
  DirectComposition::CAtlasSurface *v24; // r9
  unsigned int v25; // eax
  __int64 v26; // r9
  _QWORD *v27; // rax
  DirectComposition::CSurfaceManager *v28; // rax
  struct DirectComposition::CAtlasSurface *v29; // rdx
  char v30[8]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v31; // [rsp+38h] [rbp-40h] BYREF
  bool v32; // [rsp+88h] [rbp+10h] BYREF

  v5 = a4;
  if ( a2 )
  {
    while ( *((_DWORD *)this + 6) )
    {
      v28 = (DirectComposition::CSurfaceManager *)*((_QWORD *)this + 4);
      v29 = (DirectComposition::CSurfaceManager *)((char *)v28 - 32);
      if ( v28 == (DirectComposition::CSurfaceManager *)((char *)this + 32) )
        v29 = 0LL;
      DirectComposition::CSurfaceManager::DiscardLargeSurface(this, v29);
    }
  }
  else
  {
    *(_QWORD *)((char *)&v31 + 4) = 0LL;
    v8 = 0LL;
    if ( a4 )
    {
      if ( *((_BYTE *)a4 + 12) )
      {
        v5 = 0LL;
      }
      else
      {
        v31 = *(_OWORD *)a4;
        DirectComposition::CSurfaceManager::ComputeLargeSurfaceAllocationSizes(
          this,
          a4,
          1,
          (struct DirectComposition::SizeU *)((char *)&v31 + 4),
          (struct DCOMPOSITION_GUTTERS *)v30,
          &v32);
        v5 = (const struct DirectComposition::SurfaceRequestStruct *)&v31;
      }
    }
    if ( a5 )
    {
      v9 = (DirectComposition::CSurfaceManager *)*((_QWORD *)this + 10);
      v10 = (char *)v9 - 48;
      if ( v9 == (DirectComposition::CSurfaceManager *)((char *)this + 80) )
        v10 = 0LL;
      do
      {
        if ( !v10 )
          break;
        v21 = (DirectComposition::CSurfaceManager *)*((_QWORD *)v10 + 6);
        v22 = v10;
        v10 = (char *)v21 - 48;
        if ( v21 == (DirectComposition::CSurfaceManager *)((char *)this + 80) )
          v10 = 0LL;
      }
      while ( DirectComposition::CCompositorSynchronizedObject::IsAvailable((DirectComposition::CCompositorSynchronizedObject *)(v22 + 16)) );
    }
    TickCount = GetTickCount();
    v12 = (DirectComposition::CSurfaceManager *)*((_QWORD *)this + 8);
    v13 = (_QWORD *)((char *)this + 56);
    v14 = TickCount;
    v15 = (DirectComposition::CAtlasSurfacePool **)((char *)v12 - 48);
    if ( v12 == (DirectComposition::CSurfaceManager *)((char *)this + 56) )
      v15 = 0LL;
    if ( v15 && v5 )
    {
      do
      {
        v25 = DirectComposition::CAtlasSurfacePool::IsAvailable(v15[8])
            ? v14 - *(_DWORD *)(v23 + 168)
            : v14 - *(_DWORD *)(v23 + 164);
        if ( v25 > 0x1F4 )
          break;
        if ( DirectComposition::CAtlasSurface::CanSatisfyLargeSurfaceRequest(v24, v5) )
        {
          v5 = 0LL;
          v8 = (DirectComposition::CAtlasSurfacePool **)v26;
          break;
        }
        v27 = *(_QWORD **)(v26 + 56);
        v15 = (DirectComposition::CAtlasSurfacePool **)(v27 - 6);
        if ( v27 == v13 )
          v15 = 0LL;
      }
      while ( v15 );
    }
    v16 = *v13 - 48LL;
    if ( (_QWORD *)*v13 == v13 )
      v16 = 0LL;
    while ( v16 )
    {
      v17 = *(_QWORD **)(v16 + 48);
      v18 = (DirectComposition::CAtlasSurfacePool **)v16;
      v16 = (__int64)(v17 - 6);
      if ( v17 == v13 )
        v16 = 0LL;
      if ( a3 )
      {
        v20 = DirectComposition::CAtlasSurfacePool::IsAvailable(v18[8])
            ? v14 - *(_DWORD *)(v19 + 168)
            : v14 - *(_DWORD *)(v19 + 164);
        if ( v20 <= 0x1F4 )
          continue;
      }
      if ( v5
        && DirectComposition::CAtlasSurface::CanSatisfyLargeSurfaceRequest((DirectComposition::CAtlasSurface *)v18, v5) )
      {
        v5 = 0LL;
        v8 = v18;
      }
      else if ( v18 != v8 )
      {
        DirectComposition::CSurfaceManager::DiscardLargeSurface(this, (struct DirectComposition::CAtlasSurface *)v18);
      }
    }
  }
}
