/*
 * XREFs of ??$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801E2D20
 * Callers:
 *     ?Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801E3810 (-Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180023EF4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063F38 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x1801E2ED8 (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ??1?$ComPtr@VMPCGamepadProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1801E3034 (--1-$ComPtr@VMPCGamepadProcessor@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UIRawInputProvider@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801E3688 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UIRawInputProvider@@VM.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E53A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_1801E53A0.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801E5410 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCGamepadProcessor,IInputProcessor,InputProcessorCreateParams * &>(
        MPCGamepadProcessor **a1,
        const struct InputProcessorCreateParams **a2)
{
  void *v4; // rax
  int CanCastTo; // edi
  MPCGamepadProcessor *v6; // rbx
  __int64 v7; // rcx
  void *v9; // [rsp+30h] [rbp+8h] BYREF
  MPCGamepadProcessor *v10; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x10E8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  v10 = (MPCGamepadProcessor *)v4;
  if ( !v4 )
  {
    CanCastTo = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v9);
    return (unsigned int)CanCastTo;
  }
  v6 = MPCGamepadProcessor::MPCGamepadProcessor((MPCGamepadProcessor *)v4);
  v10 = v6;
  v9 = 0LL;
  CanCastTo = MPCGamepadProcessor::RuntimeClassInitialize(v6, *a2);
  if ( CanCastTo < 0 )
  {
    Microsoft::WRL::ComPtr<MPCGamepadProcessor>::~ComPtr<MPCGamepadProcessor>(&v10);
    goto LABEL_5;
  }
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_603ffbaf_2fd6_4711_8c68_de56f864f999, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a1 = v6;
    (*(void (__fastcall **)(MPCGamepadProcessor *))(*(_QWORD *)v6 + 8LL))(v6);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,IRawInputProvider,MPCInputProviderBase>::CanCastTo(
                  v6,
                  v7,
                  a1);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(MPCGamepadProcessor *))(*(_QWORD *)*a1 + 8LL))(*a1);
  }
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider,MPCInputProviderBase>::Release(v6);
  return (unsigned int)CanCastTo;
}
