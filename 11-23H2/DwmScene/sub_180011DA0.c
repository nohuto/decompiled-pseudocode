/*
 * XREFs of sub_180011DA0 @ 0x180011DA0
 * Callers:
 *     sub_180011E04 @ 0x180011E04 (sub_180011E04.c)
 *     sub_180013C74 @ 0x180013C74 (sub_180013C74.c)
 *     sub_180013D44 @ 0x180013D44 (sub_180013D44.c)
 *     sub_180015AE0 @ 0x180015AE0 (sub_180015AE0.c)
 *     sub_180015C10 @ 0x180015C10 (sub_180015C10.c)
 *     sub_180015D28 @ 0x180015D28 (sub_180015D28.c)
 *     sub_1800185E0 @ 0x1800185E0 (sub_1800185E0.c)
 *     sub_180019608 @ 0x180019608 (sub_180019608.c)
 *     sub_180026238 @ 0x180026238 (sub_180026238.c)
 *     sub_18002DB6C @ 0x18002DB6C (sub_18002DB6C.c)
 *     sub_18003F1B0 @ 0x18003F1B0 (sub_18003F1B0.c)
 *     sub_180042604 @ 0x180042604 (sub_180042604.c)
 *     sub_1800426D4 @ 0x1800426D4 (sub_1800426D4.c)
 *     sub_1800430A0 @ 0x1800430A0 (sub_1800430A0.c)
 *     sub_18004A190 @ 0x18004A190 (sub_18004A190.c)
 *     sub_18004B4F0 @ 0x18004B4F0 (sub_18004B4F0.c)
 *     sub_180051710 @ 0x180051710 (sub_180051710.c)
 *     sub_18005AE40 @ 0x18005AE40 (sub_18005AE40.c)
 *     sub_18006185C @ 0x18006185C (sub_18006185C.c)
 *     sub_1800618F8 @ 0x1800618F8 (sub_1800618F8.c)
 *     sub_1800619C8 @ 0x1800619C8 (sub_1800619C8.c)
 *     sub_180061AE8 @ 0x180061AE8 (sub_180061AE8.c)
 *     sub_180061C08 @ 0x180061C08 (sub_180061C08.c)
 *     sub_180061D28 @ 0x180061D28 (sub_180061D28.c)
 *     sub_180064BB0 @ 0x180064BB0 (sub_180064BB0.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_180065860 @ 0x180065860 (sub_180065860.c)
 *     sub_18008DE40 @ 0x18008DE40 (sub_18008DE40.c)
 *     sub_18008F7C0 @ 0x18008F7C0 (sub_18008F7C0.c)
 *     sub_1800922E0 @ 0x1800922E0 (sub_1800922E0.c)
 *     sub_180096750 @ 0x180096750 (sub_180096750.c)
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180011DA0(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
