/*
 * XREFs of ??$MakeAndInitialize@VMPCHomeGestureProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18019474C
 * Callers:
 *     ?Create@MPCHomeGestureProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801949D0 (-Create@MPCHomeGestureProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800A5980 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProvide.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A62F4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A8340 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPC_ea_1800A8340.c)
 *     ?RuntimeClassInitialize@MPCHomeGestureProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801CAE50 (-RuntimeClassInitialize@MPCHomeGestureProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCHomeGestureProcessor,IInputProcessor,InputProcessorCreateParams * &>(
        _QWORD *a1,
        const struct InputProcessorCreateParams **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  MPCHomeGestureProcessor *v6; // rdi
  int v7; // esi
  volatile int *v8; // rdx

  *a1 = 0LL;
  v4 = operator new(0xE50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v6 = (MPCHomeGestureProcessor *)v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>((__int64)v4);
    *v5 = &MPCHomeGestureProcessor::`vftable'{for `IInputProcessor'};
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
    v5[2] = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
    v5[3] = &MPCHomeGestureProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
    v7 = MPCHomeGestureProcessor::RuntimeClassInitialize(v6, *a2);
    if ( v7 >= 0 )
      v7 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>>(
             (__int64)v6,
             &GUID_603ffbaf_2fd6_4711_8c68_de56f864f999,
             a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>::Release(
      (__int64)v6,
      v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
