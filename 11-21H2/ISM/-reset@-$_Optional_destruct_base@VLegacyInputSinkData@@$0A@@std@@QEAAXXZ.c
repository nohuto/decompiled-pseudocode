/*
 * XREFs of ?reset@?$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ @ 0x18012428C
 * Callers:
 *     ?RemoveIdForNamespace@InputSite@@QEAAXW4InputSiteIdNamespace@@@Z @ 0x180124044 (-RemoveIdForNamespace@InputSite@@QEAAXW4InputSiteIdNamespace@@@Z.c)
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x180124160 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 */

void __fastcall std::_Optional_destruct_base<LegacyInputSinkData,0>::reset(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( *(_BYTE *)(a1 + 432) )
  {
    if ( *(char *)(a1 + 8) != -1LL )
    {
      if ( *(_BYTE *)(a1 + 8) )
        wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
          (__int64 *)a1,
          a2,
          a3,
          a4);
    }
    *(_BYTE *)(a1 + 432) = 0;
  }
}
