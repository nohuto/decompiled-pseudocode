/*
 * XREFs of sub_1402404A8 @ 0x1402404A8
 * Callers:
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1402404A8(unsigned int *Src, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rsi
  __int64 result; // rax

  v2 = Src[10];
  if ( (_DWORD)v2 == 0xFFFFF )
    return 0LL;
  v4 = (unsigned int)(2 * v2);
  if ( (unsigned int)v4 <= (unsigned int)v2 || (unsigned int)v4 > 0xFFFFF )
    return 0LL;
  if ( (unsigned int)v4 > a2 )
    v4 = a2;
  v5 = (void *)sub_1402828F0(64LL, 8 * v4 + 48, 1816554829LL);
  v6 = (__int64)v5;
  if ( !v5 )
    return 0LL;
  memmove(v5, Src, 8 * v2 + 48);
  result = v6;
  *(_DWORD *)(v6 + 44) = v4;
  return result;
}
