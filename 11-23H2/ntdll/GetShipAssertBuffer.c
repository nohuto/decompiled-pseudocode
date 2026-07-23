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

PVOID GetShipAssertBuffer()
{
  signed __int64 v0; // rax
  __int64 v1; // rbx
  int v2; // edi
  PVOID BaseAddress; // [rsp+50h] [rbp+20h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+28h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+60h] [rbp+30h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  v0 = _InterlockedCompareExchange64(&qword_180188668, 255LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      DelayInterval.QuadPart = -1000000LL;
      v2 = 0;
      while ( 1 )
      {
        ZwDelayExecution(0, &DelayInterval);
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
          break;
        }
      }
    }
  }
  else
  {
    RegionSize = 0x2000LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0
      && RegionSize >= 0x2000
      && (int)SetAssertBufferPtrinPeb(BaseAddress) >= 0 )
    {
      _InterlockedExchange64(&qword_180188668, (__int64)BaseAddress);
      return BaseAddress;
    }
  }
  if ( BaseAddress )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  return (PVOID)v1;
}
