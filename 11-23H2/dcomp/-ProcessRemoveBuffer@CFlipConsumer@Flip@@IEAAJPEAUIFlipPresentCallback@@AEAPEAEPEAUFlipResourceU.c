/*
 * XREFs of ?ProcessRemoveBuffer@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@AEAPEAEPEAUFlipResourceUpdateCommandRemoveBuffer@@@Z @ 0x1801AB9AC
 * Callers:
 *     ?ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@Z @ 0x1801AB7DC (-ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBufferForIdNoRef@CFlipConsumer@Flip@@IEAAPEAUIUnknown@@_KPEAI@Z @ 0x1801AB1AC (-GetBufferForIdNoRef@CFlipConsumer@Flip@@IEAAPEAUIUnknown@@_KPEAI@Z.c)
 */

__int64 __fastcall Flip::CFlipConsumer::ProcessRemoveBuffer(
        __int64 **this,
        struct IFlipPresentCallback *a2,
        unsigned __int8 **a3,
        struct FlipResourceUpdateCommandRemoveBuffer *a4)
{
  struct IUnknown *BufferForIdNoRef; // rax
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 *v16; // rsi
  unsigned int v17; // edx
  int v18; // ecx
  unsigned int v20; // [rsp+48h] [rbp+10h] BYREF

  BufferForIdNoRef = Flip::CFlipConsumer::GetBufferForIdNoRef((Flip::CFlipConsumer *)this, *((_QWORD *)a4 + 1), &v20);
  v9 = (*(__int64 (__fastcall **)(struct IFlipPresentCallback *, struct IUnknown *))(*(_QWORD *)a2 + 8LL))(
         a2,
         BufferForIdNoRef);
  v10 = v9;
  if ( v9 < 0 )
  {
    v17 = 461;
    v18 = v9;
    goto LABEL_11;
  }
  v11 = v20;
  v12 = 2LL * v20;
  v13 = this[4][2 * v20 + 1];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *((_DWORD *)this + 14);
  if ( v11 >= v14 )
  {
    v10 = -2147024809;
    DoStackCaptureDirect(-2147024809, 0x21Fu);
    v17 = 465;
    v18 = -2147024809;
LABEL_11:
    DoStackCaptureDirect(v18, v17);
    return v10;
  }
  v15 = v14 - 1;
  if ( v11 < (unsigned int)v15 )
    *(_OWORD *)&this[4][v12] = *(_OWORD *)&this[4][2 * v15];
  --*((_DWORD *)this + 14);
  v10 = 0;
  if ( !*((_DWORD *)this + 14) )
  {
    v16 = this[12];
    this[12] = 0LL;
    if ( v16 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v16 + 1);
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v16);
      operator delete(v16);
    }
  }
  *a3 = (unsigned __int8 *)a4 + 16;
  return v10;
}
