/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180091540
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A0620 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802A0620.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A0640 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802A0640.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  void **v3; // r8
  const struct _GUID *v4; // r10
  Microsoft::WRL::FtmBase *v5; // r11
  int CanCastTo; // ebx
  _QWORD *v7; // r8
  __int64 v8; // r10
  __int64 v9; // r10
  __int64 v10; // r11
  int v12; // r9d
  __int64 v13; // r11

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v3 = v5;
    (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(v5, v4, v3);
  if ( CanCastTo != -2147467262 )
    goto LABEL_7;
  if ( !(unsigned int)InlineIsEqualGUID(v8, &GUID_3c32be79_d44b_4c43_b19b_12f70e686f35) )
  {
    if ( (unsigned int)InlineIsEqualGUID(v9, &GUID_c6144554_2844_43cf_b0ff_9b3c8ad9ba14) )
    {
      *v7 = v13;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = v12;
    }
LABEL_7:
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_5;
  }
  *v7 = v10;
  CanCastTo = 0;
LABEL_5:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
  return (unsigned int)CanCastTo;
}
