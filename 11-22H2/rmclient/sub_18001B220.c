/*
 * XREFs of sub_18001B220 @ 0x18001B220
 * Callers:
 *     sub_18001B620 @ 0x18001B620 (sub_18001B620.c)
 *     sub_18001B6E0 @ 0x18001B6E0 (sub_18001B6E0.c)
 *     sub_18001B7A0 @ 0x18001B7A0 (sub_18001B7A0.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000AD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall sub_18001B220(__int64 a1)
{
  void *result; // rax

  result = operator new(0x20uLL, (const struct std::nothrow_t *)&unk_180026378);
  if ( result )
    return (void *)sub_18001AD08((__int64)result, a1);
  return result;
}
