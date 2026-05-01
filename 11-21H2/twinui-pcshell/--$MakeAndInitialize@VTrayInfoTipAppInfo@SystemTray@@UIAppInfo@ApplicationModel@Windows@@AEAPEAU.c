/*
 * XREFs of ??$MakeAndInitialize@VTrayInfoTipAppInfo@SystemTray@@UIAppInfo@ApplicationModel@Windows@@AEAPEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUIAppInfo@ApplicationModel@Windows@@AEAPEAUHSTRING__@@@Z @ 0x1804904A4
 * Callers:
 *     ?FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@ApplicationModel@Windows@@@Z @ 0x180490950 (-FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@Applicat.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802E6B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@UDisp.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppInfo@ApplicationModel@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppInfo@ApplicationModel@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804903FC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppInfo@Applica.c)
 *     ??0TrayInfoTipAppInfo@SystemTray@@QEAA@XZ @ 0x1804906A0 (--0TrayInfoTipAppInfo@SystemTray@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x180491E7C (-RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayInfoTipAppInfo,Windows::ApplicationModel::IAppInfo,HSTRING__ * &>(
        _QWORD *a1,
        HSTRING *a2)
{
  SystemTray::TrayInfoTipAppInfo *v4; // rax
  int v5; // ebx
  SystemTray::TrayInfoTipAppInfo *v6; // rdi

  *a1 = 0LL;
  v4 = (SystemTray::TrayInfoTipAppInfo *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = (SystemTray::TrayInfoTipAppInfo *)SystemTray::TrayInfoTipAppInfo::TrayInfoTipAppInfo(v4);
    v5 = SystemTray::TrayInfoTipAppInfo::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
      v5 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppInfo,Microsoft::WRL::FtmBase>>(
             (__int64)v6,
             &GUID_cf7f59b3_6a09_4de8_a6c0_5792d56880d1,
             a1);
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::FtmBase>::Release((__int64)v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
