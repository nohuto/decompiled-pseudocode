/*
 * XREFs of sub_1406D5A30 @ 0x1406D5A30
 * Callers:
 *     sub_1406CEA04 @ 0x1406CEA04 (sub_1406CEA04.c)
 *     sub_1407446E0 @ 0x1407446E0 (sub_1407446E0.c)
 *     sub_14076CA78 @ 0x14076CA78 (sub_14076CA78.c)
 *     sub_14076FF88 @ 0x14076FF88 (sub_14076FF88.c)
 *     sub_140772790 @ 0x140772790 (sub_140772790.c)
 *     sub_14081D304 @ 0x14081D304 (sub_14081D304.c)
 *     sub_140827DE0 @ 0x140827DE0 (sub_140827DE0.c)
 *     sub_14082EA28 @ 0x14082EA28 (sub_14082EA28.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_140955848 @ 0x140955848 (sub_140955848.c)
 *     sub_14095C264 @ 0x14095C264 (sub_14095C264.c)
 *     sub_14095CDBC @ 0x14095CDBC (sub_14095CDBC.c)
 *     sub_14095D488 @ 0x14095D488 (sub_14095D488.c)
 *     sub_140A22D7C @ 0x140A22D7C (sub_140A22D7C.c)
 *     sub_140A255C0 @ 0x140A255C0 (sub_140A255C0.c)
 *     sub_140A27B38 @ 0x140A27B38 (sub_140A27B38.c)
 *     sub_140A2C368 @ 0x140A2C368 (sub_140A2C368.c)
 *     sub_140A2C72C @ 0x140A2C72C (sub_140A2C72C.c)
 *     sub_140A2C910 @ 0x140A2C910 (sub_140A2C910.c)
 *     sub_140A2CD54 @ 0x140A2CD54 (sub_140A2CD54.c)
 *     sub_140A2D248 @ 0x140A2D248 (sub_140A2D248.c)
 *     sub_140A2F5D0 @ 0x140A2F5D0 (sub_140A2F5D0.c)
 *     sub_140A2FD74 @ 0x140A2FD74 (sub_140A2FD74.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 */

int __fastcall sub_1406D5A30(HANDLE KeyHandle, const WCHAR *a2, ULONG a3, void *a4, ULONG DataSize)
{
  int result; // eax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  ValueName = 0LL;
  result = RtlInitUnicodeStringEx(&ValueName, a2);
  if ( result >= 0 )
    return ZwSetValueKey(KeyHandle, &ValueName, 0, a3, a4, DataSize);
  return result;
}
