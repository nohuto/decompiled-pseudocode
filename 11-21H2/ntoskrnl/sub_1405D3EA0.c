/*
 * XREFs of sub_1405D3EA0 @ 0x1405D3EA0
 * Callers:
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1405D3EA0()
{
  int v0; // r9d
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-D0h] BYREF
  int v3; // [rsp+34h] [rbp-CCh] BYREF
  int v4; // [rsp+38h] [rbp-C8h] BYREF
  int v5; // [rsp+3Ch] [rbp-C4h] BYREF
  int v6; // [rsp+40h] [rbp-C0h] BYREF
  int v7; // [rsp+44h] [rbp-BCh] BYREF
  int v8; // [rsp+48h] [rbp-B8h] BYREF
  int v9; // [rsp+4Ch] [rbp-B4h] BYREF
  _DWORD v10[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  int *v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  int *v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  int *v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  int *v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  int *v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  int *v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  int *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  int *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]

  v10[0] = MEMORY[0xFFFFF78000000014];
  v10[1] = MEMORY[0xFFFFF78000000018];
  if ( (unsigned int)dword_140C03A00 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
    {
      v5 = v0;
      v12 = v10;
      v2 = dword_140C229B4;
      v13 = 8LL;
      v14 = &v2;
      v3 = xmmword_140C22A04;
      v16 = &v3;
      v18 = &v4;
      v20 = &v5;
      v6 = (unsigned __int8)byte_140C22B3C;
      v22 = &v6;
      v7 = (unsigned __int8)byte_140C22B28;
      v24 = &v7;
      v8 = (unsigned __int8)byte_140C22B44;
      v26 = &v8;
      v9 = dword_140C22B40;
      v28 = &v9;
      v15 = 4LL;
      v17 = 4LL;
      v4 = v1;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_14002F730, 0LL, 0LL, 0xBu, &v11);
    }
  }
}
