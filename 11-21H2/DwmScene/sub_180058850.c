/*
 * XREFs of sub_180058850 @ 0x180058850
 * Callers:
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 *     sub_1800E51F0 @ 0x1800E51F0 (sub_1800E51F0.c)
 *     sub_1800F1278 @ 0x1800F1278 (sub_1800F1278.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 */

_QWORD *__fastcall sub_180058850(_QWORD *a1, size_t a2)
{
  void *v4; // rax
  void *v5; // rbx
  _QWORD *result; // rax

  v4 = (void *)sub_18001D684();
  v5 = v4;
  if ( v4 )
    memset(v4, 0, a2);
  else
    v5 = 0LL;
  result = a1;
  *a1 = v5;
  return result;
}
