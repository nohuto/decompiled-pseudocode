/*
 * XREFs of sub_1405ED624 @ 0x1405ED624
 * Callers:
 *     sub_1409BDBFC @ 0x1409BDBFC (sub_1409BDBFC.c)
 * Callees:
 *     sub_1405ED0E8 @ 0x1405ED0E8 (sub_1405ED0E8.c)
 *     sub_1409BD2DC @ 0x1409BD2DC (sub_1409BD2DC.c)
 */

int __fastcall sub_1405ED624(__int64 a1, int a2, char a3, char a4)
{
  unsigned int v8; // eax

  v8 = sub_1409BD2DC(*(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 88));
  *(_WORD *)(*(_QWORD *)(a1 + 80) - 2LL) = a2;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 88) = a2;
  *(_BYTE *)(a1 + 92) = a3;
  *(_BYTE *)(a1 + 93) = a4;
  if ( v8 )
    return sub_1405ED0E8((_QWORD *)a1, v8);
  else
    return 1;
}
