/*
 * XREFs of PopNetNonCompliantDeviceUpdate @ 0x140996894
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140997E6C (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x1408648F8 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x140996680 (PopNetClearConnectivityConstraint.c)
 */

void __fastcall PopNetNonCompliantDeviceUpdate(char a1, int a2)
{
  int v2; // eax

  if ( a2 || !PopIgnoreCsComplianceCheck )
  {
    v2 = PopNetNonCompliantDeviceCount;
    if ( a1 )
    {
      ++PopNetNonCompliantDeviceCount;
      if ( !v2 )
        PopNetSetConnectivityConstraint(3);
    }
    else if ( PopNetNonCompliantDeviceCount )
    {
      --PopNetNonCompliantDeviceCount;
      if ( v2 == 1 )
        PopNetClearConnectivityConstraint(3);
    }
  }
}
