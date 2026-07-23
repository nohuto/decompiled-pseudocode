/*
 * XREFs of IpmiLibpKcsRequestAndReceive @ 0x140678930
 * Callers:
 *     IpmiLibAddSelRecord @ 0x140678408 (IpmiLibAddSelRecord.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IpmiLibpKcsBmcTransact @ 0x1406785C4 (IpmiLibpKcsBmcTransact.c)
 *     IpmiLibKcsIpmiMessageUnpack @ 0x140678EF8 (IpmiLibKcsIpmiMessageUnpack.c)
 */

__int64 __fastcall IpmiLibpKcsRequestAndReceive(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  LARGE_INTEGER v6; // rcx
  unsigned __int16 v7; // ax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-248h] BYREF
  unsigned __int16 v12[264]; // [rsp+30h] [rbp-238h] BYREF

  memset(&v12[2], 0, 0x202uLL);
  v5 = (unsigned int)dword_140C2CC20;
  PerformanceFrequency.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7 = *(_WORD *)(a2 + 1) + 2;
  v8 = v6.QuadPart + v5 * (PerformanceFrequency.QuadPart / 1000000);
  v12[0] = v7;
  if ( v7 > 0x100u )
    return 3221225495LL;
  memmove((char *)&v12[2] + 1, (const void *)(a2 + 3), v7);
  v12[1] = 256;
  result = IpmiLibpKcsBmcTransact(v9, v12, v8);
  if ( !(_DWORD)result )
    return IpmiLibKcsIpmiMessageUnpack(a3, v12);
  return result;
}
