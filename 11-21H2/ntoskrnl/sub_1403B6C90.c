/*
 * XREFs of sub_1403B6C90 @ 0x1403B6C90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14036972C @ 0x14036972C (sub_14036972C.c)
 */

void sub_1403B6C90()
{
  unsigned int v0; // edi

  byte_140C22AC0 = 0;
  v0 = 1;
  if ( byte_140C5AE18 )
  {
    byte_140C5AE18 = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140C22AA8, 0, 0);
  _InterlockedExchange(&dword_140C22A20, 0);
  sub_14036972C(v0);
}
