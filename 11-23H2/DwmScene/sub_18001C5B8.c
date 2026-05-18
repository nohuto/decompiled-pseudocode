/*
 * XREFs of sub_18001C5B8 @ 0x18001C5B8
 * Callers:
 *     sub_18005B3E0 @ 0x18005B3E0 (sub_18005B3E0.c)
 *     sub_1800813C0 @ 0x1800813C0 (sub_1800813C0.c)
 * Callees:
 *     memcmp @ 0x18000CA6D (memcmp.c)
 */

char __fastcall sub_18001C5B8(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  size_t v3; // r8
  int v4; // eax
  char v5; // cl

  v2 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  v3 = a1[2];
  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  if ( v3 != v2 )
    return 1;
  v4 = memcmp(a1, a2, v3);
  v5 = 0;
  if ( v4 )
    return 1;
  return v5;
}
