/*
 * XREFs of sub_14081CEB4 @ 0x14081CEB4
 * Callers:
 *     sub_14038AA3C @ 0x14038AA3C (sub_14038AA3C.c)
 *     sub_14038AE58 @ 0x14038AE58 (sub_14038AE58.c)
 *     sub_1405C9980 @ 0x1405C9980 (sub_1405C9980.c)
 *     sub_1405D06F0 @ 0x1405D06F0 (sub_1405D06F0.c)
 *     sub_140850980 @ 0x140850980 (sub_140850980.c)
 *     PoSetThermalActiveCooling @ 0x14098B330 (PoSetThermalActiveCooling.c)
 *     sub_14098B5B8 @ 0x14098B5B8 (sub_14098B5B8.c)
 *     sub_14098B868 @ 0x14098B868 (sub_14098B868.c)
 *     sub_140990740 @ 0x140990740 (sub_140990740.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14081CEB4(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 result; // rax

  if ( !*(_BYTE *)a1 )
  {
    a2 = (unsigned __int8)a2;
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      result = *(unsigned __int8 *)(a1 + 1);
      if ( (unsigned int)a2 >= (unsigned int)result )
        break;
      *(_QWORD *)(a1 + 8 * a2 + 360) += v3;
      a2 = (unsigned int)(a2 + 1);
    }
    *(_QWORD *)(a1 + 520) += v3;
    *(_QWORD *)(a1 + 16) = v2;
  }
  return result;
}
