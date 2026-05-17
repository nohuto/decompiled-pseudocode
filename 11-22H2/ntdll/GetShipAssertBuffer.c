/*
 * XREFs of GetShipAssertBuffer @ 0x1800E8074
 * Callers:
 *     ShipAssert @ 0x1800E81F0 (ShipAssert.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x18009F470 (ZwDelayExecution.c)
 *     SetAssertBufferPtrinPeb @ 0x1800E8170 (SetAssertBufferPtrinPeb.c)
 */

__int64 GetShipAssertBuffer()
{
  signed __int64 v0; // rax
  __int64 v1; // rbx
  int v2; // edi

  v0 = _InterlockedCompareExchange64(&qword_180185598, 255LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      v2 = 0;
      while ( 1 )
      {
        ZwDelayExecution();
        v1 = qword_180185598;
        if ( qword_180185598 != 255 )
          break;
        if ( ++v2 >= 5 )
        {
          if ( v2 == 5 )
          {
            v1 = 238LL;
            _InterlockedCompareExchange64(&qword_180185598, 238LL, 255LL);
          }
          return v1;
        }
      }
    }
  }
  else if ( (int)ZwAllocateVirtualMemory() >= 0 && (int)SetAssertBufferPtrinPeb(0LL) >= 0 )
  {
    _InterlockedExchange64(&qword_180185598, 0LL);
    return 0LL;
  }
  return v1;
}
