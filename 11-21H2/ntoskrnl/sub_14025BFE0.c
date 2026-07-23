/*
 * XREFs of sub_14025BFE0 @ 0x14025BFE0
 * Callers:
 *     sub_14025BDC8 @ 0x14025BDC8 (sub_14025BDC8.c)
 *     sub_1403D3CA0 @ 0x1403D3CA0 (sub_1403D3CA0.c)
 *     sub_14081DB50 @ 0x14081DB50 (sub_14081DB50.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 */

__int64 __fastcall sub_14025BFE0(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = a1;
  a1[3] = dword_140C50738 & sub_140363220(1LL, a2) | ((_DWORD)a2 << byte_140C506CC);
  v4 = 3LL;
  do
  {
    result = sub_140363220(1LL, v3);
    *v2++ = result;
    --v4;
  }
  while ( v4 );
  return result;
}
