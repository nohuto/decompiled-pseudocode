/*
 * XREFs of sub_1409984D0 @ 0x1409984D0
 * Callers:
 *     sub_140998800 @ 0x140998800 (sub_140998800.c)
 *     sub_140998940 @ 0x140998940 (sub_140998940.c)
 * Callees:
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_140993FC8 @ 0x140993FC8 (sub_140993FC8.c)
 */

void __fastcall sub_1409984D0(__int64 a1, char a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx

  v4 = 0LL;
  v5 = -a1;
  if ( a2 )
    v5 = a1;
  KeSetTimer2((__int64)&unk_140C1F920, v5, 0LL, 0LL);
  if ( a2 )
  {
    if ( MEMORY[0xFFFFF78000000014] < a1 )
      v4 = a1 - MEMORY[0xFFFFF78000000014];
  }
  else
  {
    v4 = a1;
  }
  sub_140993FC8(v4);
}
