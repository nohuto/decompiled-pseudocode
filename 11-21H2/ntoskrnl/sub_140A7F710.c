/*
 * XREFs of sub_140A7F710 @ 0x140A7F710
 * Callers:
 *     sub_140A7F480 @ 0x140A7F480 (sub_140A7F480.c)
 *     sub_140A7F4E0 @ 0x140A7F4E0 (sub_140A7F4E0.c)
 *     sub_140A7F570 @ 0x140A7F570 (sub_140A7F570.c)
 *     sub_140A8EF40 @ 0x140A8EF40 (sub_140A8EF40.c)
 *     sub_140A966F0 @ 0x140A966F0 (sub_140A966F0.c)
 *     sub_140A96730 @ 0x140A96730 (sub_140A96730.c)
 *     sub_140A96894 @ 0x140A96894 (sub_140A96894.c)
 *     sub_140A9C1E0 @ 0x140A9C1E0 (sub_140A9C1E0.c)
 *     sub_140A9C2E0 @ 0x140A9C2E0 (sub_140A9C2E0.c)
 *     sub_140A9C3A0 @ 0x140A9C3A0 (sub_140A9C3A0.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_140A7F710(char a1, char a2)
{
  char *v2; // r8

  v2 = 0LL;
  if ( qword_140D57620 )
  {
    if ( dword_140D57698 )
    {
      _InterlockedIncrement(&dword_140D57854);
    }
    else
    {
      v2 = (char *)qword_140D57620
         + 56 * (_InterlockedIncrement(&dword_140D57858) & (unsigned int)(dword_140D4E028 - 1));
      v2[8] = a1;
      v2[9] = a2;
      *((_WORD *)v2 + 5) = HIDWORD(KeGetPcr()[1].LockArray);
    }
  }
  return v2;
}
