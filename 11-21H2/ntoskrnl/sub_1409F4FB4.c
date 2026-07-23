/*
 * XREFs of sub_1409F4FB4 @ 0x1409F4FB4
 * Callers:
 *     sub_1406D2394 @ 0x1406D2394 (sub_1406D2394.c)
 *     sub_1406F2158 @ 0x1406F2158 (sub_1406F2158.c)
 *     sub_140794F30 @ 0x140794F30 (sub_140794F30.c)
 *     sub_140796040 @ 0x140796040 (sub_140796040.c)
 *     sub_140797054 @ 0x140797054 (sub_140797054.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1409F4FB4(char *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 result; // rax
  char *v4; // r9
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // rsi
  __int64 v11; // rbp
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = 0LL;
  v5 = (_DWORD *)(a2 + 128);
  v6 = 0;
  v8 = 0LL;
  do
  {
    if ( *v5 )
    {
      result = *(_QWORD *)(a2 + 384);
      v11 = *(_QWORD *)(result + v8 + 88);
      if ( v11 )
      {
        if ( ((unsigned __int8)(1 << v6) & a3) != 0 )
        {
          memmove(a1, *(const void **)(result + v8 + 88), *(unsigned int *)(v11 + 16));
          v4 = a1;
          result = (*(_DWORD *)(v11 + 16) + 7) & 0xFFFFFFF8;
          *((_DWORD *)a1 + 5) = result;
          a1 += result;
        }
      }
    }
    ++v6;
    v5 += 8;
    v8 += 104LL;
  }
  while ( v6 < 8 );
  if ( v4 )
    *((_DWORD *)v4 + 5) = 0;
  return result;
}
