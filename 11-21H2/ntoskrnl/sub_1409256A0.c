/*
 * XREFs of sub_1409256A0 @ 0x1409256A0
 * Callers:
 *     sub_1409246D8 @ 0x1409246D8 (sub_1409246D8.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1409256A0()
{
  int v0; // r9d
  int v1; // r10d
  char v2; // r11
  char v3; // [rsp+30h] [rbp-19h] BYREF
  int v4; // [rsp+34h] [rbp-15h] BYREF
  int v5; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-9h] BYREF
  char *v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  int *v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  int *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140C03868 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C03868, 8LL) )
    {
      v5 = v0;
      v7 = &v3;
      v3 = v2;
      v9 = &v4;
      v8 = 1LL;
      v11 = &v5;
      v4 = v1;
      v10 = 4LL;
      v12 = 4LL;
      sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)&unk_14002A2D0, 0LL, 0LL, 5u, &v6);
    }
  }
}
