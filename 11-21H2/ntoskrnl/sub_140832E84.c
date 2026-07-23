/*
 * XREFs of sub_140832E84 @ 0x140832E84
 * Callers:
 *     sub_140832DF0 @ 0x140832DF0 (sub_140832DF0.c)
 *     sub_140922C5C @ 0x140922C5C (sub_140922C5C.c)
 *     sub_140923590 @ 0x140923590 (sub_140923590.c)
 *     sub_140923720 @ 0x140923720 (sub_140923720.c)
 * Callees:
 *     sub_140247B20 @ 0x140247B20 (sub_140247B20.c)
 *     sub_1403C78DC @ 0x1403C78DC (sub_1403C78DC.c)
 *     sub_1403C7984 @ 0x1403C7984 (sub_1403C7984.c)
 *     sub_14053FF38 @ 0x14053FF38 (sub_14053FF38.c)
 *     sub_1408331DC @ 0x1408331DC (sub_1408331DC.c)
 *     sub_1409BF008 @ 0x1409BF008 (sub_1409BF008.c)
 */

__int64 __fastcall sub_140832E84(__int64 a1, char a2)
{
  __int64 v2; // r13
  _QWORD *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r12
  _DWORD *v6; // rsi
  int v7; // r15d
  __int64 v8; // rax
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // edi
  unsigned int v12; // r14d
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+60h] BYREF

  v22 = 0LL;
  v2 = a1;
  v3 = (_QWORD *)(a1 + 304);
  v4 = *v3 & 1LL;
  sub_1408331DC(v3, ((_BYTE)v4 - 1) & 1);
  sub_1403C7984(v2 + 112, (__int64)&v21, &v22);
  v5 = v22;
  v6 = *(_DWORD **)(v2 + 8 * v4 + 344);
  v21 = 0;
  *(_QWORD *)&v18 = 64LL;
  v7 = 0;
  v8 = *(_QWORD *)(v22 + 64);
  *(_QWORD *)((char *)&v18 + 4) = 0LL;
  v16 = v8;
  v17 = *(_QWORD *)(v22 + 56);
  *((_QWORD *)&v18 + 1) = v6 + 2;
  v9 = sub_140247B20((__int64)&v18, 0, &v21);
  if ( v9 )
  {
    do
    {
      v11 = v21;
      v12 = v21 + v9;
      if ( v21 < v21 + v9 )
      {
        v13 = 3LL * v21;
        do
        {
          if ( !v6[v13 + 4] || a2 )
          {
            v14 = sub_1409BF008(&v6[v13 + 5], v17, v16);
            v15 = v6[v13 + 4] + 1;
            v6[v13 + 4] = v15;
            if ( v14 >= 0 || v14 == -1073741275 || v15 < 5 )
            {
              *(_QWORD *)&v6[v13 + 4] = 0LL;
              v6[v13 + 6] = 0;
              _bittestandreset(v6 + 2, v11);
              --*v6;
            }
            else
            {
              ++v7;
            }
          }
          ++v11;
          v13 += 3LL;
        }
        while ( v11 < v12 );
      }
      v9 = sub_140247B20((__int64)&v18, v12, &v21);
    }
    while ( v9 );
    v2 = a1;
    v5 = v22;
  }
  result = sub_1403C78DC(v2 + 112, v5);
  if ( v7 )
    return sub_14053FF38(v2);
  return result;
}
