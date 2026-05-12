/*
 * XREFs of sub_1C0018D7C @ 0x1C0018D7C
 * Callers:
 *     sub_1C0018CC4 @ 0x1C0018CC4 (sub_1C0018CC4.c)
 * Callees:
 *     sub_1C00A18DC @ 0x1C00A18DC (sub_1C00A18DC.c)
 */

__int64 __fastcall sub_1C0018D7C(__int64 a1, __int64 a2)
{
  struct _UNICODE_STRING v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  v5 = 4;
  v4 = 0LL;
  RtlInitUnicodeString(&v4, L"DeviceDumpVendorGPLogAddress");
  return sub_1C00A18DC(*(_QWORD *)(a1 + 8), 0, (unsigned int)&v4, 4, (__int64)&v6, (__int64)&v5);
}
