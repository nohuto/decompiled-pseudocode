/*
 * XREFs of sub_140957DE0 @ 0x140957DE0
 * Callers:
 *     sub_140808CB4 @ 0x140808CB4 (sub_140808CB4.c)
 *     sub_1409569F4 @ 0x1409569F4 (sub_1409569F4.c)
 *     sub_140956BBC @ 0x140956BBC (sub_140956BBC.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char sub_140957DE0()
{
  char v0; // dl

  v0 = 0;
  if ( !byte_140C44630 )
    KeBugCheckEx(0xCAu, 0x10uLL, 0LL, 0LL, 0LL);
  if ( !dword_140C4461C )
    return 1;
  if ( dword_140C4461C != 1 )
  {
    if ( dword_140C4461C != 2 )
      __fastfail(5u);
    return 1;
  }
  return v0;
}
