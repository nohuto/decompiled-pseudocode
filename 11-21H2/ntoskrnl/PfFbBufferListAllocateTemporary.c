/*
 * XREFs of PfFbBufferListAllocateTemporary @ 0x14024B844
 * Callers:
 *     PfpEventHandleOutOfBuffers @ 0x14024B820 (PfpEventHandleOutOfBuffers.c)
 *     PfpSectInfoHandleOutOfBuffers @ 0x1407F8C50 (PfpSectInfoHandleOutOfBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x14035FAE8 (PfFbBufferListInsertInFree.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PfFbBufferListAllocateTemporary(PEX_RUNDOWN_REF RunRef, signed int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  void *Pool2; // rax

  if ( a2 + _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[14], a2) > SLODWORD(RunRef[11].Count) )
  {
    result = 3221225773LL;
LABEL_3:
    _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[14], -a2);
    return result;
  }
  Pool2 = (void *)ExAllocatePool2(RunRef[9].Count, a2, HIDWORD(RunRef[8].Ptr), a4);
  if ( !Pool2 )
  {
    result = 3221225626LL;
    goto LABEL_3;
  }
  PfFbBufferListInsertInFree(RunRef, Pool2, 0);
  return 0LL;
}
