/*
 * XREFs of sub_1406A0E10 @ 0x1406A0E10
 * Callers:
 *     sub_1406A0BF0 @ 0x1406A0BF0 (sub_1406A0BF0.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406A0E10(unsigned __int64 a1, unsigned int a2, char a3, __int64 *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // r15
  int v9; // r14d
  __int64 Pool2; // rcx

  v7 = 0;
  *a4 = 0LL;
  if ( !a1 )
  {
    if ( !a2 )
      return 0;
    return (unsigned int)-1073741811;
  }
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    *a4 = a1;
    return 0;
  }
  v8 = 16LL * a2;
  if ( is_mul_ok(0x10uLL, a2) )
  {
    v9 = 0;
  }
  else
  {
    v8 = -1LL;
    v9 = -1073741675;
  }
  if ( v9 >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, v8, 1934976339LL);
    if ( Pool2 )
    {
      if ( v8 )
      {
        if ( (a1 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v8 + a1 > 0x7FFFFFFF0000LL || v8 + a1 < a1 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      while ( v7 < a2 )
      {
        *(_OWORD *)(Pool2 + 16LL * v7) = *(_OWORD *)(a1 + 16LL * v7);
        ++v7;
      }
      *a4 = Pool2;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v9;
}
