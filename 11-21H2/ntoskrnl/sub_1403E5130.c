/*
 * XREFs of sub_1403E5130 @ 0x1403E5130
 * Callers:
 *     sub_140435FC0 @ 0x140435FC0 (sub_140435FC0.c)
 * Callees:
 *     <none>
 */

__int64 sub_1403E5130()
{
  int v5; // r8d
  char v7; // r9
  int v12; // r10d

  _RAX = 0LL;
  __asm { cpuid }
  v5 = _RAX;
  _RAX = 1LL;
  v7 = 0;
  __asm { cpuid }
  v12 = _RCX;
  _RAX = 7LL;
  if ( v5 >= 7 )
  {
    v7 = 0;
    __asm { cpuid }
    LOBYTE(_RAX) = 2;
    if ( (_RBX & 0x200) != 0 )
      v7 = 2;
  }
  if ( (v12 & 0x100000) != 0 && (v12 & 0x8000000) != 0 && (v12 & 0x10000000) != 0 )
  {
    __asm { xgetbv }
    if ( (_RAX & 6) == 6 )
      v7 |= 4u;
  }
  byte_140C094C0 = v7 | 1;
  return 0LL;
}
