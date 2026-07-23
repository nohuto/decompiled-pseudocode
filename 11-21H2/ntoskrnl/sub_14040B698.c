/*
 * XREFs of sub_14040B698 @ 0x14040B698
 * Callers:
 *     sub_14040B7F4 @ 0x14040B7F4 (sub_14040B7F4.c)
 * Callees:
 *     sub_140259650 @ 0x140259650 (sub_140259650.c)
 *     sub_140400AB4 @ 0x140400AB4 (sub_140400AB4.c)
 *     sub_140400B44 @ 0x140400B44 (sub_140400B44.c)
 *     sub_140400C78 @ 0x140400C78 (sub_140400C78.c)
 */

__int64 __fastcall sub_14040B698(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  int v8; // edi
  unsigned int v9; // r14d
  unsigned int *i; // rbx
  unsigned int v11; // esi

  v8 = 0;
  v9 = sub_140400B44();
  if ( (a4 & 3) != 0 && (sub_140400C78(a1) & 1) != 0 )
    v8 = a3 >= 0xA;
  for ( i = (unsigned int *)&unk_140C094F0; ; i += 4 )
  {
    v11 = i[1];
    if ( ((unsigned int)sub_140259650() & v11) == 0
      && (v11 & dword_140C094E0) == 0
      && (!i[2] || a2 <= (unsigned int)sub_140400AB4() && v9 <= i[2])
      && (~v8 & i[3]) == 0 )
    {
      break;
    }
  }
  return *i;
}
