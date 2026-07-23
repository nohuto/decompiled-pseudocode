/*
 * XREFs of sub_1407F95AC @ 0x1407F95AC
 * Callers:
 *     sub_1407F8FE0 @ 0x1407F8FE0 (sub_1407F8FE0.c)
 * Callees:
 *     sub_140266B40 @ 0x140266B40 (sub_140266B40.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140378C5C @ 0x140378C5C (sub_140378C5C.c)
 */

PVOID __fastcall sub_1407F95AC(__int64 *a1, char a2, SIZE_T *a3)
{
  _QWORD *v3; // rbp
  __int64 v5; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  SIZE_T v15; // rbx
  PVOID result; // rax
  _QWORD *v17; // rax
  __int64 v18; // r8

  v3 = (_QWORD *)*a1;
  v5 = *(_QWORD *)(*a1 + 15808);
  v7 = *a3 / 0x28;
  v8 = sub_140378C5C(*a1);
  v9 = v5 + v8;
  if ( v5 + v8 < v8 )
    v9 = -1LL;
  if ( (a2 & 1) != 0 )
  {
    v9 = 0LL;
    if ( word_140D05000 )
    {
      v17 = &unk_140C51F50;
      v18 = (unsigned __int16)word_140D05000;
      do
      {
        v9 += *v17++;
        --v18;
      }
      while ( v18 );
    }
  }
  if ( v9 <= v7 )
    v7 = v9;
  v10 = v3[2120] - 1024LL;
  if ( v10 <= 0 )
    return 0LL;
  v11 = v3[2187];
  if ( (40 * v7 + 4095) >> 12 <= v10 )
    v10 = (40 * v7 + 4095) >> 12;
  v12 = v3[2157];
  if ( v12 >= v11 )
    return 0LL;
  v13 = v11 - v12;
  if ( v10 <= v13 )
    v13 = v10;
  v14 = sub_140266B40(v3, 2u);
  if ( v13 > v14 )
    v13 = v14;
  v15 = v13 << 12;
  if ( v15 < 0x200000 )
    v15 = 0x200000LL;
  while ( 1 )
  {
    result = sub_1402828F0(64, v15, 0x6D75534Du);
    if ( result )
      break;
    v15 >>= 1;
    if ( v15 < 0x10000 )
      return result;
  }
  *a3 = v15;
  return result;
}
