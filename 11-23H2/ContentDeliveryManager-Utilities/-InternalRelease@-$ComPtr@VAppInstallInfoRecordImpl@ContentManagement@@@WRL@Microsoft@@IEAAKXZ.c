/*
 * XREFs of ?InternalRelease@?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A654
 * Callers:
 *     ??$MakeAndInitialize@VAppInstallInfoRecordImpl@ContentManagement@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x1800475B8 (--$MakeAndInitialize@VAppInstallInfoRecordImpl@ContentManagement@@UIInspectable@@$$V@Details@WRL.c)
 *     ??1?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x1800482E4 (--1-$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VAppInstallInfoRecordImpl@ContentManagement@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppInstallInfoRecordImpl@ContentManagement@@@Z @ 0x18007B8AC (--$MakeAndInitialize@VAppInstallInfoRecordImpl@ContentManagement@@V12@$$V@Details@WRL@Microsoft@.c)
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18007EF6C (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003DBA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v1);
  }
  return result;
}
