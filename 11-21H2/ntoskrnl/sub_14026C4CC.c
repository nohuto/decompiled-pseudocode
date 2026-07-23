/*
 * XREFs of sub_14026C4CC @ 0x14026C4CC
 * Callers:
 *     StartRoutine @ 0x14026C240 (StartRoutine.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140424F50 @ 0x140424F50 (sub_140424F50.c)
 */

char __fastcall sub_14026C4CC(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // rcx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rsi
  int v9; // eax
  int v10; // r8d
  __int64 v11; // rbx
  int v12; // edi
  int CurrentThread; // eax
  int v14; // edi
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdi
  int v19; // r13d
  bool v20; // zf
  bool v21; // zf
  unsigned __int64 v22; // rdi
  int v23; // ebp
  __int64 v25; // [rsp+60h] [rbp+8h]
  unsigned __int64 v26; // [rsp+70h] [rbp+18h]

  v4 = 3;
  if ( _bittest64((const signed __int64 *)(a2 + 40), 0x28u) )
  {
    v15 = sub_140235E10(a2);
    v4 = v15;
    if ( v15 == -1 )
    {
      v4 = 3;
    }
    else if ( v15 < 3 )
    {
      v6 = v15;
      v5 = qword_14001C780[v15];
      v25 = v5;
      goto LABEL_3;
    }
  }
  v5 = 1LL;
  v25 = 1LL;
  v6 = v4;
LABEL_3:
  v26 = sub_1402C6260(a1 + 32 * v6, v4, v5, 0LL);
  v7 = v26;
  v8 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v4 <= 1 )
  {
    v16 = 2 - v4;
    do
    {
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v16;
    }
    while ( v16 );
  }
  v9 = sub_14026C61C(4LL, a2);
  v10 = -1543503872;
  if ( v4 > 1 )
    v10 = -1610612736;
  v11 = sub_1402CBD10(v8, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4), v9 | (unsigned int)v10);
  if ( v4 != 2 )
  {
    v12 = 0;
    if ( !(unsigned int)sub_140317A80(v8) )
      goto LABEL_8;
    if ( (unsigned int)sub_140229550() )
    {
      v12 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v21 = (v11 & 1) == 0;
        goto LABEL_41;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      v21 = (v11 & 1) == 0;
LABEL_41:
      if ( !v21 )
        v11 |= 0x8000000000000000uLL;
    }
LABEL_8:
    *(_QWORD *)v8 = v11;
    if ( v12 )
      sub_1402294F0(v8, v11);
    goto LABEL_10;
  }
  if ( v8 >= v8 + 128 )
    goto LABEL_35;
  v17 = v8 + 128;
  do
  {
    v18 = v11;
    v19 = 0;
    if ( !(unsigned int)sub_140317A80(v8) )
      goto LABEL_31;
    if ( (unsigned int)sub_140229550() )
    {
      v19 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_31;
      v20 = (v11 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_31;
      v20 = (v11 & 1) == 0;
    }
    if ( !v20 )
      v18 = v11 | 0x8000000000000000uLL;
LABEL_31:
    *(_QWORD *)v8 = v18;
    if ( v19 )
      sub_1402294F0(v8, v18);
    v8 += 8LL;
    v11 ^= (v11 ^ (v11 + 4096)) & 0xFFFFFFFFFF000LL;
  }
  while ( v8 < v17 );
  v5 = v25;
  v7 = v26;
LABEL_35:
  v8 -= 128LL;
LABEL_10:
  LOBYTE(CurrentThread) = sub_140424F50(v7, v5 << 12);
  if ( v4 == 2 )
  {
    v22 = v8 + 128;
    while ( v8 < v22 )
    {
      v23 = 0;
      CurrentThread = sub_140317A80(v8);
      if ( CurrentThread )
      {
        CurrentThread = sub_140229550();
        if ( CurrentThread )
          v23 = 1;
        else
          CurrentThread = (unsigned __int8)KeGetCurrentThread();
      }
      *(_QWORD *)v8 = 0LL;
      if ( v23 )
        LOBYTE(CurrentThread) = sub_1402294F0(v8, 0LL);
      v8 += 8LL;
    }
  }
  else
  {
    v14 = 0;
    CurrentThread = sub_140317A80(v8);
    if ( CurrentThread )
    {
      CurrentThread = sub_140229550();
      if ( CurrentThread )
        v14 = 1;
      else
        CurrentThread = (unsigned __int8)KeGetCurrentThread();
    }
    *(_QWORD *)v8 = 0LL;
    if ( v14 )
      LOBYTE(CurrentThread) = sub_1402294F0(v8, 0LL);
  }
  return CurrentThread;
}
