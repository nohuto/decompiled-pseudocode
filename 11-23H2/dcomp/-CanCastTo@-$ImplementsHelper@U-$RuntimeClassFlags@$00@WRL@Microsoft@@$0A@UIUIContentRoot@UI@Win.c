/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIUIContentRoot@UI@Windows@@UIWeakReferenceSource@@U?$CloakedIid@UIClosable@Foundation@Windows@@@23@U?$CloakedIid@UIUIContentRootPartner@UI@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180018554
 * Callers:
 *     ?CreateInstance@AppContentRootFactory@UI@Windows@@UEAAJPEAUIInspectable@@0PEAPEAUIUIContentRoot@23@@Z @ 0x1800183A0 (-CreateInstance@AppContentRootFactory@UI@Windows@@UEAAJPEAUIInspectable@@0PEAPEAUIUIContentRoot@.c)
 *     ?QueryInterface@AppContentRoot@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008DAB0 (-QueryInterface@AppContentRoot@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContentRoot@UI@Windows@@U?$CloakedIid@UIClosable@Foundation@Windows@@@23@U?$CloakedIid@UIUIContentRootPartner@UI@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B6270 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800B6270.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BE44 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Windows::UI::IUIContentRoot,IWeakReferenceSource,Microsoft::WRL::CloakedIid<Windows::Foundation::IClosable>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContentRootPartner>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  const struct _GUID *v5; // rcx
  void **v6; // r8
  unsigned int CanCastTo; // r9d
  __int64 v8; // r11
  const struct _GUID *v9; // rcx
  const struct _GUID *v10; // r10

  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_1dfcbac6_b36b_5cb9_9bc5_2b7a0eddc378) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v2, &GUID_00000038_0000_0000_c000_000000000046)
      || (unsigned int)InlineIsEqualGUID(v5, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e)
      || (unsigned int)InlineIsEqualGUID(v9, &GUID_603381cb_2327_5454_919d_a61c5dc4a7d9) )
    {
      *v6 = (void *)v8;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v8 + 8), v10, v6);
      if ( CanCastTo == -2147467262 )
        return (unsigned int)-2147467262;
    }
    return CanCastTo;
  }
}
