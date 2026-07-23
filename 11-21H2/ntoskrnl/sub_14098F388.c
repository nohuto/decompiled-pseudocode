/*
 * XREFs of sub_14098F388 @ 0x14098F388
 * Callers:
 *     sub_140A51888 @ 0x140A51888 (sub_140A51888.c)
 *     sub_140A6B1E0 @ 0x140A6B1E0 (sub_140A6B1E0.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14098F388(int a1)
{
  __int64 result; // rax

  result = ExAllocatePool2(64LL, 112LL, 544040269LL);
  if ( result )
    *(_DWORD *)(result + 16) = a1;
  return result;
}
