/*
 * XREFs of sub_1408613C8 @ 0x1408613C8
 * Callers:
 *     sub_140B2DD94 @ 0x140B2DD94 (sub_140B2DD94.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall sub_1408613C8(__int64 a1, __int64 a2, HANDLE *a3)
{
  OBJECT_ATTRIBUTES v4; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&v4.Length = 48LL;
  v4.RootDirectory = 0LL;
  *(_QWORD *)&v4.Attributes = 576LL;
  v4.ObjectName = (PUNICODE_STRING)&qword_140006610;
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 1u, &v4);
}
