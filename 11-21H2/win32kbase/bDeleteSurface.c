/*
 * XREFs of bDeleteSurface @ 0x1C0019110
 * Callers:
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C0096FB8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00B3F80 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     EngDeleteSurface @ 0x1C00BF950 (EngDeleteSurface.c)
 *     ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00C5820 (-StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     bDeleteBrush @ 0x1C00C82E0 (bDeleteBrush.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C016E370 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001C9F4 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C001FE90 (HmgShareLockCheckIgnoreStockBit.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C016C500 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall bDeleteSurface(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int v4; // ebx
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v6);
  LOBYTE(v2) = 5;
  v3 = HmgShareLockCheckIgnoreStockBit(a1, v2);
  v4 = 0;
  v7 = v3;
  if ( v3 )
    v4 = SURFREF::bDeleteSurface(v6, 0LL);
  SURFREF::~SURFREF((SURFREF *)v6);
  return v4;
}
