/*
 * XREFs of ?Release@CSurfaceFactory@DirectComposition@@UEAAKXZ @ 0x18003AB80
 * Callers:
 *     ??1CVirtualSurface@DirectComposition@@MEAA@XZ @ 0x18003A9DC (--1CVirtualSurface@DirectComposition@@MEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCSurfaceFactory@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x18003AB54 (-InternalRelease@-$ComPtr@VCSurfaceFactory@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@VCSurfaceFactory@DirectComposition@@@WRL@Microsoft@@QEAAXPEAVCSurfaceFactory@DirectComposition@@@Z @ 0x180065830 (-Attach@-$ComPtr@VCSurfaceFactory@DirectComposition@@@WRL@Microsoft@@QEAAXPEAVCSurfaceFactory@Di.c)
 *     ?Release@CSurfaceFactory@DirectComposition@@W7EAAKXZ @ 0x1800A9190 (-Release@CSurfaceFactory@DirectComposition@@W7EAAKXZ.c)
 *     ??1CBitmapInfo@DirectComposition@@MEAA@XZ @ 0x1800EA658 (--1CBitmapInfo@DirectComposition@@MEAA@XZ.c)
 *     ??$ReleaseInterface@VCSurfaceFactory@DirectComposition@@@@YAXAEAPEAVCSurfaceFactory@DirectComposition@@@Z @ 0x1800EAAAC (--$ReleaseInterface@VCSurfaceFactory@DirectComposition@@@@YAXAEAPEAVCSurfaceFactory@DirectCompos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSurfaceFactory::Release(DirectComposition::CSurfaceFactory *this)
{
  if ( *((_BYTE *)this + 352) )
    return CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)this + 2);
  else
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 16LL))(*((_QWORD *)this + 3));
}
