/*
 * XREFs of RtlpHpEnvAllocVA @ 0x180022A74
 * Callers:
 *     RtlpHpAllocVA @ 0x180022888 (RtlpHpAllocVA.c)
 *     RtlpCSparseBitmapPageCommit @ 0x180056588 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpVaMgrAllocAligned @ 0x18005687C (RtlpHpVaMgrAllocAligned.c)
 *     RtlCSparseBitmapStart @ 0x180120AFC (RtlCSparseBitmapStart.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtAllocateVirtualMemoryEx @ 0x1800A4F20 (NtAllocateVirtualMemoryEx.c)
 */

__int64 __fastcall RtlpHpEnvAllocVA(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r9d
  unsigned int v10; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD v14[3]; // [rsp+40h] [rbp-21h] BYREF
  __int64 v15; // [rsp+58h] [rbp-9h]
  _QWORD v16[5]; // [rsp+60h] [rbp-1h]

  v8 = a4 & 0xBFFFFFFF;
  if ( RtlpHpEnvEnableSimulatedLargePageCommit && (v8 & 0x2000) == 0 )
    v8 &= ~0x20000000u;
  v10 = 0;
  if ( (v8 & 0x2000) != 0 )
  {
    v14[0] = 0LL;
    v14[1] = 0LL;
    v14[2] = a3;
    v10 = 1;
    v15 = 1LL;
    v16[0] = v14;
    if ( (v8 & 0x40000) != 0 )
    {
      v8 &= ~0x40000u;
      v14[0] = 0x100000000LL;
    }
  }
  if ( a8 )
  {
    v12 = 2LL * v10++;
    *(_OWORD *)&v16[v12 - 1] = 0LL;
    LOBYTE(v16[v12 - 1]) = 3;
    v16[v12] = a8;
  }
  if ( (v8 & 0x20400000) == 0x20400000 )
  {
    v13 = 2LL * v10;
    *(_OWORD *)&v16[v13 - 1] = 0LL;
    v16[v13] = 2LL;
LABEL_14:
    LOBYTE(v16[v13 - 1]) = 5;
    return NtAllocateVirtualMemoryEx(-1LL, a1, a2);
  }
  if ( (v8 & 0x20000000) != 0 )
  {
    v13 = 2LL * v10;
    *(_OWORD *)&v16[v13 - 1] = 0LL;
    v16[v13] = 8LL;
    goto LABEL_14;
  }
  return NtAllocateVirtualMemoryEx(-1LL, a1, a2);
}
