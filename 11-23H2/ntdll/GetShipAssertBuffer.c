/*
 * XREFs of GetShipAssertBuffer @ 0x1800E93A4
 * Callers:
 *     ShipAssert @ 0x1800E9520 (ShipAssert.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A11B0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A1270 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x1800A1530 (ZwDelayExecution.c)
 *     SetAssertBufferPtrinPeb @ 0x1800E94A0 (SetAssertBufferPtrinPeb.c)
 */

__int64 GetShipAssertBuffer()
{
  signed __int64 v0; // rax
  __int64 v1; // rbx
  int v2; // edi

  v0 = _InterlockedCompareExchange64(&qword_180188668, 255LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      v2 = 0;
      while ( 1 )
      {
        ZwDelayExecution();
        v1 = qword_180188668;
        if ( qword_180188668 != 255 )
          break;
        if ( ++v2 >= 5 )
        {
          if ( v2 == 5 )
          {
            v1 = 238LL;
            _InterlockedCompareExchange64(&qword_180188668, 238LL, 255LL);
          }
          return v1;
        }
      }
    }
  }
  else if ( (int)ZwAllocateVirtualMemory() >= 0 && (int)SetAssertBufferPtrinPeb(0LL) >= 0 )
  {
    _InterlockedExchange64(&qword_180188668, 0LL);
    return 0LL;
  }
  return v1;
}
