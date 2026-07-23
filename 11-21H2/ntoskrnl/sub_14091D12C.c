/*
 * XREFs of sub_14091D12C @ 0x14091D12C
 * Callers:
 *     sub_1406D6FD0 @ 0x1406D6FD0 (sub_1406D6FD0.c)
 *     sub_14091CEA0 @ 0x14091CEA0 (sub_14091CEA0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_14091D12C()
{
  int v0; // r9d
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+34h] [rbp-15h] BYREF
  __int64 v4; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-9h] BYREF
  int *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  __int64 *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140C03868 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C03868, 0x400000000000LL) )
    {
      v3 = v0;
      v6 = &v2;
      v2 = v1;
      v8 = &v3;
      v7 = 4LL;
      v10 = &v4;
      v9 = 4LL;
      v4 = 0x1000000LL;
      v11 = 8LL;
      sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_140029FBD, 0LL, 0LL, 5u, &v5);
    }
  }
}
