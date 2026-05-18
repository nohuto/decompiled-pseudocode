/*
 * XREFs of sub_1800E0DBC @ 0x1800E0DBC
 * Callers:
 *     sub_1800E0D80 @ 0x1800E0D80 (sub_1800E0D80.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800E0DBC(__int64 a1)
{
  _Cnd_destroy_in_situ((_Cnd_t)(a1 + 152));
  _Cnd_destroy_in_situ((_Cnd_t)(a1 + 80));
  _Mtx_destroy_in_situ((_Mtx_t)a1);
}
