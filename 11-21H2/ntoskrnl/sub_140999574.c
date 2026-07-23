/*
 * XREFs of sub_140999574 @ 0x140999574
 * Callers:
 *     sub_140999A80 @ 0x140999A80 (sub_140999A80.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1409990E8 @ 0x1409990E8 (sub_1409990E8.c)
 */

void __fastcall sub_140999574(char a1)
{
  int v2; // eax

  sub_1402D66A8((ULONG_PTR)&qword_140C222C0);
  if ( a1 )
    v2 = dword_140C22300 + 1;
  else
    v2 = dword_140C22300 - 1;
  dword_140C22300 = v2;
  if ( v2 )
  {
    if ( !byte_140C22304 )
    {
      byte_140C22304 = 1;
      qword_140C22310 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140C22304 )
  {
    if ( byte_140C22305 )
      sub_1409990E8();
    qword_140C22310 = 0LL;
    byte_140C22304 = 0;
  }
  sub_1402935D0((ULONG_PTR)&qword_140C222C0);
}
