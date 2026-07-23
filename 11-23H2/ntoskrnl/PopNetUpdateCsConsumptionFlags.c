/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x14085AF90
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403ADA20 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x14099806C (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140CF7C08 )
  {
    if ( (byte_140CF7CC9 & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_140CF7CC9 = (PopNetCompliantNicCount != 0) | byte_140CF7CC9 & 0xFE;
    }
  }
  return result;
}
