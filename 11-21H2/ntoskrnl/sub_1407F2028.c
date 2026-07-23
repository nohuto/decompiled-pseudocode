/*
 * XREFs of sub_1407F2028 @ 0x1407F2028
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_1407F2930 @ 0x1407F2930 (sub_1407F2930.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     sub_1407F20B4 @ 0x1407F20B4 (sub_1407F20B4.c)
 *     sub_1407F287C @ 0x1407F287C (sub_1407F287C.c)
 *     sub_140808F30 @ 0x140808F30 (sub_140808F30.c)
 */

__int64 __fastcall sub_1407F2028(char a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx

  v2 = 0;
  if ( !byte_140C5AC3C )
    sub_1402D6B0C((__int64)&unk_140CE2050, 0x16F54A4u, 0, 0, (__int64)&qword_14000EFB0, 1);
  if ( a1 )
    sub_1407F287C();
  else
    sub_140808F30(a2);
  if ( !sub_1407F0F98() )
  {
    LOBYTE(v5) = a1;
    return (unsigned int)sub_1407F20B4(v5, a2);
  }
  return v2;
}
