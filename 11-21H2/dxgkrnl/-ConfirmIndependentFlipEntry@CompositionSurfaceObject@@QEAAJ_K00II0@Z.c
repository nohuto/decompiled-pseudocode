/*
 * XREFs of ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C00038CC
 * Callers:
 *     ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C00037A0 (-Confirm@CFlipToken@@UEAAXXZ.c)
 *     ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C0006A80 (-ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0019150 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?Confirm@CFlipContentToken@@UEAAXXZ @ 0x1C0082BF0 (-Confirm@CFlipContentToken@@UEAAXXZ.c)
 * Callees:
 *     ?ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z @ 0x1C0003964 (-ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0007EB4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::ConfirmIndependentFlipEntry(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  int v11; // ebx

  v11 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 48));
  if ( v11 >= 0 )
  {
    CCompositionSurface::ConfirmIndependentFlipEntry(
      (CompositionSurfaceObject *)((char *)this + 40),
      a2,
      a3,
      a4,
      a5,
      a6,
      a7);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return (unsigned int)v11;
}
