/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x14085B520
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403AD1B0 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x140997F1C (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140CF7CC8 )
  {
    if ( (byte_140CF7D89 & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_140CF7D89 = (PopNetCompliantNicCount != 0) | byte_140CF7D89 & 0xFE;
    }
  }
  return result;
}
