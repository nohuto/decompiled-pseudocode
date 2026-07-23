/*
 * XREFs of sub_140398ECC @ 0x140398ECC
 * Callers:
 *     sub_1403A78F0 @ 0x1403A78F0 (sub_1403A78F0.c)
 *     sub_1405512A0 @ 0x1405512A0 (sub_1405512A0.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_1403AA8D8 @ 0x1403AA8D8 (sub_1403AA8D8.c)
 */

__int64 __fastcall sub_140398ECC(__int64 a1, char a2)
{
  unsigned int v3; // ebx

  if ( a2 )
    dword_140C0DF90 |= 0xC00u;
  if ( !a1 )
    return (dword_140C0DF90 & 2) == 0 ? 0xC00000EF : 0;
  if ( !a2 && KeGetCurrentIrql() )
    return 3221225473LL;
  sub_1403A7C40();
  if ( (dword_140C0DF90 & 1) != 0 )
    v3 = sub_1403AA8D8(a1);
  else
    v3 = -1073741637;
  sub_1403A7BF0();
  return v3;
}
