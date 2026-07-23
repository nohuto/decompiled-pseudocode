/*
 * XREFs of sub_1403DC988 @ 0x1403DC988
 * Callers:
 *     sub_1403A73E0 @ 0x1403A73E0 (sub_1403A73E0.c)
 *     sub_1403DC824 @ 0x1403DC824 (sub_1403DC824.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall sub_1403DC988(UNICODE_STRING *a1, HANDLE *a2)
{
  OBJECT_ATTRIBUTES v3; // [rsp+20h] [rbp-38h] BYREF

  v3.ObjectName = a1;
  *(_QWORD *)&v3.Length = 48LL;
  v3.RootDirectory = 0LL;
  *(_QWORD *)&v3.Attributes = 576LL;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  return ZwOpenKey(a2, 0x10u, &v3);
}
