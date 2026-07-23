/*
 * XREFs of sub_1403D3080 @ 0x1403D3080
 * Callers:
 *     sub_1403D2D98 @ 0x1403D2D98 (sub_1403D2D98.c)
 *     sub_140572774 @ 0x140572774 (sub_140572774.c)
 * Callees:
 *     sub_1403D30D0 @ 0x1403D30D0 (sub_1403D30D0.c)
 */

__int64 __fastcall sub_1403D3080(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx
  __int64 result; // rax

  *a2 = 0LL;
  v2 = (_QWORD *)(a1 + 48);
  for ( i = *(_QWORD **)(a1 + 48); i != v2; i = (_QWORD *)*i )
    result = sub_1403D30D0(i - 95, a2);
  return result;
}
