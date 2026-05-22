/*
 * XREFs of ??$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18002890C
 * Callers:
 *     ?Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180028510 (-Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BBB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvide.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180015E20 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x180028540 (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180028B0C (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInputProcessorDeviceUpdate@@UIInputFocusListener@@UIMPCInputProviderBase@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800A6BD4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInputProcessorDeviceU.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCMouseProcessor,IInputProcessor,InputProcessorCreateParams * &>(
        MPCMouseProcessor **a1,
        const struct InputProcessorCreateParams **a2)
{
  MPCMouseProcessor *v4; // rax
  MPCMouseProcessor *v5; // rdi
  int v6; // ebx
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  const struct _GUID *v9; // rcx
  MPCMouseProcessor *v10; // r8
  const struct _GUID *v11; // r9
  __int64 v12; // rdx
  int CanCastTo; // eax

  *a1 = 0LL;
  v4 = (MPCMouseProcessor *)operator new(0x2120uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v5 = MPCMouseProcessor::MPCMouseProcessor(v4);
  v6 = MPCMouseProcessor::RuntimeClassInitialize(v5, *a2);
  if ( v6 >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_603ffbaf_2fd6_4711_8c68_de56f864f999, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v5;
      (*(void (__fastcall **)(MPCMouseProcessor *))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v7, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8) )
      {
        *a1 = v5;
        goto LABEL_8;
      }
      if ( InlineIsEqualGUID(v8, &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8) || InlineIsEqualGUID(v9, v11) )
      {
        *a1 = v10;
LABEL_8:
        v6 = 0;
LABEL_9:
        (*(void (__fastcall **)(MPCMouseProcessor *))(*(_QWORD *)*a1 + 8LL))(*a1);
        goto LABEL_10;
      }
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>::CanCastTo(
                    (char *)v10 + 8,
                    v12,
                    a1);
      v6 = -2147467262;
      if ( CanCastTo != -2147467262 )
      {
        v6 = CanCastTo;
        if ( CanCastTo >= 0 )
          goto LABEL_9;
      }
    }
  }
LABEL_10:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::Release((__int64)v5);
  return (unsigned int)v6;
}
