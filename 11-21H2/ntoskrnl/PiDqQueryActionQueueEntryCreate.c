/*
 * XREFs of PiDqQueryActionQueueEntryCreate @ 0x140777C60
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x140775D50 (PiDqQueryApplyObjectEvent.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407762E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryEnumObject @ 0x1407792B4 (PiDqQueryEnumObject.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqQueryActionQueueEntryCreate(int a1, __int64 a2, volatile signed __int32 *a3, __int64 *a4)
{
  unsigned int v7; // ebx
  __int64 Pool2; // rax

  v7 = 0;
  Pool2 = ExAllocatePool2(256LL, 40LL, 1483763280LL);
  *a4 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 32) = a1;
    *(_QWORD *)(Pool2 + 16) = a2;
    if ( a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
      Pool2 = *a4;
    }
    *(_QWORD *)(Pool2 + 24) = a3;
    if ( a3 )
      _InterlockedIncrement(a3);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
