/*
 * XREFs of ??$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801E9EF0
 * Callers:
 *     ?Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801EA250 (-Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063F38 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800BD79C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProvide.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C0030 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPC_ea_1800C0030.c)
 *     ??1?$ComPtr@VMPCHandProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B2858 (--1-$ComPtr@VMPCHandProcessor@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0MPCClickerProcessor@@QEAA@XZ @ 0x1801E9FBC (--0MPCClickerProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801EAF84 (-RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCClickerProcessor,IInputProcessor,InputProcessorCreateParams * &>(
        _QWORD *a1,
        const struct InputProcessorCreateParams **a2)
{
  void *v4; // rax
  int v5; // edi
  MPCClickerProcessor *v6; // rbx
  volatile int *v7; // rdx
  volatile int *v8; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  MPCClickerProcessor *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0xEA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v10);
    return (unsigned int)v5;
  }
  v6 = MPCClickerProcessor::MPCClickerProcessor((MPCClickerProcessor *)v4);
  v11 = v6;
  v10 = 0LL;
  v5 = MPCClickerProcessor::RuntimeClassInitialize(v6, *a2);
  if ( v5 < 0 )
  {
    Microsoft::WRL::ComPtr<MPCHandProcessor>::~ComPtr<MPCHandProcessor>((__int64 *)&v11, v7);
    goto LABEL_5;
  }
  v5 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>>(
         (__int64)v6,
         &GUID_603ffbaf_2fd6_4711_8c68_de56f864f999,
         a1);
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>::Release(
      (__int64)v6,
      v8);
  return (unsigned int)v5;
}
