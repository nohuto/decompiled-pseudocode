/*
 * XREFs of sub_14037193C @ 0x14037193C
 * Callers:
 *     sub_1403714E0 @ 0x1403714E0 (sub_1403714E0.c)
 *     sub_1403718A8 @ 0x1403718A8 (sub_1403718A8.c)
 * Callees:
 *     sub_14034BBF0 @ 0x14034BBF0 (sub_14034BBF0.c)
 *     sub_14034F7F0 @ 0x14034F7F0 (sub_14034F7F0.c)
 */

char *__fastcall sub_14037193C(__int64 a1, unsigned int a2, int a3, int a4)
{
  char v4; // bl
  char *v6; // rsi
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h]

  v8 = 0;
  v4 = a4;
  v9 = 0LL;
  v10 = 0LL;
  v6 = sub_14034BBF0(a1, a2, a3, a4, (__int64)&v9, &v8);
  if ( v8 && (v4 & 1) == 0 )
    sub_14034F7F0(*(_DWORD *)(a1 + 8), (__int64)&v9);
  return v6;
}
