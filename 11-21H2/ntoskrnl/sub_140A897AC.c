/*
 * XREFs of sub_140A897AC @ 0x140A897AC
 * Callers:
 *     sub_140A874C8 @ 0x140A874C8 (sub_140A874C8.c)
 *     sub_140A88CF0 @ 0x140A88CF0 (sub_140A88CF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A897AC(__int64 a1, unsigned int a2, char a3)
{
  __int64 result; // rax

  if ( (a3 & 1) != 0 )
  {
    result = *(_QWORD *)"DmaVrfy0 ";
    *(_QWORD *)(a1 - 8) = *(_QWORD *)"DmaVrfy0 ";
  }
  if ( (a3 & 2) != 0 )
  {
    result = *(_QWORD *)"DmaVrfy0 ";
    *(_QWORD *)(a2 + a1) = *(_QWORD *)"DmaVrfy0 ";
  }
  return result;
}
