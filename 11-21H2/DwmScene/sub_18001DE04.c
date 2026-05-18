/*
 * XREFs of sub_18001DE04 @ 0x18001DE04
 * Callers:
 *     sub_18001E4D4 @ 0x18001E4D4 (sub_18001E4D4.c)
 *     sub_18002E87C @ 0x18002E87C (sub_18002E87C.c)
 *     sub_180031024 @ 0x180031024 (sub_180031024.c)
 *     sub_1800338B8 @ 0x1800338B8 (sub_1800338B8.c)
 *     sub_1800549C0 @ 0x1800549C0 (sub_1800549C0.c)
 *     sub_180054AD8 @ 0x180054AD8 (sub_180054AD8.c)
 *     sub_18005561C @ 0x18005561C (sub_18005561C.c)
 *     sub_180055760 @ 0x180055760 (sub_180055760.c)
 *     sub_180055894 @ 0x180055894 (sub_180055894.c)
 *     sub_1800569D0 @ 0x1800569D0 (sub_1800569D0.c)
 *     sub_180056A6C @ 0x180056A6C (sub_180056A6C.c)
 *     sub_180056E08 @ 0x180056E08 (sub_180056E08.c)
 *     sub_180057684 @ 0x180057684 (sub_180057684.c)
 *     sub_180057988 @ 0x180057988 (sub_180057988.c)
 *     sub_180057A40 @ 0x180057A40 (sub_180057A40.c)
 *     sub_180058450 @ 0x180058450 (sub_180058450.c)
 *     sub_180065750 @ 0x180065750 (sub_180065750.c)
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 *     sub_1800B4738 @ 0x1800B4738 (sub_1800B4738.c)
 *     sub_1800B4868 @ 0x1800B4868 (sub_1800B4868.c)
 * Callees:
 *     memcmp @ 0x1800FEEAF (memcmp.c)
 */

__int64 __fastcall sub_18001DE04(_QWORD *a1, _QWORD *a2)
{
  size_t v2; // rdi
  size_t v3; // rbx
  size_t v4; // r8
  unsigned int v5; // eax

  v2 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  v3 = a1[2];
  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  v4 = v2;
  if ( v2 >= v3 )
    v4 = v3;
  v5 = memcmp(a1, a2, v4);
  if ( !v5 )
  {
    if ( v3 >= v2 )
      v5 = v3 > v2;
    else
      v5 = -1;
  }
  return v5 >> 31;
}
