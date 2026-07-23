/*
 * XREFs of sub_14096F470 @ 0x14096F470
 * Callers:
 *     <none>
 * Callees:
 *     sub_14023FCF0 @ 0x14023FCF0 (sub_14023FCF0.c)
 *     sub_14023FF18 @ 0x14023FF18 (sub_14023FF18.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_14045C6C8 @ 0x14045C6C8 (sub_14045C6C8.c)
 *     sub_14045C6DE @ 0x14045C6DE (sub_14045C6DE.c)
 */

void __fastcall sub_14096F470(__int64 a1)
{
  __int16 v1; // r15
  int v2; // ebp
  _DWORD *v4; // r12
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r13
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  char v9; // r15
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // al
  char v12; // r15
  __int64 v13; // rcx
  unsigned __int8 v14; // [rsp+70h] [rbp+8h]
  __int16 v15; // [rsp+78h] [rbp+10h]
  int v16; // [rsp+80h] [rbp+18h]
  _DWORD *v17; // [rsp+88h] [rbp+20h]

  v1 = *(_WORD *)a1;
  v15 = *(_WORD *)a1;
  v2 = 0;
  v16 = 0;
  v4 = (_DWORD *)sub_14023FF18(a1, 0);
  v17 = v4;
  do
  {
    v5 = 48LL * *(_QWORD *)&v4[4 * v2 + 4] - 0x220000000000LL;
    v6 = v5 + 48LL * *(_QWORD *)&v4[4 * v2 + 6];
    if ( v5 < v6 )
    {
      v7 = v5 + 16;
      do
      {
        v8 = *(_QWORD *)(v7 + 24);
        if ( ((v8 >> 43) & 0x3FF) == v1 )
        {
          v9 = *(_BYTE *)(v7 + 18);
          if ( (((v9 & 7) - 2) & 0xFA) == 0
            && (v9 & 7) != 6
            && (*(_DWORD *)v7 & 0x400LL) == 0
            && (unsigned int)sub_1402E76C0(v7)
            && (v8 & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
            && *(_WORD *)(v7 + 16)
            && (v9 & 0x28) == 0
            && (*(_BYTE *)(v7 + 19) & 0x10) == 0 )
          {
            v10 = 0LL;
            v11 = sub_14045C6C8(v5);
            v12 = *(_BYTE *)(v7 + 18);
            v14 = v11;
            if ( (((v12 & 7) - 2) & 0xFA) == 0
              && (v12 & 7) != 6
              && (*(_DWORD *)v7 & 0x400LL) == 0
              && (unsigned int)sub_1402E76C0(v7)
              && (*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
              && *(_WORD *)(v7 + 16)
              && ((unsigned __int8)~(*(_BYTE *)(v7 + 19) >> 4) & ((v12 & 0x28) == 0)) != 0 )
            {
              v10 = sub_14033C2A0(v5);
            }
            sub_14045C6DE(v5, v14);
            if ( v10 )
              sub_1402E20D0(a1, v10, 0);
          }
          v1 = v15;
        }
        v5 += 48LL;
        v7 += 48LL;
      }
      while ( v5 < v6 );
      v2 = v16;
      v4 = v17;
    }
    v16 = ++v2;
  }
  while ( v2 != *v4 );
  sub_14023FCF0((__int64)v4);
  v13 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 1008) = 0LL;
  sub_1403606C4(v13);
}
