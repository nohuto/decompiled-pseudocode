/*
 * XREFs of ?MagnifierGestureStateToString@InputTraceLogging@@CAPEBDW4MagnifierGestureState@Input@Internal@UI@Windows@@@Z @ 0x1801DC898
 * Callers:
 *     ?SendPan@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x1801DCA64 (-SendPan@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEB.c)
 *     ?SendZoom@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x1801DCB8C (-SendZoom@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAE.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::MagnifierGestureStateToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return "Started";
  v1 = a1 - 1;
  if ( !v1 )
    return "Continuing";
  if ( v1 == 1 )
    return "Completed";
  return "UNKNOWN";
}
