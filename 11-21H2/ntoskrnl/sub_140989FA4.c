/*
 * XREFs of sub_140989FA4 @ 0x140989FA4
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     sub_1409A4934 @ 0x1409A4934 (sub_1409A4934.c)
 */

void __fastcall sub_140989FA4(int a1, PVOID a2, void *a3)
{
  PVOID *v4; // rbx
  char v5; // di
  PVOID *i; // rax

  v4 = 0LL;
  v5 = 0;
  sub_140753094(1);
  for ( i = (PVOID *)qword_140C242A0; i != &qword_140C242A0; i = (PVOID *)*i )
  {
    v4 = i;
    if ( *((_DWORD *)i + 26) == a1 && i[14] == a2 )
    {
      i[15] = a3;
      v5 = 1;
      break;
    }
  }
  sub_1402935D0((ULONG_PTR)&qword_140C24280);
  if ( v5 )
  {
    if ( sub_1407F0F98() )
      sub_1409A4934(
        *((_DWORD *)v4 + 4),
        *((_DWORD *)v4 + 9),
        *((_DWORD *)v4 + 26),
        (unsigned int)v4[14],
        (__int64)v4[15]);
  }
}
