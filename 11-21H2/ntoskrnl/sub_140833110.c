/*
 * XREFs of sub_140833110 @ 0x140833110
 * Callers:
 *     sub_140922DB4 @ 0x140922DB4 (sub_140922DB4.c)
 *     sub_14092317C @ 0x14092317C (sub_14092317C.c)
 *     sub_140B154A4 @ 0x140B154A4 (sub_140B154A4.c)
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 * Callees:
 *     sub_14025E808 @ 0x14025E808 (sub_14025E808.c)
 *     sub_1408331DC @ 0x1408331DC (sub_1408331DC.c)
 */

void *__fastcall sub_140833110(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r9
  _QWORD *v9; // rsi
  char *v10; // rax
  char *v11; // rcx

  v4 = *a1 & 1LL;
  v6 = (unsigned int)v4;
  v7 = 3LL;
  v8 = ((_BYTE)v4 - 1) & 1;
  v9 = &a1[9 * v4];
  v10 = (char *)v9 - a3 + 24;
  v11 = (char *)&a1[8 * v8 + 3 + v8] - a3;
  do
  {
    if ( *(_QWORD *)a3 )
    {
      *(_OWORD *)&v11[a3] = *(_OWORD *)a3;
      *(_QWORD *)&v11[a3 + 16] = *(_QWORD *)(a3 + 16);
      *(_OWORD *)a3 = *(_OWORD *)&v10[a3];
      *(_QWORD *)(a3 + 16) = *(_QWORD *)&v10[a3 + 16];
    }
    else
    {
      *(_OWORD *)&v11[a3] = *(_OWORD *)&v10[a3];
      *(_QWORD *)&v11[a3 + 16] = *(_QWORD *)&v10[a3 + 16];
    }
    a3 += 24LL;
    --v7;
  }
  while ( v7 );
  a1[v8 + 21] = a2;
  sub_1408331DC(a1, (unsigned int)v8);
  a1[v6 + 21] = 0LL;
  return sub_14025E808(v9 + 3);
}
