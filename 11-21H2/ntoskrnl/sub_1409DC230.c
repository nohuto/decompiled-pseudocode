/*
 * XREFs of sub_1409DC230 @ 0x1409DC230
 * Callers:
 *     <none>
 * Callees:
 *     sub_14062C800 @ 0x14062C800 (sub_14062C800.c)
 *     sub_1409DC2AC @ 0x1409DC2AC (sub_1409DC2AC.c)
 */

__int64 __fastcall sub_1409DC230(__int64 a1, __int64 a2, PCSZ *a3, int a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a4 == 2
    && *a3
    && a3[1]
    && (byte_140C165B8 || (int)sub_14062C800(a1) >= 0)
    && (unsigned __int8)sub_1409DC2AC(*a3, &stru_140C165A0)
    && (unsigned __int8)sub_1409DC2AC(a3[1], &stru_140C16570) )
  {
    return 2;
  }
  return v4;
}
