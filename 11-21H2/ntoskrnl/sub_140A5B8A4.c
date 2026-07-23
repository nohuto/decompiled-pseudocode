/*
 * XREFs of sub_140A5B8A4 @ 0x140A5B8A4
 * Callers:
 *     sub_140A58CF8 @ 0x140A58CF8 (sub_140A58CF8.c)
 * Callees:
 *     sub_14025E824 @ 0x14025E824 (sub_14025E824.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140A5B8A4()
{
  int v0; // ebx
  __int64 Pool2; // rax

  v0 = sub_14025E824();
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(1320 * v0 + 24), 1699243339LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 20) = v0;
  qword_140C2BD60 = Pool2;
  return 0LL;
}
