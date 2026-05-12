/*
 * XREFs of sub_1C0013774 @ 0x1C0013774
 * Callers:
 *     sub_1C0013554 @ 0x1C0013554 (sub_1C0013554.c)
 *     sub_1C00135CC @ 0x1C00135CC (sub_1C00135CC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C0013774(__int64 a1, _BYTE *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  char result; // al

  if ( a2[1] != 0x83 )
    return 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = (unsigned __int8)a2[3];
  *(_QWORD *)a1 = a2;
  v4 = (v3 | ((unsigned __int8)a2[2] << 8)) + 4;
  if ( v4 > 0xFFFF )
    v4 = 0xFFFF;
  result = 1;
  *(_DWORD *)(a1 + 16) = v4;
  return result;
}
