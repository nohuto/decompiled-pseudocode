/*
 * XREFs of ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18002206C
 * Callers:
 *     ?MarshalComment@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIPEBG@Z @ 0x1800220BC (-MarshalComment@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIPEBG@Z.c)
 *     ?Flush@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXV?$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd@@@Z @ 0x1800620D8 (-Flush@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXV-$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd.c)
 * Callees:
 *     StringCopyWorkerW_0 @ 0x18009B7B0 (StringCopyWorkerW_0.c)
 */

HRESULT __fastcall StringCchCopyNW(unsigned __int16 *a1, size_t a2, size_t *a3, size_t cchToCopy)
{
  HRESULT result; // eax

  if ( a2 - 1 > 0x7FFFFFFE )
  {
    result = -2147024809;
    if ( !a2 )
      return result;
    goto LABEL_6;
  }
  if ( cchToCopy > 0x7FFFFFFE )
  {
    result = -2147024809;
LABEL_6:
    *a1 = 0;
    return result;
  }
  return StringCopyWorkerW_0(a1, a2, a3, (STRSAFE_PCNZWCH)a3, cchToCopy);
}
