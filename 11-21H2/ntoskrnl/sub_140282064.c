/*
 * XREFs of sub_140282064 @ 0x140282064
 * Callers:
 *     sub_140282C5C @ 0x140282C5C (sub_140282C5C.c)
 *     sub_1402858A0 @ 0x1402858A0 (sub_1402858A0.c)
 *     sub_14053B55C @ 0x14053B55C (sub_14053B55C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140282064(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // r11
  int v4; // r9d
  int v5; // r10d
  __int64 result; // rax
  __int64 v7; // rdx

  v2 = 0;
  v3 = a2;
  v4 = 25;
  do
  {
    v5 = v4;
    v4 += 7;
    ++v2;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v4 );
  for ( result = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * (a2 >> v5));
        result && v2;
        result = *(_QWORD *)(result + 8 * (v3 >> v5)) )
  {
    v7 = 1LL << v5;
    v5 -= 7;
    --v2;
    v3 &= v7 - 1;
  }
  return result;
}
