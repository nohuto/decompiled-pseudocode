/*
 * XREFs of sub_14059A460 @ 0x14059A460
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 */

__int64 __fastcall sub_14059A460(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  volatile signed __int32 *v6; // rsi
  signed __int32 v7; // eax
  unsigned int v8; // edi
  __int64 *v9; // rcx
  __int64 v10; // rax
  signed __int32 v11; // eax
  unsigned int v12; // edi
  __int64 result; // rax
  __int64 v14; // rax
  __int64 *v15; // rcx
  int v16; // [rsp+48h] [rbp+10h] BYREF
  int i; // [rsp+58h] [rbp+20h] BYREF

  v4 = *(_QWORD *)a2;
  v6 = (volatile signed __int32 *)a3;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v16 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      sub_1402F32E0(&v16, a2, a3, a4);
    goto LABEL_5;
  }
  *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
  if ( *(_DWORD *)(a2 + 16) )
  {
    v9 = (__int64 *)(v4 + 72);
    v10 = *(_QWORD *)(a2 + 8) + 16640LL;
    a2 = *(_QWORD *)v10;
    if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) == v10 )
    {
      *v9 = a2;
      v9[1] = v10;
      *(_QWORD *)(a2 + 8) = v9;
      *(_QWORD *)v10 = v9;
      goto LABEL_5;
    }
LABEL_11:
    __fastfail(3u);
  }
  v14 = *(_QWORD *)a2 + 72LL;
  a3 = *(_QWORD *)v14;
  if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 )
    goto LABEL_11;
  v15 = *(__int64 **)(*(_QWORD *)a2 + 80LL);
  if ( *v15 != v14 )
    goto LABEL_11;
  *v15 = a3;
  *(_QWORD *)(a3 + 8) = v15;
  *(_QWORD *)(*(_QWORD *)a2 + 72LL) = 0LL;
LABEL_5:
  v11 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v12 = ~v11 & 0x80000000;
  if ( (v11 & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; sub_1402F32E0(&i, a2, a3, a4) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v12 )
        break;
    }
  }
  else
  {
    result = v12 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(v6);
  return result;
}
