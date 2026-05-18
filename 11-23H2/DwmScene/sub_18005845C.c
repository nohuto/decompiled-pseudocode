/*
 * XREFs of sub_18005845C @ 0x18005845C
 * Callers:
 *     sub_180037F0C @ 0x180037F0C (sub_180037F0C.c)
 * Callees:
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     sub_18002B8E0 @ 0x18002B8E0 (sub_18002B8E0.c)
 *     sub_180057460 @ 0x180057460 (sub_180057460.c)
 */

int __fastcall sub_18005845C(__int64 a1)
{
  _Mtx_t v3[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002B3EC((__int64)v3, (struct _Mtx_internal_imp_t *)(a1 + 128));
  while ( sub_180057460(a1 + 424) )
    Cnd_wait((_Cnd_t)(a1 + 280), v3[0]);
  return sub_18002B8E0((__int64)v3);
}
