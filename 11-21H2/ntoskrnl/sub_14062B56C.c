/*
 * XREFs of sub_14062B56C @ 0x14062B56C
 * Callers:
 *     sub_140629D0C @ 0x140629D0C (sub_140629D0C.c)
 *     sub_14062A30C @ 0x14062A30C (sub_14062A30C.c)
 * Callees:
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_14045F736 @ 0x14045F736 (sub_14045F736.c)
 *     sub_14062A9C0 @ 0x14062A9C0 (sub_14062A9C0.c)
 */

__int64 __fastcall sub_14062B56C(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 result; // rax
  unsigned __int64 v12; // rdi
  int v13; // r14d

  if ( qword_140C18EA0 && *(_DWORD *)qword_140C18EA0 && sub_1402A2000(qword_140C18EA0, 2LL) )
    sub_14062A9C0(v7, v8);
  v9 = a4;
  v10 = ((a2 + 511) & 0xFFFFFFFFFFFFFE00uLL) - a2;
  result = v10 + 512;
  if ( a4 < v10 + 512 )
  {
    LODWORD(v10) = 0;
    v13 = 0;
  }
  else
  {
    v9 = ((_WORD)a4 - (_WORD)v10) & 0x1FF;
    v12 = a4 - v9 - v10;
    v13 = v12;
    if ( v10 )
      result = sub_14045F736(*(_QWORD *)(a1 + 72), a2, ((a2 + 511) & 0xFFFFFFFFFFFFFE00uLL) - a2, 0);
    if ( v12 )
      result = sub_14045F736(*(_QWORD *)(a1 + 72), (a2 + 511) & 0xFFFFFE00, v12 >> 9, 1);
  }
  if ( v9 )
    return sub_14045F736(*(_QWORD *)(a1 + 72), (int)a2 + (int)v10 + v13, v9, 0);
  return result;
}
