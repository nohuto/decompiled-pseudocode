/*
 * XREFs of sub_14082045C @ 0x14082045C
 * Callers:
 *     sub_1405611AC @ 0x1405611AC (sub_1405611AC.c)
 *     sub_14081FECC @ 0x14081FECC (sub_14081FECC.c)
 *     sub_140820308 @ 0x140820308 (sub_140820308.c)
 *     sub_140820DCC @ 0x140820DCC (sub_140820DCC.c)
 *     sub_14095F29C @ 0x14095F29C (sub_14095F29C.c)
 * Callees:
 *     sub_1408204B4 @ 0x1408204B4 (sub_1408204B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14082045C(_QWORD *P)
{
  __int64 i; // rsi

  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 8); i = (unsigned int)(i + 1) )
    {
      sub_1408204B4(P[i + 5]);
      P[i + 5] = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}
