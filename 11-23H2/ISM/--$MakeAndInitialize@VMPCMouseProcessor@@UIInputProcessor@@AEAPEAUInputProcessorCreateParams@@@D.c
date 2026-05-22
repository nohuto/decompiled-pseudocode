/*
 * XREFs of ??$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180040270
 * Callers:
 *     ?Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180040240 (-Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180014CD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvide.c)
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x18003C118 (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18004030C (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800520A4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvid.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063F38 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VMPCMouseProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1801E6614 (--1-$ComPtr@VMPCMouseProcessor@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCMouseProcessor,IInputProcessor,InputProcessorCreateParams * &>(
        _QWORD *a1,
        const struct InputProcessorCreateParams **a2)
{
  MPCMouseProcessor *v4; // rax
  MPCMouseProcessor *v5; // rbx
  int v6; // edi
  MPCMouseProcessor *v8; // [rsp+40h] [rbp+8h] BYREF
  MPCMouseProcessor *v9; // [rsp+50h] [rbp+18h] BYREF
  MPCMouseProcessor *v10; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = (MPCMouseProcessor *)operator new(0x2120uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v9 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v8);
    return (unsigned int)v6;
  }
  v10 = v4;
  v5 = MPCMouseProcessor::MPCMouseProcessor(v4);
  v9 = v5;
  v8 = 0LL;
  v6 = MPCMouseProcessor::RuntimeClassInitialize(v5, *a2);
  if ( v6 < 0 )
  {
    Microsoft::WRL::ComPtr<MPCMouseProcessor>::~ComPtr<MPCMouseProcessor>(&v9);
    goto LABEL_8;
  }
  v6 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>>(
         v5,
         &GUID_603ffbaf_2fd6_4711_8c68_de56f864f999,
         a1);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::Release((__int64)v5);
  return (unsigned int)v6;
}
