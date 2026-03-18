/*
 * XREFs of ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C007B51C
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C00587CC (GreTransferDwmStateToSpriteState.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x1C007B470 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 * Callees:
 *     GreReferenceObject @ 0x1C0079EC8 (GreReferenceObject.c)
 */

struct SURFACE *__fastcall SFMLOGICALSURFACE::OwnsSurfaceCleanup(SFMLOGICALSURFACE *this, HLSURF a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  int v5; // eax

  v2 = *((_QWORD *)this + 23);
  v3 = 0LL;
  if ( v2 )
  {
    v5 = *((_DWORD *)this + 61);
    if ( (v5 & 0x20) == 0 )
    {
      v3 = v2 - 24;
      *((_DWORD *)this + 61) = v5 | 0x20;
      GreReferenceObject(*(HSURF *)(v2 - 24 + 32));
    }
  }
  return (struct SURFACE *)v3;
}
