/*
 * XREFs of ?get_DisplayInfo@TrayInfoTipAppInfo@SystemTray@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@@Z @ 0x1805479F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180547558 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@.c)
 */

__int64 __fastcall SystemTray::TrayInfoTipAppInfo::get_DisplayInfo(
        SystemTray::TrayInfoTipAppInfo *this,
        struct Windows::ApplicationModel::IAppDisplayInfo **a2)
{
  __int64 v2; // rcx
  int v3; // eax
  const char *v5; // r9
  int *v6; // rdx
  int v7[10]; // [rsp+0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v9; // [rsp+30h] [rbp+8h]

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    v3 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>>(
           v2,
           &GUID_1aeb1103_e4d4_41aa_a4f6_c4a276e79eac,
           a2);
    if ( v3 < 0 )
    {
      try
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1815,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
          (const char *)(unsigned int)v3,
          v7[8]);
      }
      catch ( ... )
      {
        v6 = v7;
        v6[12] = wil::details::in1diag3::Return_CaughtException(
                   *((wil::details::in1diag3 **)v6 + 5),
                   (void *)0x26,
                   (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipappinfo.cpp",
                   v5);
        return v9;
      }
    }
  }
  else
  {
    *a2 = 0LL;
  }
  return 0LL;
}
