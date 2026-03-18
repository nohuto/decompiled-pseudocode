/*
 * XREFs of USBD_VerifierSettingsCallback @ 0x1C0088860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBD_VerifierSettingsCallback(
        wchar_t *ValueName,
        unsigned int ValueType,
        _DWORD *ValueData,
        unsigned int ValueLength,
        void *Context,
        _DWORD *EntryContext)
{
  if ( ValueType != 4 )
    return 3221225485LL;
  if ( ValueLength != 4 )
    return 3221225701LL;
  if ( EntryContext != ValueData )
    *EntryContext = *ValueData;
  return 0LL;
}
