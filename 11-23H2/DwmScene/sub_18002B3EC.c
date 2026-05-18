/*
 * XREFs of sub_18002B3EC @ 0x18002B3EC
 * Callers:
 *     sub_18002C340 @ 0x18002C340 (sub_18002C340.c)
 *     sub_180035390 @ 0x180035390 (sub_180035390.c)
 *     sub_180036A60 @ 0x180036A60 (sub_180036A60.c)
 *     sub_180057344 @ 0x180057344 (sub_180057344.c)
 *     sub_180058240 @ 0x180058240 (sub_180058240.c)
 *     sub_180058394 @ 0x180058394 (sub_180058394.c)
 *     sub_18005845C @ 0x18005845C (sub_18005845C.c)
 *     sub_1800E0E04 @ 0x1800E0E04 (sub_1800E0E04.c)
 *     sub_1800E0E84 @ 0x1800E0E84 (sub_1800E0E84.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 */

__int64 __fastcall sub_18002B3EC(__int64 a1, struct _Mtx_internal_imp_t *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  sub_180011C7C(a2);
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
