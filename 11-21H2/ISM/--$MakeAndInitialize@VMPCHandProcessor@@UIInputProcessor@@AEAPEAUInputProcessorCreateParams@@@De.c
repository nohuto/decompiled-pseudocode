/*
 * XREFs of ??$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180194684
 * Callers:
 *     ?Create@MPCHandProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801949A0 (-Create@MPCHandProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800A5980 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProvide.c)
 *     ??0MPCHandProcessor@@QEAA@XZ @ 0x1800A640C (--0MPCHandProcessor@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A8340 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPC_ea_1800A8340.c)
 *     ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800A8434 (-RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCHandProcessor,IInputProcessor,InputProcessorCreateParams * &>(
        _QWORD *a1,
        const struct InputProcessorCreateParams **a2)
{
  MPCHandProcessor *v4; // rax
  int v5; // esi
  MPCHandProcessor *v6; // rdi
  __int64 v7; // r8
  const char *v8; // r9
  volatile int *v9; // rdx

  *a1 = 0LL;
  v4 = (MPCHandProcessor *)operator new(0x2708uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = MPCHandProcessor::MPCHandProcessor(v4);
    v5 = MPCHandProcessor::RuntimeClassInitialize(v6, *a2, v7, v8);
    if ( v5 >= 0 )
      v5 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>>(
             (__int64)v6,
             &GUID_603ffbaf_2fd6_4711_8c68_de56f864f999,
             a1);
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>::Release(
        (__int64)v6,
        v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
