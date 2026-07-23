/*
 * XREFs of sub_1406EB440 @ 0x1406EB440
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406EB470 @ 0x1406EB470 (sub_1406EB470.c)
 */

void __fastcall sub_1406EB440(PVOID CallbackContext, _BYTE *Argument1, PVOID Argument2)
{
  __int64 v3; // rcx

  if ( !byte_140C44630 )
    KeBugCheckEx(0xCAu, 0x10uLL, 0LL, 0LL, 0LL);
  v3 = 1LL;
  if ( !*Argument1 )
    v3 = 2LL;
  sub_1406EB470(v3, Argument1, Argument2);
}
