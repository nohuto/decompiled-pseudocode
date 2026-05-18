/*
 * XREFs of sub_18005793C @ 0x18005793C
 * Callers:
 *     sub_180057344 @ 0x180057344 (sub_180057344.c)
 *     sub_180058394 @ 0x180058394 (sub_180058394.c)
 * Callees:
 *     sub_1800401E8 @ 0x1800401E8 (sub_1800401E8.c)
 *     sub_18005746C @ 0x18005746C (sub_18005746C.c)
 */

char __fastcall sub_18005793C(__int64 a1, _Mtx_t *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  char result; // al
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  sub_1800401E8(a1 + 425, 0LL, a3, a4);
  sub_1800401E8(a1 + 424, 0LL, v6, v7);
  Cnd_signal((_Cnd_t)(a1 + 208));
  Cnd_signal((_Cnd_t)(a1 + 280));
  v9 = a1;
  while ( 1 )
  {
    result = sub_18005746C(&v9);
    if ( result )
      break;
    Cnd_wait((_Cnd_t)(a1 + 352), *a2);
  }
  return result;
}
