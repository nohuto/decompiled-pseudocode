/*
 * XREFs of sub_1406CAF3C @ 0x1406CAF3C
 * Callers:
 *     sub_1406FF49C @ 0x1406FF49C (sub_1406FF49C.c)
 * Callees:
 *     sub_14024A818 @ 0x14024A818 (sub_14024A818.c)
 *     sub_1402DC0E8 @ 0x1402DC0E8 (sub_1402DC0E8.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 */

__int64 __fastcall sub_1406CAF3C(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r10
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 i; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // rax

  v4 = *a1;
  v5 = a3;
  v7 = *(_QWORD *)(a1[12] + 32LL);
  v8 = a2 - *(_QWORD *)(*a1 + 32LL);
  v9 = *(_QWORD *)(v7 + 40);
  *(_QWORD *)(v7 + 40) = v8;
  *(_QWORD *)(v4 + 32) = a2;
  **(_QWORD **)(v4 + 56) += *(_QWORD *)(v7 + 40);
  for ( i = *(_QWORD *)(v7 + 16); i; i = *v13 )
    sub_14024A818((__int64)a1, (_QWORD *)(i + 24), v9);
  sub_140336B30((ULONG_PTR)a1, v5, 2u, a4);
  *(_QWORD *)(v7 + 40) = v8 + v9;
  result = *(_QWORD *)(v7 + 16);
  if ( result )
  {
    v14 = -v9;
    do
    {
      sub_14024A818(v11, (_QWORD *)(result + 24), v14);
      result = *v15;
    }
    while ( result );
  }
  if ( _bittest16((const signed __int16 *)(v4 + 12), 0xDu) )
  {
    sub_1402DC0E8(
      (PCUNICODE_STRING)((a1[8] & 0xFFFFFFFFFFFFFFF0uLL) + 88),
      *(_QWORD *)(v4 + 32),
      *((_QWORD *)KeGetCurrentThread() + 23));
    result = 57343LL;
    *(_WORD *)(v4 + 12) &= ~0x2000u;
  }
  return result;
}
