/*
 * XREFs of sub_140A66DB4 @ 0x140A66DB4
 * Callers:
 *     sub_140A660C0 @ 0x140A660C0 (sub_140A660C0.c)
 *     sub_140A67994 @ 0x140A67994 (sub_140A67994.c)
 *     sub_140A67A68 @ 0x140A67A68 (sub_140A67A68.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14055A628 @ 0x14055A628 (sub_14055A628.c)
 *     sub_140A677B8 @ 0x140A677B8 (sub_140A677B8.c)
 */

__int64 __fastcall sub_140A66DB4(volatile __int32 *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int32 v7; // edi
  __int64 result; // rax
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_QWORD *)a1;
  v5 = 0LL;
  *a3 = 0LL;
  v7 = a2;
  if ( (*(_DWORD *)(v4 + 80) & 0x80u) != 0 )
    v5 = sub_14055A628(0);
  _InterlockedExchange(a1 + 4, 0);
  _InterlockedExchange(a1 + 3, v7);
  if ( v7 == 7 )
    _InterlockedIncrement(a1 + 4);
  else
    sub_140A677B8(a1, a1 + 28);
  v10 = 0;
  while ( *((_DWORD *)a1 + 4) != *((_DWORD *)a1 + 5) )
    sub_1402F32E0(&v10, a2, (__int64)a3, a4);
  result = *(unsigned int *)(v4 + 80);
  if ( (result & 0x80u) != 0LL )
  {
    result = sub_14055A628(0) - v5;
    *a3 = result;
  }
  return result;
}
