/*
 * XREFs of ??$TargetedContentTilesExtracted@IPEB_W@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAX$$QEAI$$QEAPEB_W@Z @ 0x1800C5AF0
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CAB98 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x180003E4C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@_W@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x18005C1DC (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::TargetedContentTilesExtracted<unsigned int,wchar_t const *>(
        __int64 a1,
        int *a2,
        __int64 *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r9
  int v8; // edx
  const GUID *v9; // r8
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v6 = CreativeFramework::Logging::ShellPlacementLogging::Provider(a1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v8 = *a2;
    v12 = *a3;
    v9 = (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL);
    LODWORD(v11) = v8;
    LODWORD(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>>(
                    (__int64)v6,
                    (unsigned __int8 *)dword_18017E10E,
                    v9,
                    v7,
                    (__int64)&v11,
                    (const wchar_t **)&v12);
  }
  return (int)v6;
}
