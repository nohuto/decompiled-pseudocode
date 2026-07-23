/*
 * XREFs of sub_140593778 @ 0x140593778
 * Callers:
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 *     sub_1405540DC @ 0x1405540DC (sub_1405540DC.c)
 *     sub_1405554B0 @ 0x1405554B0 (sub_1405554B0.c)
 * Callees:
 *     sub_140294D28 @ 0x140294D28 (sub_140294D28.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_140592BEC @ 0x140592BEC (sub_140592BEC.c)
 */

char __fastcall sub_140593778(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  dword_140C297DC = 0;
  *(_QWORD *)&qword_140C297C0 = qword_140C56900;
  dword_140C297C8 = dword_140C52AE8;
  dword_140C297CC = dword_140C52AE4;
  dword_140C297D0 = dword_140C52B10;
  dword_140C297D4 = dword_140C52B14;
  qword_140C297E0 = qword_140D068D8;
  xmmword_140C297E8 = 0LL;
  dword_140C297D8 = dword_140C52AC4 + dword_140C52AC8 + dword_140C52ACC;
  LODWORD(xmmword_140C297E8) = MEMORY[0xFFFFF78000000240];
  DWORD1(xmmword_140C297E8) = dword_140D06880;
  sub_140294D28((_QWORD *)&xmmword_140C297E8 + 1);
  v4 = 4LL;
  do
  {
    sub_140592BEC(*a2++);
    --v4;
  }
  while ( v4 );
  v5 = &byte_140015000;
  v6 = 15LL;
  do
  {
    sub_140592BEC(*(_QWORD *)(*(unsigned __int16 *)v5 + a1));
    v5 += 2;
    --v6;
  }
  while ( v6 );
  return sub_1403D99B4((ULONG)&qword_140C297C0, (PVOID)0x38);
}
