/*
 * XREFs of ?get_UIContext@AppContentRoot@UI@Windows@@UEAAJPEAPEAUIUIContext@23@@Z @ 0x1801144A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContext@UI@Windows@@U?$CloakedIid@UIUIContextPartner@UI@Windows@@@23@U?$CloakedIid@UIUIContextInternal@UI@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContext@UI@Windows@@U?$CloakedIid@UIUIContextPartner@UI@Windows@@@23@U?$CloakedIid@UIUIContextInternal@UI@Windows@@@23@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800189F8 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContext@UI@Wi.c)
 */

__int64 __fastcall Windows::UI::AppContentRoot::get_UIContext(
        Windows::UI::AppContentRoot *this,
        struct Windows::UI::IUIContext **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::IUIContext,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextPartner>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextInternal>,Microsoft::WRL::FtmBase>>(
         *((_QWORD *)this + 11),
         &GUID_bb5cfacd_5bd8_59d0_a59e_1c17a4d6d243,
         a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtappcontentroot.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
