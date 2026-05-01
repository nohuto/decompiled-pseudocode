/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000AD64
 * Callers:
 *     sub_1800037A0 @ 0x1800037A0 (sub_1800037A0.c)
 *     sub_180003AD8 @ 0x180003AD8 (sub_180003AD8.c)
 *     sub_180003EF0 @ 0x180003EF0 (sub_180003EF0.c)
 *     sub_180004310 @ 0x180004310 (sub_180004310.c)
 *     sub_180004B70 @ 0x180004B70 (sub_180004B70.c)
 *     sub_180005140 @ 0x180005140 (sub_180005140.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000BAF0 (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     sub_18001AA68 @ 0x18001AA68 (sub_18001AA68.c)
 *     sub_18001AB4C @ 0x18001AB4C (sub_18001AB4C.c)
 *     sub_18001B220 @ 0x18001B220 (sub_18001B220.c)
 *     sub_18001CDA8 @ 0x18001CDA8 (sub_18001CDA8.c)
 * Callees:
 *     sub_18000BAB0 @ 0x18000BAB0 (sub_18000BAB0.c)
 */

void *__fastcall operator new(size_t a1, const struct std::nothrow_t *a2)
{
  void *result; // rax

  try
  {
    result = (void *)sub_18000BAB0(a1);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
