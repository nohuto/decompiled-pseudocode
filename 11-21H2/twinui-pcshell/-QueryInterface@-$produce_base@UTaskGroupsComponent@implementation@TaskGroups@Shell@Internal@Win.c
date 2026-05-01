/*
 * XREFs of ?QueryInterface@?$produce_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801734D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,void>::QueryInterface(
        __int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx

  v1 = (__int64 (__fastcall ***)(_QWORD))((a1 - 24) & -(__int64)(a1 != 0));
  return (**v1)(v1);
}
