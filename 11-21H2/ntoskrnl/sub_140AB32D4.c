/*
 * XREFs of sub_140AB32D4 @ 0x140AB32D4
 * Callers:
 *     sub_140AB2254 @ 0x140AB2254 (sub_140AB2254.c)
 *     sub_140AB23B0 @ 0x140AB23B0 (sub_140AB23B0.c)
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 *     sub_140AB304C @ 0x140AB304C (sub_140AB304C.c)
 *     sub_140AB315C @ 0x140AB315C (sub_140AB315C.c)
 *     sub_140AB378C @ 0x140AB378C (sub_140AB378C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AB32D4(__int64 a1, __int64 a2, unsigned int a3, char a4, char a5)
{
  unsigned int v5; // eax
  char v6; // r8
  __int64 v7; // rdx
  __int64 result; // rax

  v5 = a3 + 8;
  if ( !a4 )
    v5 = a3;
  v6 = v5;
  if ( !a5 || *(_BYTE *)(a1 + 25) || *(_BYTE *)(a1 + 1) != 8 )
    return *(_QWORD *)(a2 + 8) + 8LL * v5 + 120;
  v7 = *(_QWORD *)(a2 + 8) + 120LL + 8LL * (v5 & 3);
  result = v7 + 1;
  if ( (v6 & 4) == 0 )
    return v7;
  return result;
}
