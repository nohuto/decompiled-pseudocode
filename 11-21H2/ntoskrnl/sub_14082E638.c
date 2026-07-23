/*
 * XREFs of sub_14082E638 @ 0x14082E638
 * Callers:
 *     ntoskrnl_25 @ 0x1403C54B0 (ntoskrnl_25.c)
 * Callees:
 *     sub_14082E8D4 @ 0x14082E8D4 (sub_14082E8D4.c)
 *     sub_140908C90 @ 0x140908C90 (sub_140908C90.c)
 */

__int64 sub_14082E638()
{
  int v0; // ebx

  dword_140C5A6DC = 0;
  dword_140C5A6EC = 0;
  qword_140C5A704 = 0LL;
  dword_140C5A70C = 0;
  dword_140C5A6D4 = 0;
  dword_140C5A6D8 = 0;
  qword_140C5A6E0 = 0LL;
  qword_140C5A6F8 = 0LL;
  qword_140C5A6F0 = (__int64)sub_1406AFC80;
  dword_140C5A700 = 54;
  dword_140C5A6D0 = 8;
  dword_140C5A6E8 = 10;
  v0 = sub_14082E8D4((char *)&qword_140C5A704 + 4, L"SHA256", 0LL, 0LL);
  if ( v0 >= 0 )
    sub_140908C90(&unk_140C06858);
  return (unsigned int)v0;
}
