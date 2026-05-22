/*
 * XREFs of ?CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z @ 0x180021458
 * Callers:
 *     ?OfferPendingSurfaces@CDevice@DirectComposition@@AEAAJXZ @ 0x1800194F8 (-OfferPendingSurfaces@CDevice@DirectComposition@@AEAAJXZ.c)
 *     ??1CSurfaceFactory@DirectComposition@@MEAA@XZ @ 0x18001B2E4 (--1CSurfaceFactory@DirectComposition@@MEAA@XZ.c)
 *     ??1CScratchSurfaceManager@DirectComposition@@EEAA@XZ @ 0x18001B434 (--1CScratchSurfaceManager@DirectComposition@@EEAA@XZ.c)
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z @ 0x1800FBB88 (-RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??$ReleaseInterface@VCScratchSurface@DirectComposition@@@@YAXAEAPEAVCScratchSurface@DirectComposition@@@Z @ 0x1800FAD0C (--$ReleaseInterface@VCScratchSurface@DirectComposition@@@@YAXAEAPEAVCScratchSurface@DirectCompos.c)
 */

void __fastcall DirectComposition::CScratchSurfaceManager::CollectScratchSurfaces(
        DirectComposition::CScratchSurfaceManager *this,
        char a2)
{
  DWORD TickCount; // r14d
  int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int i; // r9d
  __int64 v11; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  TickCount = GetTickCount();
  v5 = *((_DWORD *)this + 12) - 1;
  if ( v5 >= 0 )
  {
    v6 = 8LL * v5;
    do
    {
      v7 = *((_QWORD *)this + 3);
      v8 = *(_QWORD *)(v6 + v7);
      v12 = v8;
      if ( a2 || *(_BYTE *)(v8 + 48) && (int)(*(_DWORD *)(v8 + 44) - TickCount + 500) < 0 )
      {
        v9 = *((_DWORD *)this + 12);
        if ( v5 < v9 )
        {
          for ( i = v5; i < v9 - 1; v9 = *((_DWORD *)this + 12) )
          {
            v11 = i++;
            *(_QWORD *)(v7 + 8 * v11) = *(_QWORD *)(v7 + 8LL * i);
          }
          *((_DWORD *)this + 12) = v9 - 1;
        }
        else
        {
          DoStackCaptureDirect(-2147024809, 0x19Cu);
        }
        ReleaseInterface<DirectComposition::CScratchSurface>(&v12);
      }
      v6 -= 8LL;
      --v5;
    }
    while ( v5 >= 0 );
  }
}
