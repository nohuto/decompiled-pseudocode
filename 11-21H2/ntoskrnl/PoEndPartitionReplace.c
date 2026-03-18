/*
 * XREFs of PoEndPartitionReplace @ 0x14098FC84
 * Callers:
 *     PnprWakeDevices @ 0x140A6927C (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1407FE82C (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPartitionReplace(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 11;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}
