/*
 * XREFs of ??1?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x1800482E4
 * Callers:
 *     _ContentManagement::AppManager::ConvertFromStoreRecords_::_1_::dtor$4 @ 0x1800D8532 (_ContentManagement--AppManager--ConvertFromStoreRecords_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::~ComPtr<ContentManagement::AppInstallInfoRecordImpl>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<ContentManagement::AppInstallInfoRecordImpl>::InternalRelease(a1);
}
