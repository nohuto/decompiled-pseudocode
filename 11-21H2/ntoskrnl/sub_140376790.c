/*
 * XREFs of sub_140376790 @ 0x140376790
 * Callers:
 *     sub_1402053E4 @ 0x1402053E4 (sub_1402053E4.c)
 *     sub_14064A2A8 @ 0x14064A2A8 (sub_14064A2A8.c)
 * Callees:
 *     sub_140204AE4 @ 0x140204AE4 (sub_140204AE4.c)
 *     sub_14028AC10 @ 0x14028AC10 (sub_14028AC10.c)
 */

__int64 __fastcall sub_140376790(__int64 a1)
{
  __int64 v2; // r11
  __int64 i; // rdx
  int v4; // eax
  __int64 result; // rax

  sub_14028AC10(a1, 1);
  v2 = a1 + 72;
  for ( i = *(_QWORD *)(a1 + 72); i != v2; i = *(_QWORD *)i )
  {
    v4 = *(_DWORD *)(i + 32);
    if ( (v4 & 2) == 0 )
    {
      *(_DWORD *)(i + 32) = v4 | 4;
      sub_140204AE4(a1, i, 0, 1);
    }
  }
  result = *(unsigned int *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = result;
  return result;
}
