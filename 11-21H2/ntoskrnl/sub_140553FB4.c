/*
 * XREFs of sub_140553FB4 @ 0x140553FB4
 * Callers:
 *     sub_14055225C @ 0x14055225C (sub_14055225C.c)
 * Callees:
 *     sub_1403D9A34 @ 0x1403D9A34 (sub_1403D9A34.c)
 *     sub_140554800 @ 0x140554800 (sub_140554800.c)
 *     sub_140554878 @ 0x140554878 (sub_140554878.c)
 */

__int64 __fastcall sub_140553FB4(
        unsigned int a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v10; // rbx
  int v11; // eax
  unsigned __int16 v12; // cx
  char *v13; // rbx
  unsigned __int64 v14; // r9
  __int64 result; // rax

  v10 = (unsigned int)sub_140554878(*(_QWORD *)(a4 + 248));
  v11 = sub_140554800(*(_QWORD *)(a4 + 248), 256LL);
  sub_1403D9A34(a1, a2, a3, *(_QWORD *)(a4 + 248) - v10, v11 + v10);
  v12 = 144;
  v13 = &byte_140015000;
  do
  {
    v14 = *(_QWORD *)(v12 + a4);
    if ( v14 < a5 || v14 >= a6 )
      sub_1403D9A34(a1, a2, a3, v14 & 0xFFFFFFFFFFFFF000uLL, 0x1000u);
    v13 += 2;
    result = *(unsigned __int16 *)v13;
    v12 = result;
  }
  while ( (_WORD)result != 0xFFFF );
  return result;
}
