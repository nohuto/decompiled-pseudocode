/*
 * XREFs of ?QueryInterface@?$produce_base@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805A8950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable,void>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>::query_interface((a1 - 16) & -(__int64)(a1 != 0));
}
