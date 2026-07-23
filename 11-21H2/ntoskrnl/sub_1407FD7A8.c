/*
 * XREFs of sub_1407FD7A8 @ 0x1407FD7A8
 * Callers:
 *     sub_14038AA3C @ 0x14038AA3C (sub_14038AA3C.c)
 *     sub_14038AE58 @ 0x14038AE58 (sub_14038AE58.c)
 *     sub_1405C9980 @ 0x1405C9980 (sub_1405C9980.c)
 *     sub_1405D06F0 @ 0x1405D06F0 (sub_1405D06F0.c)
 *     sub_140850980 @ 0x140850980 (sub_140850980.c)
 *     PoSetThermalPassiveCooling @ 0x14098B3E0 (PoSetThermalPassiveCooling.c)
 *     sub_14098B5B8 @ 0x14098B5B8 (sub_14098B5B8.c)
 *     sub_14098B868 @ 0x14098B868 (sub_14098B868.c)
 *     sub_140990740 @ 0x140990740 (sub_140990740.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407FD7A8(__int64 a1, unsigned __int8 a2)
{
  int v2; // r9d
  __int64 v3; // rdx
  __int64 result; // rax

  if ( !*(_BYTE *)a1 )
  {
    v2 = 21;
    do
    {
      if ( a2 >= byte_140C22340[v2 - 1] )
        break;
      --v2;
    }
    while ( v2 );
    v3 = MEMORY[0xFFFFF78000000008];
    result = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8LL * (unsigned int)(v2 - 1) + 24) += result;
    *(_QWORD *)(a1 + 8) = v3;
  }
  return result;
}
