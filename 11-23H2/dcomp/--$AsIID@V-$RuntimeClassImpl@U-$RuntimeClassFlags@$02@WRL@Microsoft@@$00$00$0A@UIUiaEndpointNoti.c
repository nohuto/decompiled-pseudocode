/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUiaEndpointNotifierCallback@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUiaEndpointNotifierCallback@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18002BE98
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUiaEndpointNotifierCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BFC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUiaEndpoi.c)
 *     ??$MakeAndInitialize@VUiaEndpointNotifierCallback@Composition@UI@Windows@@UIUiaEndpointNotifierCallback@@PEAVCompositionIsland@234@AEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIUiaEndpointNotifierCallback@@$$QEAPEAVCompositionIsland@Composition@UI@Windows@@AEAU_GUID@@@Z @ 0x180088A00 (--$MakeAndInitialize@VUiaEndpointNotifierCallback@Composition@UI@Windows@@UIUiaEndpointNotifierC.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUiaEndpointNotifierCallback,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r11
  const struct _GUID *v6; // rdx
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r11
  const struct _GUID *v11; // rcx
  const struct _GUID *v12; // rcx
  __int64 v13; // r10
  const struct _GUID *v14; // rcx
  int v15; // ebx

  *a3 = 0LL;
  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !(unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( (unsigned int)InlineIsEqualGUID(v7, v6)
      || (unsigned int)InlineIsEqualGUID(v8, &GUID_a0619dc9_c18e_43dc_ab1c_ea9a0df90597) )
    {
      *v9 = v10;
      v15 = 0;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_00000038_0000_0000_c000_000000000046)
        || (unsigned int)InlineIsEqualGUID(v12, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
        || (unsigned int)InlineIsEqualGUID(v14, &GUID_00000003_0000_0000_c000_000000000046) )
      {
        *v9 = v13;
        v15 = 0;
      }
      else
      {
        v15 = -2147467262;
      }
      if ( v15 < 0 )
        return (unsigned int)v15;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
    return (unsigned int)v15;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
