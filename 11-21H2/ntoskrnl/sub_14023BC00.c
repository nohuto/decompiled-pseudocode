/*
 * XREFs of sub_14023BC00 @ 0x14023BC00
 * Callers:
 *     sub_14023BABC @ 0x14023BABC (sub_14023BABC.c)
 *     sub_14023BB5C @ 0x14023BB5C (sub_14023BB5C.c)
 *     sub_1405D9370 @ 0x1405D9370 (sub_1405D9370.c)
 *     sub_1405D9440 @ 0x1405D9440 (sub_1405D9440.c)
 *     sub_1405DAC04 @ 0x1405DAC04 (sub_1405DAC04.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14023BC00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 64) )
  {
    a3 = a2;
    *(_WORD *)a4 = *(unsigned __int8 *)(a1 - 33760);
    *(_BYTE *)(a4 + 2) = *(_BYTE *)(a1 - 33759);
    v6 = 3;
  }
  else
  {
    v6 = 4;
    *(_DWORD *)a4 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
  }
  *(_QWORD *)a5 = a4;
  *(_DWORD *)(a5 + 8) = v6;
  result = a3;
  *(_DWORD *)(a5 + 12) = 0;
  return result;
}
