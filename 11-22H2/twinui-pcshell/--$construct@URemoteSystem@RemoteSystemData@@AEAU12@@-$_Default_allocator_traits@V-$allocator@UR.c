/*
 * XREFs of ??$construct@URemoteSystem@RemoteSystemData@@AEAU12@@?$_Default_allocator_traits@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@SAXAEAV?$allocator@URemoteSystem@RemoteSystemData@@@1@QEAURemoteSystem@RemoteSystemData@@AEAU34@@Z @ 0x18070B868
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180717EE4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<RemoteSystemData::RemoteSystem>>::construct<RemoteSystemData::RemoteSystem,RemoteSystemData::RemoteSystem &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)a2 = winrt::impl::duplicate_hstring(*(winrt::impl **)a3, (struct winrt::impl::hstring_header *)a2, a3);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a3 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a3 + 16);
  result = *(unsigned __int16 *)(a3 + 24);
  *(_WORD *)(a2 + 24) = result;
  return result;
}
