/*
 * XREFs of ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004AD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::QueryInterface(
        __int64 a1,
        struct _GUID *a2,
        _QWORD *a3)
{
  return ContentManagement::AppInstallInfoRecordImpl::QueryInterface(a1 - 40, a2, a3);
}
