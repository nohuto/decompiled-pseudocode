/*
 * XREFs of sub_14083071C @ 0x14083071C
 * Callers:
 *     sub_1403C5F68 @ 0x1403C5F68 (sub_1403C5F68.c)
 *     sub_1403C6028 @ 0x1403C6028 (sub_1403C6028.c)
 *     sub_14082EFE4 @ 0x14082EFE4 (sub_14082EFE4.c)
 *     sub_140830634 @ 0x140830634 (sub_140830634.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall sub_14083071C(UNICODE_STRING *a1, void *a2, __int64 a3, HANDLE *a4)
{
  OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF

  v5.RootDirectory = a2;
  v5.ObjectName = a1;
  *(_QWORD *)&v5.Length = 48LL;
  *(_QWORD *)&v5.Attributes = 576LL;
  *a4 = 0LL;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  return ZwOpenKey(a4, 0x20019u, &v5);
}
