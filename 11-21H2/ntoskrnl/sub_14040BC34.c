/*
 * XREFs of sub_14040BC34 @ 0x14040BC34
 * Callers:
 *     sub_140400FE0 @ 0x140400FE0 (sub_140400FE0.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_14040B1B0 @ 0x14040B1B0 (sub_14040B1B0.c)
 *     sub_14040D4B0 @ 0x14040D4B0 (sub_14040D4B0.c)
 */

__int64 __fastcall sub_14040BC34(int a1, int a2, int a3, __int64 a4, void *Src, _DWORD *a6)
{
  int v6; // r14d
  __int64 result; // rax

  v6 = *(_DWORD *)(a4 + 4);
  _misaligned_access();
  result = sub_14040D4B0(a1, a2, a3, (_DWORD)Src, v6);
  if ( !(_DWORD)result )
  {
    sub_14040B1B0(Src, v6, (_DWORD *)(a4 + 64), 0LL, Src, a6);
    return 0LL;
  }
  return result;
}
