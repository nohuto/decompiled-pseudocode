/*
 * XREFs of ViDeadlockCheckStackLimits @ 0x140AD8CFC
 * Callers:
 *     ViDeadlockCanProceed @ 0x140AC078A (ViDeadlockCanProceed.c)
 * Callees:
 *     IoGetStackLimits @ 0x14022EA40 (IoGetStackLimits.c)
 *     DbgPrintEx @ 0x14032A9D0 (DbgPrintEx.c)
 */

ULONG ViDeadlockCheckStackLimits()
{
  ULONG result; // eax
  unsigned __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v2; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v1 = (unsigned __int64)&v1;
  IoGetStackLimits(&v2, &v3);
  result = v1;
  if ( v1 < v2 || (result = v1, v1 > v3) )
  {
    if ( VfVerifyMode > 2 )
    {
      result = ViStackSwitchAlreadyReported;
      if ( !ViStackSwitchAlreadyReported )
      {
        result = DbgPrintEx(0x5Du, 0, "DVRF: Driver switched stacks using an unsupported method!\n");
        ViStackSwitchAlreadyReported = 1;
      }
    }
  }
  return result;
}
