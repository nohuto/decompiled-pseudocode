/*
 * XREFs of ?CreateForCoreWindow@UIContextFactory@UI@Windows@@UEAAJPEAUICoreWindow@Core@23@HPEAPEAUIUIContext@23@@Z @ 0x180018980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContext@UI@Windows@@U?$CloakedIid@UIUIContextPartner@UI@Windows@@@23@U?$CloakedIid@UIUIContextInternal@UI@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContext@UI@Windows@@U?$CloakedIid@UIUIContextPartner@UI@Windows@@@23@U?$CloakedIid@UIUIContextInternal@UI@Windows@@@23@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800189F8 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContext@UI@Wi.c)
 *     ??$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUICoreWindow@Core@23@@Details@WRL@Microsoft@@YAJPEAPEAVUIContext@UI@Windows@@AEAPEAUICoreWindow@Core@45@@Z @ 0x180018AA8 (--$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUICoreWindow@Core@23@@Details@WRL@Microso.c)
 *     ?InternalRelease@?$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008C910 (-InternalRelease@-$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::UIContextFactory::CreateForCoreWindow(
        Windows::UI::UIContextFactory *this,
        struct Windows::UI::Core::ICoreWindow *a2,
        __int64 a3,
        struct Windows::UI::IUIContext **a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::UI::Core::ICoreWindow *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v9[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::UIContext>::InternalRelease(v9);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::UIContext,Windows::UI::UIContext,Windows::UI::Core::ICoreWindow * &>(
         v9,
         &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 99LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtuicontext.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_4;
  }
  v5 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::IUIContext,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextPartner>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextInternal>,Microsoft::WRL::FtmBase>>(
         v9[0],
         &GUID_bb5cfacd_5bd8_59d0_a59e_1c17a4d6d243,
         a4);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 101LL;
    goto LABEL_7;
  }
  v6 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<Windows::UI::UIContext>::InternalRelease(v9);
  return v6;
}
