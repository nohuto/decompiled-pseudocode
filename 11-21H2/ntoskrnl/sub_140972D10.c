/*
 * XREFs of sub_140972D10 @ 0x140972D10
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406C2718 @ 0x1406C2718 (sub_1406C2718.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void *sub_140972D10()
{
  SIZE_T v0; // rdi
  PVOID v1; // rax
  void *v2; // rbx

  v0 = 8LL * (((unsigned int)dword_140C4F478 >> 12) + ((dword_140C4F478 & 0xFFF) != 0));
  v1 = sub_1402828F0(274, v0, 0x74536D4Du);
  v2 = v1;
  if ( !v1 )
    return 0LL;
  if ( !(unsigned int)sub_1406C2718((__int64)v1, v0) )
  {
    ExFreePoolWithTag(v2, 0);
    return 0LL;
  }
  memset(v2, 0, v0);
  return v2;
}
