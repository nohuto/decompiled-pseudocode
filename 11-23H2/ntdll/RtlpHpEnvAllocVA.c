/*
 * XREFs of RtlpHpEnvAllocVA @ 0x180047474
 * Callers:
 *     RtlpHpAllocVA @ 0x180047270 (RtlpHpAllocVA.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18004AB70 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpVaMgrAllocAligned @ 0x180081CAC (RtlpHpVaMgrAllocAligned.c)
 *     RtlCSparseBitmapStart @ 0x1800B1C08 (RtlCSparseBitmapStart.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtAllocateVirtualMemoryEx @ 0x1800A1D60 (NtAllocateVirtualMemoryEx.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpEnvAllocVA(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        unsigned __int64 a8)
{
  int v11; // ecx
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rdx
  _QWORD v18[3]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v19; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v20[5]; // [rsp+70h] [rbp-48h]

  v11 = a7;
  if ( (a4 & 0x20001000) == 0x20001000 && (unsigned int)(a7 - 2) > 2 )
    v11 = 3;
  v12 = a4 & 0xBFFFFFFF;
  if ( RtlpHpEnvEnableSimulatedLargePageCommit && (v12 & 0x2000) == 0 )
    v12 &= ~0x20000000u;
  v13 = 0;
  if ( (v12 & 0x2000) != 0 )
  {
    v18[0] = 0LL;
    v18[1] = 0LL;
    v18[2] = a3;
    v13 = 1;
    v19 = 1LL;
    v20[0] = v18;
    if ( (v12 & 0x40000) != 0 )
    {
      v12 &= ~0x40000u;
      v18[0] = 0x100000000LL;
    }
  }
  if ( a8 && v11 != 5 )
  {
    v15 = 2LL * v13++;
    *(_OWORD *)&v20[v15 - 1] = 0LL;
    LOBYTE(v20[v15 - 1]) = 3;
    v20[v15] = a8;
  }
  if ( (v12 & 0x20400000) == 0x20400000 )
  {
    v16 = 2LL * v13;
    *(_OWORD *)&v20[v16 - 1] = 0LL;
    v20[v16] = 2LL;
  }
  else
  {
    if ( (v12 & 0x20000000) == 0 )
      goto LABEL_9;
    v16 = 2LL * v13;
    *(_OWORD *)&v20[v16 - 1] = 0LL;
    v20[v16] = 8LL;
  }
  ++v13;
  LOBYTE(v20[v16 - 1]) = 5;
LABEL_9:
  if ( v11 != 5 )
    return NtAllocateVirtualMemoryEx(-1LL, a1, a2);
  v17 = &v19;
  if ( !v13 )
    v17 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, __int64, unsigned int, int, __int64 *, unsigned int))(a8 ^ *(_QWORD *)(a8 + 8) ^ RtlpHpHeapGlobals))(
           a8 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a8,
           -1LL,
           a1,
           a2,
           v12,
           a5,
           v17,
           v13);
}
