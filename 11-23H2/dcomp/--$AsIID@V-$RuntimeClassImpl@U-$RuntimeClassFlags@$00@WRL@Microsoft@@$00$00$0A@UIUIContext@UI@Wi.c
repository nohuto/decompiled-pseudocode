/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContext@UI@Windows@@U?$CloakedIid@UIUIContextPartner@UI@Windows@@@23@U?$CloakedIid@UIUIContextInternal@UI@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContext@UI@Windows@@U?$CloakedIid@UIUIContextPartner@UI@Windows@@@23@U?$CloakedIid@UIUIContextInternal@UI@Windows@@@23@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800189F8
 * Callers:
 *     ?CreateForCoreWindow@UIContextFactory@UI@Windows@@UEAAJPEAUICoreWindow@Core@23@HPEAPEAUIUIContext@23@@Z @ 0x180018980 (-CreateForCoreWindow@UIContextFactory@UI@Windows@@UEAAJPEAUICoreWindow@Core@23@HPEAPEAUIUIContex.c)
 *     ?QueryInterface@UIContext@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008E030 (-QueryInterface@UIContext@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?get_UIContext@AppContentRoot@UI@Windows@@UEAAJPEAPEAUIUIContext@23@@Z @ 0x1801144A0 (-get_UIContext@AppContentRoot@UI@Windows@@UEAAJPEAPEAUIUIContext@23@@Z.c)
 *     ?CreateForContent@UIContextFactory@UI@Windows@@UEAAJPEAUIUIContentRoot@23@PEAPEAUIUIContext@23@@Z @ 0x18011AE40 (-CreateForContent@UIContextFactory@UI@Windows@@UEAAJPEAUIUIContentRoot@23@PEAPEAUIUIContext@23@@.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BE44 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::IUIContext,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextPartner>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextInternal>,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r11
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  void **v8; // r8
  void *v9; // r11
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  __int64 v12; // r11
  int CanCastTo; // ebx
  const struct _GUID *v15; // r9

  *a3 = 0LL;
  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !(unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_bb5cfacd_5bd8_59d0_a59e_1c17a4d6d243)
      || (unsigned int)InlineIsEqualGUID(v7, &GUID_00000038_0000_0000_c000_000000000046) )
    {
      *v8 = v9;
      CanCastTo = 0;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_f21e14c1_e669_52af_99cd_171eee8e940d)
        || (unsigned int)InlineIsEqualGUID(v11, &GUID_95ee163b_7501_529e_8f60_b6432618c8e9) )
      {
        *v8 = (void *)v12;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v12 + 8), v15, v8);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
      }
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v8 + 8LL))(*v8);
    return (unsigned int)CanCastTo;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
