/*
 * XREFs of sub_140925900 @ 0x140925900
 * Callers:
 *     sub_1409246D8 @ 0x1409246D8 (sub_1409246D8.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140925900()
{
  int v0; // r9d
  char v1; // r10
  char v2; // [rsp+30h] [rbp-68h] BYREF
  int v3; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-58h] BYREF
  char *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  int *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140C03868 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C03868, 8LL) )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v2;
      v3 = v0;
      v8 = &v3;
      v9 = 4;
      v2 = v1;
      v6 = 1;
      sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)&unk_14002A420, 0LL, 0LL, 4u, &v4);
    }
  }
}
