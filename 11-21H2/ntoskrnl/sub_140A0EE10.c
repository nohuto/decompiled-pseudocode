/*
 * XREFs of sub_140A0EE10 @ 0x140A0EE10
 * Callers:
 *     sub_140A0F4D4 @ 0x140A0F4D4 (sub_140A0F4D4.c)
 *     sub_140A0F68C @ 0x140A0F68C (sub_140A0F68C.c)
 *     sub_140A102DC @ 0x140A102DC (sub_140A102DC.c)
 *     sub_140A103F4 @ 0x140A103F4 (sub_140A103F4.c)
 * Callees:
 *     sub_1406E0358 @ 0x1406E0358 (sub_1406E0358.c)
 *     sub_140A0EC90 @ 0x140A0EC90 (sub_140A0EC90.c)
 */

__int64 __fastcall sub_140A0EE10(void *a1, ULONG a2, int a3, PMDL *a4, _QWORD *a5)
{
  if ( a3 )
    return sub_1406E0358(a1, a2, a4, a5);
  else
    return sub_140A0EC90(a1, a2, a4, a5);
}
