/*
 * XREFs of ??_ECBitmapInfoFront@DirectComposition@@UEAAPEAXI@Z @ 0x18002A2D0
 * Callers:
 *     ??_ECBitmapInfoFront@DirectComposition@@WDI@EAAPEAXI@Z @ 0x1800A81F0 (--_ECBitmapInfoFront@DirectComposition@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?UnUse@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ @ 0x18002AE30 (-UnUse@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x18007E3EC (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveSurfaceUpdate@CSurfaceFactory@DirectComposition@@QEAAXPEAVCBitmapInfoFront@2@@Z @ 0x1800FBC28 (-RemoveSurfaceUpdate@CSurfaceFactory@DirectComposition@@QEAAXPEAVCBitmapInfoFront@2@@Z.c)
 */

DirectComposition::CBitmapInfoFront *__fastcall DirectComposition::CBitmapInfoFront::`vector deleting destructor'(
        DirectComposition::CBitmapInfoFront *this,
        char a2)
{
  bool v2; // zf
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  HANDLE ProcessHeap; // rax

  v2 = (*((_BYTE *)this + 112) & 2) == 0;
  *(_QWORD *)this = &DirectComposition::CBitmapInfoFront::`vftable'{for `DirectComposition::CBitmapInfo'};
  *((_QWORD *)this + 7) = &DirectComposition::CBitmapInfoFront::`vftable'{for `DirectComposition::CDirtyNotifier'};
  if ( !v2 )
    DirectComposition::CSurfaceFactory::RemoveSurfaceUpdate(*((DirectComposition::CSurfaceFactory **)this + 3), this);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 24) - 2) <= 1 )
      DirectComposition::CCompositorSynchronizedObject::UnUse((DirectComposition::CCompositorSynchronizedObject *)(v5 + 16));
    v6 = *((_QWORD *)this + 2);
    if ( *(DirectComposition::CBitmapInfoFront **)(v6 + 96) == this )
      *(_QWORD *)(v6 + 96) = 0LL;
    CMILRefCountBaseT<IUnknown>::InternalRelease(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  v7 = 0LL;
  v8 = (__int64 *)((char *)this + 128);
  do
  {
    v9 = *v8;
    if ( !*v8 )
      break;
    if ( *(DirectComposition::CBitmapInfoFront **)(v9 + 96) == this )
      *(_QWORD *)(v9 + 96) = 0LL;
    CMILRefCountBaseT<IUnknown>::InternalRelease(v9);
    *v8 = 0LL;
    ++v7;
    v8 += 3;
  }
  while ( v7 < 3 );
  if ( *((_QWORD *)this + 15) )
  {
    CMILRefCountBaseT<IMILRefCount>::InternalRelease();
    *((_QWORD *)this + 15) = 0LL;
  }
  *((_QWORD *)this + 7) = &DirectComposition::CDirtyNotifier::`vftable';
  v10 = (void *)*((_QWORD *)this + 8);
  if ( v10 != *((void **)this + 9) )
  {
    operator delete(v10);
    *((_QWORD *)this + 8) = 0LL;
  }
  v11 = *((_QWORD *)this + 2);
  *(_QWORD *)this = &DirectComposition::CBitmapInfo::`vftable';
  if ( v11 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v11);
  v12 = *((_QWORD *)this + 3);
  if ( v12 )
  {
    if ( *(_BYTE *)(v12 + 352) )
      CMILRefCountBaseT<IUnknown>::InternalRelease(v12 + 8);
    else
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 24) + 16LL))(*(_QWORD *)(v12 + 24));
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0xC8uLL);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
