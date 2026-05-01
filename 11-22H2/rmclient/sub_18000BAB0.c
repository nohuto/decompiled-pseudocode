/*
 * XREFs of sub_18000BAB0 @ 0x18000BAB0
 * Callers:
 *     sub_180002EE0 @ 0x180002EE0 (sub_180002EE0.c)
 *     sub_180004DB0 @ 0x180004DB0 (sub_180004DB0.c)
 *     sub_180005140 @ 0x180005140 (sub_180005140.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000AD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 * Callees:
 *     malloc @ 0x18000AF71 (malloc.c)
 *     _callnewh @ 0x18000BAFB (_callnewh.c)
 */

void *__fastcall sub_18000BAB0(size_t Size)
{
  size_t i; // rdi
  void *v2; // rbx

  for ( i = Size; ; Size = i )
  {
    v2 = malloc(Size);
    if ( v2 || !callnewh(i) )
      break;
  }
  return v2;
}
