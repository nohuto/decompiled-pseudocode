/*
 * XREFs of sub_1409994F8 @ 0x1409994F8
 * Callers:
 *     sub_14080D110 @ 0x14080D110 (sub_14080D110.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1409990E8 @ 0x1409990E8 (sub_1409990E8.c)
 */

void __fastcall sub_1409994F8(char a1)
{
  sub_1402D66A8((ULONG_PTR)&qword_140C222C0);
  if ( a1 )
  {
    if ( byte_140C22305 )
    {
      if ( byte_140C22304 )
        sub_1409990E8();
      qword_140C22318 = 0LL;
      byte_140C22305 = 0;
    }
  }
  else if ( !byte_140C22305 )
  {
    byte_140C22305 = 1;
    qword_140C22318 = MEMORY[0xFFFFF78000000008];
  }
  sub_1402935D0((ULONG_PTR)&qword_140C222C0);
}
