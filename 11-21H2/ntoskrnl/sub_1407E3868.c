/*
 * XREFs of sub_1407E3868 @ 0x1407E3868
 * Callers:
 *     sub_1407E3070 @ 0x1407E3070 (sub_1407E3070.c)
 * Callees:
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     sub_140A0EB90 @ 0x140A0EB90 (sub_140A0EB90.c)
 */

__int64 __fastcall sub_1407E3868(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ecx
  __int16 v7; // ax

  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( *(_QWORD *)(v4 + 1408) && ((v7 = *(_WORD *)(v4 + 2412), v7 == 332) || v7 == 452) )
  {
    return (unsigned int)sub_140A0EB90(a1);
  }
  else
  {
    *(_DWORD *)(a1 + 96) = 1048577;
    v5 = sub_1407045D0((__int64)KeGetCurrentThread(), a1 + 48, 0, 1, 1);
    if ( v5 >= 0 )
    {
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 296);
      *(_QWORD *)a2 = *(_QWORD *)(a1 + 200);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 116);
    }
  }
  return (unsigned int)v5;
}
