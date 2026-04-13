/*
 * XREFs of ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVAppInstallInfoRecord@ContentManagement@@PEAUIAppInstallInfoRecord@2@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x180080DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Internal::AggregateType<ContentManagement::AppInstallInfoRecord *,ContentManagement::IAppInstallInfoRecord *>,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  return Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Internal::AggregateType<ContentManagement::AppInstallInfoRecord *,ContentManagement::IAppInstallInfoRecord *>,1>,ContentManagement::IAppInstallInfoRecord *>(
           a1,
           a2,
           a3,
           a4);
}
