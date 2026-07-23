/*
 * XREFs of sub_140573D78 @ 0x140573D78
 * Callers:
 *     sub_140308640 @ 0x140308640 (sub_140308640.c)
 *     sub_1405740C4 @ 0x1405740C4 (sub_1405740C4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140573D78(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 v3; // r9
  unsigned int v4; // eax

  v3 = *(_QWORD *)(a1 + 34128);
  v4 = a2 - 3;
  if ( v3 )
  {
    if ( v4 <= 1 )
      return *(_BYTE *)(v3 + 4LL * a3 + 5);
    else
      return *(_BYTE *)(v3 + 4LL * a3 + 4);
  }
  else if ( v4 <= 1 )
  {
    return *(_BYTE *)(a1 + 34058);
  }
  else
  {
    return *(_BYTE *)(a1 + 34057);
  }
}
