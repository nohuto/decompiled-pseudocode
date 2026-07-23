/*
 * XREFs of sub_140591A10 @ 0x140591A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140591814 @ 0x140591814 (sub_140591814.c)
 */

__int64 __fastcall sub_140591A10(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v6; // eax
  unsigned int v7; // edi
  signed __int32 v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  int v11; // [rsp+48h] [rbp+10h] BYREF
  int i; // [rsp+58h] [rbp+20h] BYREF

  v6 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x7FFFFFFF) != 0 )
  {
    v11 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v7 )
      sub_1402F32E0(&v11, a2, (__int64)a3, a4);
  }
  else
  {
    *(_DWORD *)a4 = v7 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)(a2 + 8) = sub_140591814(*(_QWORD *)a2);
  }
  v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v9 = ~v8 & 0x80000000;
  if ( (v8 & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; sub_1402F32E0(&i, a2, (__int64)a3, a4) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v9 )
        break;
    }
  }
  else
  {
    result = v9 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
