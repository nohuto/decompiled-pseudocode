/*
 * XREFs of IvtInvalidateAllContextEntries @ 0x1403B5F30
 * Callers:
 *     IvtInitializeIommu @ 0x140A89E10 (IvtInitializeIommu.c)
 * Callees:
 *     IvtIommuWaitCommand @ 0x140360454 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x140360584 (IvtIommuSendCommand.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall IvtInvalidateAllContextEntries(__int64 a1)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  v3[1] = 0LL;
  v3[0] = 17LL;
  IvtIommuSendCommand(a1, (unsigned __int64)v3, 0);
  return IvtIommuWaitCommand(a1, 0, 0);
}
