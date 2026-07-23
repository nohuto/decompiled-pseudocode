/*
 * XREFs of CcHasGlobalTelemetryChanged @ 0x1403D1294
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x140880E00 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     <none>
 */

char CcHasGlobalTelemetryChanged()
{
  char result; // al

  result = 0;
  if ( qword_140C5F8C0 || qword_140C5F8C8 || qword_140C5F8D0 || qword_140C5F8D8 || qword_140C5F8E0 )
    return 1;
  return result;
}
