/*
 * XREFs of sub_1C00A00D4 @ 0x1C00A00D4
 * Callers:
 *     DllUnload @ 0x1C0065590 (DllUnload.c)
 * Callees:
 *     <none>
 */

__int64 sub_1C00A00D4()
{
  __int64 result; // rax

  if ( qword_1C0093B30 )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    qword_1C0093B30 = 0LL;
  }
  dword_1C0093B38 = 0;
  return result;
}
