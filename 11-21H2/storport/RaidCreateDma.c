/*
 * XREFs of RaidCreateDma @ 0x1C008DC3C
 * Callers:
 *     RaidCreateAdapter @ 0x1C0039384 (RaidCreateAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidCreateDma(_OWORD *a1)
{
  if ( a1 )
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
}
