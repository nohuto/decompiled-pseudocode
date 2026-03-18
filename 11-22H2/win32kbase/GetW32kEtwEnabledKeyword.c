/*
 * XREFs of GetW32kEtwEnabledKeyword @ 0x1C013BCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _DEVOBJ_EXTENSION *GetW32kEtwEnabledKeyword()
{
  return WPP_MAIN_CB.DeviceObjectExtension;
}
