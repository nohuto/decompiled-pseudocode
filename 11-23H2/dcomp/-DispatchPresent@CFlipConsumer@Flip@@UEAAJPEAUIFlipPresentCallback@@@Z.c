/*
 * XREFs of ?DispatchPresent@CFlipConsumer@Flip@@UEAAJPEAUIFlipPresentCallback@@@Z @ 0x1801AAD80
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     ?ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@Z @ 0x1801AB7DC (-ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x1801ABED0 (McTemplateU0q_EventWriteTransfer.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1801B22A0 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CFlipConsumer::DispatchPresent(
        Flip::CFlipConsumer *this,
        struct IFlipPresentCallback *a2,
        __int64 a3)
{
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // edx
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  void **v17; // [rsp+38h] [rbp-C8h] BYREF
  void *v18; // [rsp+40h] [rbp-C0h]
  unsigned int v19; // [rsp+48h] [rbp-B8h]
  unsigned __int8 *v20[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+60h] [rbp-A0h]
  int v22; // [rsp+64h] [rbp-9Ch]
  int v23; // [rsp+68h] [rbp-98h]
  _BYTE v24[32]; // [rsp+70h] [rbp-90h] BYREF
  void *v25[2]; // [rsp+90h] [rbp-70h] BYREF
  int v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A4h] [rbp-5Ch]
  int v28; // [rsp+A8h] [rbp-58h]
  _BYTE v29[64]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+F0h] [rbp-10h] BYREF

  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x100) != 0 )
    McGenEventWrite_EventWriteTransfer((__int64)this, &FLIP_CONSUME_PRESENT_Start, a3, 1u, &v30);
  v15 = 0;
  v16 = 0;
  v23 = 0;
  v28 = 0;
  v19 = 0;
  v18 = 0LL;
  v20[0] = v24;
  v20[1] = v24;
  v21 = 32;
  v22 = 32;
  v25[0] = v29;
  v25[1] = v29;
  v26 = 64;
  v27 = 64;
  v17 = &Flip::CFlipPropertySet::`vftable';
  v30.Ptr = (ULONGLONG)this;
  if ( this )
    (*(void (__fastcall **)(Flip::CFlipConsumer *))(*(_QWORD *)this + 8LL))(this);
  v5 = NtFlipObjectConsumerBeginProcessPresent(*((_QWORD *)this + 3), &v15, &v16);
  v6 = HRESULTFromNTSTATUS(v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 123;
    goto LABEL_21;
  }
  v8 = v15;
  if ( v15 )
  {
    v6 = DynArrayImpl<0>::AddMultiple(v20, 1LL, v15);
    v7 = v6;
    if ( v6 < 0 )
    {
      v9 = 128;
      goto LABEL_21;
    }
    v8 = v15;
  }
  v10 = v16;
  if ( v16 )
  {
    v6 = DynArrayImpl<0>::AddMultiple(v25, 1LL, v16);
    v7 = v6;
    if ( v6 < 0 )
    {
      v9 = 134;
      goto LABEL_21;
    }
    v8 = v15;
    v10 = v16;
  }
  v11 = NtFlipObjectConsumerAcquirePresent(*((_QWORD *)this + 3), v8, v10, v20[0], v25[0]);
  v6 = HRESULTFromNTSTATUS(v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 143;
  }
  else
  {
    v19 = v16;
    v18 = v25[0];
    v6 = Flip::CFlipConsumer::ProcessPresent(this, a2, v15, v20[0], (struct Flip::CFlipPropertySet *)&v17);
    v7 = v6;
    if ( v6 < 0 )
    {
      v9 = 155;
    }
    else
    {
      v12 = NtFlipObjectConsumerEndProcessPresent(*((_QWORD *)this + 3));
      v6 = HRESULTFromNTSTATUS(v12);
      v7 = v6;
      if ( v6 >= 0 )
        goto LABEL_22;
      v9 = 159;
    }
  }
LABEL_21:
  DoStackCaptureDirect(v6, v9);
LABEL_22:
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x100) != 0 )
    McTemplateU0q_EventWriteTransfer(v13, &FLIP_CONSUME_PRESENT_Stop, v7);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v30);
  DynArrayImpl<0>::~DynArrayImpl<0>(v25);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)v20);
  return v7;
}
