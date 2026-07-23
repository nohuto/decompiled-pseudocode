/*
 * XREFs of sub_140A818E8 @ 0x140A818E8
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_140A818B0 @ 0x140A818B0 (sub_140A818B0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A818E8(unsigned __int16 *a1, int a2)
{
  __int64 v3; // rax
  unsigned __int16 v5; // di
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  void *Pool2; // rax
  void *v9; // rsi

  v3 = *a1;
  if ( (v3 & 1) != 0 )
    return 3221225485LL;
  v5 = 0;
  if ( (_WORD)v3 )
  {
    v6 = *((_QWORD *)a1 + 1);
    if ( v6 + v3 > 0x7FFFFFFF0000LL || v6 + v3 < v6 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v7 = 256LL;
    if ( a2 != 1 )
      v7 = 64LL;
    Pool2 = (void *)ExAllocatePool2(v7, *a1, 0x43536656u);
    v9 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    memmove(Pool2, *((const void **)a1 + 1), *a1);
    *((_QWORD *)a1 + 1) = v9;
    v5 = *a1;
  }
  else
  {
    *((_QWORD *)a1 + 1) = MmBadPointer;
  }
  a1[1] = v5;
  return 0LL;
}
