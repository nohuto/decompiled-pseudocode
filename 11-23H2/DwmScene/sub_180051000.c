/*
 * XREFs of sub_180051000 @ 0x180051000
 * Callers:
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800D875C @ 0x1800D875C (sub_1800D875C.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

_QWORD *__fastcall sub_180051000(_QWORD *a1, size_t a2)
{
  void *v4; // rax
  void *v5; // rbx
  _QWORD *result; // rax

  v4 = (void *)sub_18001C190();
  v5 = v4;
  if ( v4 )
    memset(v4, 0, a2);
  else
    v5 = 0LL;
  result = a1;
  *a1 = v5;
  return result;
}
