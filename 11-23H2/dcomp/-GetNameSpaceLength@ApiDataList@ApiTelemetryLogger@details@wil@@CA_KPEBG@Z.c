/*
 * XREFs of ?GetNameSpaceLength@ApiDataList@ApiTelemetryLogger@details@wil@@CA_KPEBG@Z @ 0x180064804
 * Callers:
 *     ?Flush@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXV?$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd@@@Z @ 0x1800620D8 (-Flush@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXV-$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd.c)
 *     ?ProcessSingleNamespace@ApiDataList@ApiTelemetryLogger@details@wil@@CAPEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@PEAV56@V?$function@$$A6AXAEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@@Z@6@@Z @ 0x180064770 (-ProcessSingleNamespace@ApiDataList@ApiTelemetryLogger@details@wil@@CAPEAV-$unique_ptr@UApiData@.c)
 * Callees:
 *     ?GetClassStringPointer@ApiDataList@ApiTelemetryLogger@details@wil@@CAPEBGPEBG@Z @ 0x180064834 (-GetClassStringPointer@ApiDataList@ApiTelemetryLogger@details@wil@@CAPEBGPEBG@Z.c)
 */

__int64 __fastcall wil::details::ApiTelemetryLogger::ApiDataList::GetNameSpaceLength(const unsigned __int16 *a1)
{
  const unsigned __int16 *ClassStringPointer; // rax
  __int64 v2; // r9
  __int64 result; // rax

  ClassStringPointer = wil::details::ApiTelemetryLogger::ApiDataList::GetClassStringPointer(a1);
  if ( ClassStringPointer )
    return ((__int64)ClassStringPointer - v2) >> 1;
  result = -1LL;
  do
    ++result;
  while ( *(_WORD *)(v2 + 2 * result) );
  return result;
}
