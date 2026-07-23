/*
 * XREFs of sub_1409A01C0 @ 0x1409A01C0
 * Callers:
 *     sub_140999060 @ 0x140999060 (sub_140999060.c)
 *     sub_140B30800 @ 0x140B30800 (sub_140B30800.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1409A01C0()
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140C03A00 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_140032725, 0LL, 0LL, 2u, &v0);
  }
}
