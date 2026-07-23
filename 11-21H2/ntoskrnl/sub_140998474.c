/*
 * XREFs of sub_140998474 @ 0x140998474
 * Callers:
 *     sub_140996B90 @ 0x140996B90 (sub_140996B90.c)
 * Callees:
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 */

_BOOL8 sub_140998474()
{
  __int64 v0; // rdx
  __int64 v1; // r9

  v0 = 0LL;
  v1 = 10000000LL * (unsigned int)dword_140D052D4;
  if ( MEMORY[0xFFFFF78000000008] < (unsigned __int64)(qword_140C54148 + v1) )
    v0 = v1 + qword_140C54148 - MEMORY[0xFFFFF78000000008];
  return KeSetTimer2((__int64)&unk_140C1F840, -v0, 0LL, 0LL);
}
