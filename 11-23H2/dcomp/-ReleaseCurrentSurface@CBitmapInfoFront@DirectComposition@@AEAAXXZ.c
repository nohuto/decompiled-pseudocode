/*
 * XREFs of ?ReleaseCurrentSurface@CBitmapInfoFront@DirectComposition@@AEAAXXZ @ 0x18000CC30
 * Callers:
 *     ?Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z @ 0x18000CB34 (-Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z.c)
 * Callees:
 *     ?UnUse@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ @ 0x18002AE30 (-UnUse@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

void __fastcall DirectComposition::CBitmapInfoFront::ReleaseCurrentSurface(DirectComposition::CBitmapInfoFront *this)
{
  __int64 v1; // rax
  __int64 v3; // rax

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    if ( (unsigned int)(*(_DWORD *)(v1 + 24) - 2) <= 1 )
      DirectComposition::CCompositorSynchronizedObject::UnUse((DirectComposition::CCompositorSynchronizedObject *)(v1 + 16));
    v3 = *((_QWORD *)this + 2);
    if ( *(DirectComposition::CBitmapInfoFront **)(v3 + 96) == this )
      *(_QWORD *)(v3 + 96) = 0LL;
    CMILRefCountBaseT<IUnknown>::InternalRelease(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
}
