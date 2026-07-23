/*
 * XREFs of sub_140213398 @ 0x140213398
 * Callers:
 *     sub_14065FFA0 @ 0x14065FFA0 (sub_14065FFA0.c)
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_14096D3A4 @ 0x14096D3A4 (sub_14096D3A4.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140213558 @ 0x140213558 (sub_140213558.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 */

__int64 __fastcall sub_140213398(unsigned __int64 a1, __int64 a2, _QWORD *a3, int a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v9; // rdx
  unsigned __int64 v10; // r15
  unsigned int v11; // ebp
  int v12; // ebx
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  int v15; // r9d
  char v16; // r12
  unsigned int v17; // r14d
  __int64 v18; // rdx
  char v20; // al
  __int64 v21; // rdx
  __int64 v23; // [rsp+68h] [rbp+10h]

  v9 = *((_QWORD *)KeGetCurrentThread() + 23);
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((a7 >> 31) & 0xFFFFFFFD) + 4;
  if ( a4 )
  {
    if ( a4 == 2 )
      v11 |= 0x18u;
  }
  else
  {
    v11 |= 8u;
  }
  v12 = a6;
  v13 = v9 + 1664;
  if ( a6 )
  {
    sub_14030E390(a6, v9, 0LL);
    v12 = (*(_DWORD *)(a6 + 48) >> 12) & 0x7F;
  }
  v14 = 0LL;
  v16 = sub_1402CF4F0(v13);
  v23 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v17 = v11;
    if ( a3 )
    {
      v17 = (*(_DWORD *)(48LL * *a3 - 0x220000000000LL + 16) >> 5) & 7;
      v20 = *(_BYTE *)(48LL * *a3 - 0x220000000000LL + 34) >> 6;
      if ( v20 == 2 )
      {
        v17 |= 0x18u;
      }
      else if ( !v20 )
      {
        v17 |= 8u;
      }
      ++a3;
    }
    if ( v14 )
    {
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_9;
      sub_14020D8D0(v13, v14);
    }
    v14 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    LOBYTE(v15) = v16;
    sub_14032CE60(v10, 0, v12, v15, 0);
LABEL_9:
    sub_140213558(v10, *(_QWORD *)(v23 + v10), v17);
    v10 += 8LL;
    if ( (v10 & 0x78) == 0
      && ((unsigned int)sub_1403531F0(v13) || (unsigned int)sub_140274C80(v13, v14) || KeShouldYieldProcessor()) )
    {
      sub_14020D8D0(v13, v14);
      LOBYTE(v21) = v16;
      sub_1402B0CE0(v13, v21);
      v14 = 0LL;
      sub_1402CF4F0(v13);
    }
    --a5;
  }
  while ( a5 );
  if ( v14 )
    sub_14020D8D0(v13, v14);
  LOBYTE(v18) = v16;
  return sub_1402B0CE0(v13, v18);
}
