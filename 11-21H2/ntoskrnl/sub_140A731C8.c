/*
 * XREFs of sub_140A731C8 @ 0x140A731C8
 * Callers:
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 * Callees:
 *     sub_140A73078 @ 0x140A73078 (sub_140A73078.c)
 */

unsigned __int64 __fastcall sub_140A731C8(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v6; // rsi
  int v8; // ebp
  unsigned int v9; // edx
  __int128 i; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v4 = *(_DWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 28);
  v11 = qword_140C31E70;
  for ( i = xmmword_140C31E60; v4; v4 -= result )
  {
    *(_QWORD *)(a1 + 16) = v6;
    *(_DWORD *)(a1 + 24) = v4;
    *(_DWORD *)(a1 + 28) = v8;
    *a2 = 0;
    *(_DWORD *)(a1 + 8) = 0;
    WORD3(i) = 13;
    sub_140A73078(a1, (__int64)a2, a3, (__int64)&i);
    result = *(_DWORD *)(a1 + 28) & 0xC0000000;
    v9 = 4 * *(_DWORD *)(a1 + 28);
    if ( (_DWORD)result != 0x40000000 )
      v9 = *(_DWORD *)(a1 + 28);
    if ( *(int *)(a1 + 8) < 0 || !v9 )
      break;
    result = v4;
    if ( v9 <= v4 )
      result = v9;
    v6 += result;
  }
  return result;
}
