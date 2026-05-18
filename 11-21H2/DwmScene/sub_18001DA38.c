/*
 * XREFs of sub_18001DA38 @ 0x18001DA38
 * Callers:
 *     sub_18001DAC0 @ 0x18001DAC0 (sub_18001DAC0.c)
 *     sub_18002E87C @ 0x18002E87C (sub_18002E87C.c)
 *     sub_1800366A0 @ 0x1800366A0 (sub_1800366A0.c)
 *     sub_180060C88 @ 0x180060C88 (sub_180060C88.c)
 *     sub_180070790 @ 0x180070790 (sub_180070790.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_18009A858 @ 0x18009A858 (sub_18009A858.c)
 *     sub_18009FB44 @ 0x18009FB44 (sub_18009FB44.c)
 *     sub_1800A8EC8 @ 0x1800A8EC8 (sub_1800A8EC8.c)
 *     sub_1800AC6B4 @ 0x1800AC6B4 (sub_1800AC6B4.c)
 * Callees:
 *     memcmp @ 0x1800FEEAF (memcmp.c)
 */

bool __fastcall sub_18001DA38(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  size_t v3; // r8
  char v4; // bl

  v2 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  v3 = a1[2];
  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  v4 = 0;
  if ( v3 == v2 )
    return memcmp(a1, a2, v3) == 0;
  return v4;
}
