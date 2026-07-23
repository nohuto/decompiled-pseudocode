/*
 * XREFs of sub_1409931D4 @ 0x1409931D4
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1409931D4()
{
  char v0; // r9
  char v1; // [rsp+30h] [rbp-68h] BYREF
  __int64 v2; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+40h] [rbp-58h] BYREF
  char *v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140C03A00 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
    {
      v6 = 0;
      v9 = 0;
      v4 = &v1;
      v1 = v0;
      v7 = &v2;
      v5 = 1;
      v2 = 0x1000000LL;
      v8 = 8;
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_140030251, 0LL, 0LL, 4u, &v3);
    }
  }
}
