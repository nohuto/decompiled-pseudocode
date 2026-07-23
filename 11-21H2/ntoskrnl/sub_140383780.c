/*
 * XREFs of sub_140383780 @ 0x140383780
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140383780(__int64 a1, __int64 a2, __int64 a3, volatile signed __int32 *a4)
{
  volatile signed __int32 *v4; // rdi
  volatile signed __int32 *v5; // rsi
  __int64 v6; // r14
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r10
  __int64 v10; // rax
  signed __int32 v11; // ebp
  unsigned int v12; // ebx
  __int64 result; // rax
  _QWORD *i; // rax
  int v15; // [rsp+58h] [rbp+10h] BYREF
  int j; // [rsp+68h] [rbp+20h] BYREF

  v4 = a4;
  v5 = (volatile signed __int32 *)a3;
  v6 = a2;
  v7 = _InterlockedDecrement(a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v15 = 0;
    while ( (*v4 & 0x80000000) != v8 )
      sub_1402F32E0(&v15, a2, a3, (__int64)a4);
  }
  else
  {
    *a4 = v8 | *((_DWORD *)a4 + 1);
    memmove(*(void **)a2, qword_140C117A0, 80LL * *(_QWORD *)(a2 + 8));
    a4 = (volatile signed __int32 *)&unk_140C117A8;
    v9 = 2047LL;
    a3 = *(_QWORD *)v6 + 80LL * *(_QWORD *)(v6 + 8);
    do
    {
      a2 = *(_QWORD *)a4;
      if ( *(_QWORD *)a4 )
      {
        for ( i = *(_QWORD **)v6; i != (_QWORD *)a3; a2 += 80LL )
        {
          if ( *(_DWORD *)a2 )
          {
            i[2] += *(_QWORD *)(a2 + 16);
            i[3] += *(_QWORD *)(a2 + 24);
            i[1] += *(_QWORD *)(a2 + 8);
            i[5] += *(_QWORD *)(a2 + 40);
            i[6] += *(_QWORD *)(a2 + 48);
            i[4] += *(_QWORD *)(a2 + 32);
          }
          i += 10;
        }
      }
      a4 += 2;
      --v9;
    }
    while ( v9 );
    v10 = *(_QWORD *)(v6 + 24);
    if ( v10 )
      memmove(*(void **)(v6 + 16), qword_140C157A8, 80 * v10);
  }
  v11 = _InterlockedDecrement(v4);
  v12 = ~v11 & 0x80000000;
  if ( (v11 & 0x7FFFFFFF) != 0 )
  {
    for ( j = 0; ; sub_1402F32E0(&j, a2, a3, (__int64)a4) )
    {
      result = *v4 & 0x80000000;
      if ( (_DWORD)result == v12 )
        break;
    }
  }
  else
  {
    result = v12 | *((_DWORD *)v4 + 1);
    *v4 = result;
  }
  _InterlockedDecrement(v5);
  return result;
}
