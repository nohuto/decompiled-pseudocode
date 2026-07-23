/*
 * XREFs of sub_1402446B4 @ 0x1402446B4
 * Callers:
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 * Callees:
 *     sub_140268A70 @ 0x140268A70 (sub_140268A70.c)
 */

void __fastcall sub_1402446B4(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9

  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 8 * ((unsigned __int64)*(unsigned int *)(v3 + 40) >> 12) + 48) = a2;
    *(_DWORD *)(v3 + 40) += 4096;
    if ( a3 || (unsigned int)sub_140268A70(48 * a2 - 0x220000000000LL, *(unsigned int *)(a1 + 32)) )
      *(_QWORD *)(v3 + 24) = 1LL;
  }
}
