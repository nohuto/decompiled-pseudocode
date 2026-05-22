/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023E10
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B390 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18006B390.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B3B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18006B3B0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B3D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18006B3D0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B3F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18006B3F0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B410 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18006B410.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180023EF4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r11
  const struct _GUID *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r11
  const struct _GUID *v10; // rcx
  __int64 v11; // r10
  const struct _GUID *v12; // rcx
  __int64 v13; // r10
  const struct _GUID *v14; // rcx
  __int64 v15; // r10
  const struct _GUID *v16; // r9
  __int64 v17; // r10
  __int64 v19; // r10

  v3 = 0;
  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v5 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return v3;
  }
  if ( (unsigned int)InlineIsEqualGUID(v4, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8) )
  {
    *v8 = v9;
    goto LABEL_11;
  }
  if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8) )
  {
    *v8 = v11;
LABEL_11:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
    return v3;
  }
  if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_603ffbaf_2fd6_4711_8c68_de56f864f999) )
  {
    *v8 = v13;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v12, &GUID_3cc27501_dfa8_48b9_9841_43a516320b1d) )
    {
      *v8 = v15;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v14, &GUID_18f2e21a_ceea_4596_9fd8_326464016a35) )
    {
      *v8 = v17;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v16, &GUID_dbec8be2_d5cc_471f_8bf1_9a8efeae5f61) )
    {
      *v8 = v19;
    }
    else
    {
      v3 = -2147467262;
    }
    if ( v3 == -2147467262 )
      v3 = -2147467262;
  }
  if ( (v3 & 0x80000000) == 0 )
    goto LABEL_11;
  return v3;
}
