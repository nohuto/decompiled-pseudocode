/*
 * XREFs of CcWaitForCurrentLazyWriterActivity @ 0x140389F20
 * Callers:
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     sub_140363C8C @ 0x140363C8C (sub_140363C8C.c)
 */

NTSTATUS CcWaitForCurrentLazyWriterActivity(void)
{
  NTSTATUS v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  sub_140363C8C((__int64)sub_1403895C0, (__int64)&v1, 0, 0);
  return v1;
}
