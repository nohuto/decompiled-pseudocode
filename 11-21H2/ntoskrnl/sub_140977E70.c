/*
 * XREFs of sub_140977E70 @ 0x140977E70
 * Callers:
 *     sub_140709E04 @ 0x140709E04 (sub_140709E04.c)
 * Callees:
 *     sub_1403199E0 @ 0x1403199E0 (sub_1403199E0.c)
 *     sub_140709F54 @ 0x140709F54 (sub_140709F54.c)
 */

__int64 __fastcall sub_140977E70(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1[1];
  v10 = 0LL;
  v4 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL);
  if ( a2 > 8 * (v3 - qword_140C51BE8) )
    return 0LL;
  v5 = (a2 >> 6) + ((a2 & 0x3F) != 0);
  v6 = ((8 * v5) >> 12) + (((8 * v5) & 0xFFF) != 0);
  v7 = (_QWORD *)(v3 - (v6 << 12));
  if ( (int)sub_1403199E0((unsigned __int64)v7, v3 - 1, &v10) < 0 )
    return 0LL;
  *(_QWORD *)(v4 + 272) += v10;
  *a1 += v6 << 15;
  a1[1] = v7;
  if ( v7 == (_QWORD *)qword_140C51BE8 )
  {
    *v7 |= 1uLL;
    v7 = (_QWORD *)a1[1];
    v8 = 1LL;
  }
  else
  {
    v8 = 0LL;
  }
  a1[2] = v8;
  a1[4] = v8;
  a1[3] = 0LL;
  sub_140709F54(((_QWORD)v7 - qword_140C51BE8) << 19, (((_QWORD)v7 - qword_140C51BE8) << 19) + (v6 << 31));
  return 1LL;
}
