/*
 * XREFs of ?ProcessAddContent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@AEAPEAEPEAUFlipResourceUpdateCommandAddContent@@@Z @ 0x1801AB660
 * Callers:
 *     ?ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@Z @ 0x1801AB7DC (-ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Flip::CFlipConsumer::ProcessAddContent(
        Flip::CFlipConsumer *this,
        struct IFlipPresentCallback *a2,
        unsigned __int8 **a3,
        struct FlipResourceUpdateCommandAddContent *a4)
{
  int v6; // eax
  __int64 (__fastcall *v9)(struct IFlipPresentCallback *, unsigned __int64, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // edx
  int v13; // ecx
  __int64 v14; // rcx
  char *v15; // r8
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // edx
  int v19; // edi
  __int128 v21; // [rsp+20h] [rbp-30h] BYREF
  void **v22; // [rsp+30h] [rbp-20h] BYREF
  char *v23; // [rsp+38h] [rbp-18h]
  int v24; // [rsp+40h] [rbp-10h]
  __int64 v25; // [rsp+78h] [rbp+28h] BYREF

  v24 = 0;
  v23 = 0LL;
  v25 = 0LL;
  v22 = &Flip::CFlipPropertySet::`vftable';
  v6 = *((_DWORD *)a4 + 4);
  v21 = 0LL;
  if ( v6 )
  {
    v24 = v6;
    v23 = (char *)a4 + 24;
  }
  v9 = *(__int64 (__fastcall **)(struct IFlipPresentCallback *, unsigned __int64, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v25);
  v10 = v9(a2, (unsigned __int64)&v22 & -(__int64)(v24 != 0), &v25);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 422;
    v13 = v10;
    goto LABEL_15;
  }
  if ( !v25 )
  {
    v11 = -2147467259;
    v12 = 427;
    v13 = -2147467259;
LABEL_15:
    DoStackCaptureDirect(v13, v12);
    goto LABEL_16;
  }
  v14 = *((_QWORD *)a4 + 1);
  v15 = (char *)this + 64;
  *((_QWORD *)&v21 + 1) = v25;
  v16 = *((unsigned int *)this + 22);
  *(_QWORD *)&v21 = v14;
  v17 = v16 + 1;
  if ( (int)v16 + 1 < (unsigned int)v16 )
  {
    v11 = -2147024362;
    v18 = 181;
    v19 = -2147024362;
LABEL_13:
    DoStackCaptureDirect(v11, v18);
    v12 = 433;
    v13 = v19;
    goto LABEL_15;
  }
  v19 = 0;
  if ( v17 > *((_DWORD *)v15 + 5) )
  {
    v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v15, 0x10u, (__int64)v15, &v21);
    v11 = v19;
    if ( v19 < 0 )
    {
      v18 = 192;
      goto LABEL_13;
    }
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)v15 + 16 * v16) = v21;
    *((_DWORD *)v15 + 6) = v17;
  }
  v11 = v19;
  v25 = 0LL;
  *a3 = (unsigned __int8 *)a4 + *((unsigned int *)a4 + 4) + 24;
LABEL_16:
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v25);
  return v11;
}
