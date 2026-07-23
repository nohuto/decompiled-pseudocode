/*
 * XREFs of sub_140779620 @ 0x140779620
 * Callers:
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_140661C4C @ 0x140661C4C (sub_140661C4C.c)
 *     sub_14076426C @ 0x14076426C (sub_14076426C.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_140778370 @ 0x140778370 (sub_140778370.c)
 *     sub_1407796C4 @ 0x1407796C4 (sub_1407796C4.c)
 *     sub_1409536B0 @ 0x1409536B0 (sub_1409536B0.c)
 *     sub_140953AB8 @ 0x140953AB8 (sub_140953AB8.c)
 * Callees:
 *     sub_140779680 @ 0x140779680 (sub_140779680.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140779620(unsigned int a1, char *a2, ULONG a3)
{
  char *v5; // rbx
  __int64 v6; // rbp

  if ( a1 )
  {
    v5 = a2;
    v6 = a1;
    do
    {
      sub_140779680(v5, a3);
      v5 += 48;
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(a2, a3);
}
