/*
 * XREFs of sub_140398948 @ 0x140398948
 * Callers:
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_140398900 @ 0x140398900 (sub_140398900.c)
 *     sub_1405915B4 @ 0x1405915B4 (sub_1405915B4.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_140398948()
{
  _BYTE v1[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v1, 0, sizeof(v1));
  ++dword_140C50744;
  KeInvalidateAllCaches();
  return 1LL;
}
