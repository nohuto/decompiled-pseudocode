/*
 * XREFs of ?CreateScreenClippingBroker@@YAJAEAV?$ComPtr@UIScreenClippingBroker@@@WRL@Microsoft@@@Z @ 0x18053D1AC
 * Callers:
 *     ?EnsureScreenClippingBroker@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1803814A0 (-EnsureScreenClippingBroker@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VScreenClippingBrokerImpl@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1803B2D68 (--1-$MakeAllocator@VScreenClippingBrokerImpl@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0ScreenClippingBrokerImpl@@QEAA@XZ @ 0x18053CEC4 (--0ScreenClippingBrokerImpl@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateScreenClippingBroker(__int64 *a1)
{
  ScreenClippingBrokerImpl *v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rdx
  ScreenClippingBrokerImpl *v6; // rax
  ScreenClippingBrokerImpl *v7; // rbx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ScreenClippingBrokerImpl *v11; // [rsp+38h] [rbp+10h] BYREF
  ScreenClippingBrokerImpl *v12; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v11);
  v11 = 0LL;
  v2 = (ScreenClippingBrokerImpl *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v2;
  if ( v2 )
  {
    v6 = ScreenClippingBrokerImpl::ScreenClippingBrokerImpl(v2);
    v7 = v6;
    v12 = v6;
    if ( v6 )
      (*(void (__fastcall **)(ScreenClippingBrokerImpl *))(*(_QWORD *)v6 + 8LL))(v6);
    v11 = v7;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v12);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a1);
    v8 = (**(__int64 (__fastcall ***)(ScreenClippingBrokerImpl *, GUID *, __int64 *))v11)(
           v11,
           &GUID_2122b709_0b82_4a83_a1f9_c4b90e09cb4c,
           a1);
    v3 = v8;
    if ( v8 >= 0 )
    {
      v3 = 0;
      goto LABEL_9;
    }
    v4 = (unsigned int)v8;
    v5 = 53LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<ScreenClippingBrokerImpl>::~MakeAllocator<ScreenClippingBrokerImpl>((void **)&v12);
    v3 = -2147024882;
    v4 = 2147942414LL;
    v5 = 52LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
    (const char *)v4);
LABEL_9:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v11);
  return v3;
}
