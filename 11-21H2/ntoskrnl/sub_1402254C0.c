/*
 * XREFs of sub_1402254C0 @ 0x1402254C0
 * Callers:
 *     sub_140225440 @ 0x140225440 (sub_140225440.c)
 * Callees:
 *     sub_140225C88 @ 0x140225C88 (sub_140225C88.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1402254C0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 *v3; // rdi
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v6; // r11
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // r9d

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = &off_140C03040[534 * dword_140C232CC];
  v4 = (unsigned __int8)sub_140225C88(a1);
  result = (unsigned int)(v5 - 1);
  v8 = *((unsigned __int8 *)v3 + v4 + 117);
  if ( (result & 0xFFFFFFFD) != 0 )
  {
    result = (unsigned int)(v5 - 5);
    if ( (unsigned int)result <= 1 || dword_140D06AB4 )
      v9 = *(_DWORD *)(v1 + 24);
    else
      v9 = 100;
  }
  else
  {
    v9 = *(_DWORD *)(v6 + 444);
  }
  if ( (unsigned int)v8 >= v9 )
    v8 = v9;
  if ( (unsigned int)v8 > *(_DWORD *)(v1 + 56) )
  {
    result = sub_14042A5E0(v2, v8, *(unsigned int *)(v6 + 452));
    *(_DWORD *)(v1 + 56) = result;
  }
  return result;
}
