/*
 * XREFs of sub_1409A0D80 @ 0x1409A0D80
 * Callers:
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1409A1604 @ 0x1409A1604 (sub_1409A1604.c)
 */

NTSTATUS sub_1409A0D80()
{
  NTSTATUS result; // eax
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  Timeout.QuadPart = -100000LL;
  result = KeWaitForSingleObject(&stru_140C1C3E8, Executive, 0, 0, &Timeout);
  if ( result != 258 )
    return sub_1409A1604();
  return result;
}
