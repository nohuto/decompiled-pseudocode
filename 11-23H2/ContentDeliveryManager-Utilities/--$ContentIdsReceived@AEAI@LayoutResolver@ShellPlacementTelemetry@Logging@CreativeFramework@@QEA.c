/*
 * XREFs of ??$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXAEAI@Z @ 0x1800C4F08
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CBB7C (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001138 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x18005C1DC (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::ContentIdsReceived<unsigned int &>(
        __int64 a1,
        int *a2)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v5; // r9
  int v6; // r8d
  int v7; // [rsp+40h] [rbp+8h] BYREF

  result = CreativeFramework::Logging::ShellPlacementLogging::Provider(a1);
  if ( *(_DWORD *)result > 5u )
  {
    v6 = *(_QWORD *)(a1 + 48) + 8;
    v7 = *a2;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                                            (int)result,
                                            (int)&unk_18017E07B,
                                            v6,
                                            v5,
                                            (__int64)&v7);
  }
  return result;
}
