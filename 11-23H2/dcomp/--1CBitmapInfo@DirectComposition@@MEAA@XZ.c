/*
 * XREFs of ??1CBitmapInfo@DirectComposition@@MEAA@XZ @ 0x1800EA658
 * Callers:
 *     ??_ECBitmapInfo@DirectComposition@@MEAAPEAXI@Z @ 0x1800EA6A0 (--_ECBitmapInfo@DirectComposition@@MEAAPEAXI@Z.c)
 *     ??1CYCbCrBitmapInfo@DirectComposition@@MEAA@XZ @ 0x1800FEB28 (--1CYCbCrBitmapInfo@DirectComposition@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?Release@CSurfaceFactory@DirectComposition@@UEAAKXZ @ 0x18003AB80 (-Release@CSurfaceFactory@DirectComposition@@UEAAKXZ.c)
 */

void __fastcall DirectComposition::CBitmapInfo::~CBitmapInfo(DirectComposition::CBitmapInfo *this)
{
  volatile signed __int32 *v2; // rcx
  DirectComposition::CSurfaceFactory *v3; // rcx

  *(_QWORD *)this = &DirectComposition::CBitmapInfo::`vftable';
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v2 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v2);
  v3 = (DirectComposition::CSurfaceFactory *)*((_QWORD *)this + 3);
  if ( v3 )
    DirectComposition::CSurfaceFactory::Release(v3);
}
