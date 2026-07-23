/*
 * XREFs of sub_1406792F4 @ 0x1406792F4
 * Callers:
 *     sub_140679280 @ 0x140679280 (sub_140679280.c)
 *     sub_140700280 @ 0x140700280 (sub_140700280.c)
 * Callees:
 *     sub_14025CFA4 @ 0x14025CFA4 (sub_14025CFA4.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1409E2E08 @ 0x1409E2E08 (sub_1409E2E08.c)
 */

char __fastcall sub_1406792F4(PVOID Object, unsigned int a2, _DWORD *a3, unsigned __int64 a4, char a5)
{
  if ( (((1 << a2) & a3[1]) == 0 || a4)
    && (((1 << a2) & *a3) == 0 || (a5 & 2) == 0 || a4 != 1 && (a4 <= 1 || (a5 & 1) == 0)) )
  {
    return 0;
  }
  ObfReferenceObjectWithTag(Object, 0x6F4E7350u);
  if ( (xmmword_140D06910 & 0x400) != 0 && (a5 & 4) != 0 && a4 == 1 )
    sub_1409E2E08(Object, a2);
  if ( !sub_14025CFA4((signed __int64)Object, 0x2000u) )
    ObfDereferenceObjectWithTag(Object, 0x6F4E7350u);
  return 1;
}
