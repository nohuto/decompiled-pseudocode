/*
 * XREFs of sub_1409F1D50 @ 0x1409F1D50
 * Callers:
 *     NotifyRoutine @ 0x1409F1600 (NotifyRoutine.c)
 * Callees:
 *     sub_1409F1CB0 @ 0x1409F1CB0 (sub_1409F1CB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409F1D50(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 Pool2; // rax
  void *v4; // rdi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 2544) )
  {
    if ( (*(_DWORD *)(a1 + 2172) & 1) != 0 )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      Pool2 = ExAllocatePool2(256LL, 56LL, 1450669125LL);
      v4 = (void *)Pool2;
      if ( Pool2 )
      {
        *(_OWORD *)Pool2 = 0LL;
        *(_OWORD *)(Pool2 + 16) = 0LL;
        *(_OWORD *)(Pool2 + 32) = 0LL;
        *(_QWORD *)(Pool2 + 48) = 0LL;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2544), Pool2, 0LL) )
        {
          sub_1409F1CB0(Pool2, 1);
          ExFreePoolWithTag(v4, 0x56777445u);
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v1;
}
