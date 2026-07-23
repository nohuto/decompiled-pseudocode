/*
 * XREFs of sub_140826E28 @ 0x140826E28
 * Callers:
 *     sub_140826E04 @ 0x140826E04 (sub_140826E04.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140826E28()
{
  int v0; // [rsp+30h] [rbp-68h] BYREF
  __int64 v1; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v3; // [rsp+60h] [rbp-38h]
  int v4; // [rsp+68h] [rbp-30h]
  int v5; // [rsp+6Ch] [rbp-2Ch]
  int *v6; // [rsp+70h] [rbp-28h]
  int v7; // [rsp+78h] [rbp-20h]
  int v8; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140C06550 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C06550, 0x400000000000LL) )
    {
      v5 = 0;
      v8 = 0;
      v3 = &v1;
      v0 = dword_140C44634;
      v7 = 4;
      v6 = &v0;
      v1 = 2048LL;
      v4 = 8;
      sub_14020A9C4((__int64)&dword_140C06550, (unsigned __int8 *)byte_14002BF25, 0LL, 0LL, 4u, &v2);
    }
  }
}
