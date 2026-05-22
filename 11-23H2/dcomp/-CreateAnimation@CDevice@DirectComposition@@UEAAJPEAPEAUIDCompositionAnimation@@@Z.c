/*
 * XREFs of ?CreateAnimation@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionAnimation@@@Z @ 0x180063F30
 * Callers:
 *     ?CreateAnimation@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionAnimation@@@Z @ 0x1800A8570 (-CreateAnimation@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionAnimation@@@Z.c)
 *     ?CreateAnimation@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionAnimation@@@Z @ 0x1800A8590 (-CreateAnimation@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionAnimation@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?Release@CAnimationBuilder@DirectComposition@@UEAAKXZ @ 0x180063E70 (-Release@CAnimationBuilder@DirectComposition@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateAnimation(
        DirectComposition::CDevice *this,
        struct IDCompositionAnimation **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // r9d
  int v8; // edi
  unsigned int v9; // ebx
  DirectComposition::CAnimationBuilder *v10; // rdi
  __int64 v11; // rcx
  unsigned int v13; // edx
  DirectComposition::CAnimationBuilder *v14; // [rsp+48h] [rbp+10h] BYREF
  _QWORD *v15; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
    return (unsigned int)-2147024809;
  v4 = DefaultHeap::AllocClear(0x68uLL);
  if ( !v4 )
  {
    v9 = -2147024882;
    goto LABEL_15;
  }
  v4[2] = 0LL;
  *((_BYTE *)v4 + 40) &= ~1u;
  v4[3] = 0LL;
  *v4 = &DirectComposition::CAnimationBuilder::`vftable';
  *((_DWORD *)v4 + 2) = 1;
  v15 = (_QWORD *)((char *)this + 96);
  v14 = (DirectComposition::CAnimationBuilder *)v4;
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 96));
  v5 = (_QWORD *)((char *)this + 432);
  v6 = *((_DWORD *)this + 114);
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v9 = -2147024362;
    v13 = 181;
    v8 = -2147024362;
    goto LABEL_18;
  }
  v8 = 0;
  if ( v7 > *((_DWORD *)this + 113) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 432, 8LL, v5, &v14);
    v9 = v8;
    if ( v8 >= 0 )
      goto LABEL_6;
    v13 = 192;
LABEL_18:
    DoStackCaptureDirect(v9, v13);
    DirectComposition::CAnimationBuilder::Release(v14);
    goto LABEL_11;
  }
  *(_QWORD *)(*v5 + 8LL * v6) = v14;
  *((_DWORD *)this + 114) = v7;
LABEL_6:
  v9 = v8;
  v10 = v14;
  v11 = *((_QWORD *)v14 + 3);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  *((_QWORD *)v10 + 3) = this;
  if ( this )
    (*(void (__fastcall **)(DirectComposition::CDevice *))(*(_QWORD *)this + 8LL))(this);
  v8 = v9;
  *a2 = (struct IDCompositionAnimation *)v14;
LABEL_11:
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v15);
  if ( v8 < 0 )
LABEL_15:
    *a2 = 0LL;
  return v9;
}
