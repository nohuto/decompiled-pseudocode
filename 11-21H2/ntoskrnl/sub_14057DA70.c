/*
 * XREFs of sub_14057DA70 @ 0x14057DA70
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_14057DA70(__int64 a1, size_t a2)
{
  void *v3; // rax
  void *v4; // rbx

  v3 = (void *)sub_14042A5E0(a1, a2);
  v4 = v3;
  if ( v3 )
    memset(v3, 0, a2);
  return v4;
}
