/*
 * XREFs of sub_1C00A332C @ 0x1C00A332C
 * Callers:
 *     sub_1C00A3030 @ 0x1C00A3030 (sub_1C00A3030.c)
 * Callees:
 *     sub_1C00A3470 @ 0x1C00A3470 (sub_1C00A3470.c)
 */

void *__fastcall sub_1C00A332C(__int64 a1, int a2)
{
  __int64 v2; // rdi
  void *Pool2; // rbx
  int v6; // r8d

  v2 = 0LL;
  Pool2 = (void *)ExAllocatePool2(64LL, 88LL, 1766878288LL);
  if ( Pool2 )
  {
    if ( *(_BYTE *)(a1 + 7) && (v2 = ExAllocatePool2(72LL, *(unsigned __int8 *)(a1 + 7), 1766878288LL)) == 0 )
    {
      ExFreePoolWithTag(Pool2, 0x69506C50u);
      return 0LL;
    }
    else
    {
      sub_1C00A3470((_DWORD)Pool2, a1, v6, a2, v2);
    }
  }
  return Pool2;
}
