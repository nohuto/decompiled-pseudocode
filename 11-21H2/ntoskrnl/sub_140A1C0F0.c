/*
 * XREFs of sub_140A1C0F0 @ 0x140A1C0F0
 * Callers:
 *     sub_140A1C5E8 @ 0x140A1C5E8 (sub_140A1C5E8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140A1BF48 @ 0x140A1BF48 (sub_140A1BF48.c)
 */

__int64 __fastcall sub_140A1C0F0(__int64 a1, __int64 a2, const WCHAR *a3, _DWORD *a4)
{
  UNICODE_STRING v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  RtlInitUnicodeString(&v8, a3);
  return sub_140A1BF48(a1, a2, &v8, a4);
}
