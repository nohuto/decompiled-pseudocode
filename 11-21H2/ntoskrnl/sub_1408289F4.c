/*
 * XREFs of sub_1408289F4 @ 0x1408289F4
 * Callers:
 *     sub_1408288D4 @ 0x1408288D4 (sub_1408288D4.c)
 *     sub_14098FB30 @ 0x14098FB30 (sub_14098FB30.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1408289F4()
{
  char v0; // r9
  int v1; // r10d
  char v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+34h] [rbp-15h] BYREF
  __int64 v4; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-9h] BYREF
  int *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  char *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  __int64 *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140C03A00 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
    {
      v2 = v0;
      v6 = &v3;
      v3 = v1;
      v8 = &v2;
      v7 = 4LL;
      v10 = &v4;
      v9 = 1LL;
      v4 = 0x1000000LL;
      v11 = 8LL;
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)&byte_14002E767, 0LL, 0LL, 5u, &v5);
    }
  }
}
