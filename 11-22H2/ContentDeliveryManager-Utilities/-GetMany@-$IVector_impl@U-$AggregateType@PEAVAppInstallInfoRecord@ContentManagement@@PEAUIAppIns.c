/*
 * XREFs of ?GetMany@?$IVector_impl@U?$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppInstallInfoRecord@2@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x180080E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IVector_impl<Windows::Foundation::Internal::AggregateType<ContentManagement::AppInstallInfoRecord *,ContentManagement::IAppInstallInfoRecord *>,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _DWORD *a5)
{
  return Windows::Foundation::Collections::Detail::_VectorGetMany<Windows::Foundation::Collections::IVector_impl<Windows::Foundation::Internal::AggregateType<ContentManagement::AppInstallInfoRecord *,ContentManagement::IAppInstallInfoRecord *>,1>,ContentManagement::IAppInstallInfoRecord *>(
           a1,
           a2,
           a3,
           a4,
           a5);
}
