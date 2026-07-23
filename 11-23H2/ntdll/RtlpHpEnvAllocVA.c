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

NTSTATUS __fastcall RtlpHpEnvAllocVA(
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        __int64 a3,
        int a4,
        ULONG PageProtection,
        int a6,
        int a7,
        __int64 a8)
{
  int v11; // ecx
  ULONG v12; // r9d
  ULONG ExtendedParameterCount; // r8d
  MEM_EXTENDED_PARAMETER *ExtendedParameters; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rdx
  _QWORD v19[3]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v20; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v21[5]; // [rsp+70h] [rbp-48h]

  v11 = a7;
  if ( (a4 & 0x20001000) == 0x20001000 && (unsigned int)(a7 - 2) > 2 )
    v11 = 3;
  v12 = a4 & 0xBFFFFFFF;
  if ( RtlpHpEnvEnableSimulatedLargePageCommit && (v12 & 0x2000) == 0 )
    v12 &= ~0x20000000u;
  ExtendedParameterCount = 0;
  if ( (v12 & 0x2000) != 0 )
  {
    v19[0] = 0LL;
    v19[1] = 0LL;
    v19[2] = a3;
    ExtendedParameterCount = 1;
    v20 = 1LL;
    v21[0] = v19;
    if ( (v12 & 0x40000) != 0 )
    {
      v12 &= ~0x40000u;
      v19[0] = 0x100000000LL;
    }
  }
  if ( a8 && v11 != 5 )
  {
    v16 = 2LL * ExtendedParameterCount++;
    *(_OWORD *)&v21[v16 - 1] = 0LL;
    LOBYTE(v21[v16 - 1]) = 3;
    v21[v16] = a8;
  }
  if ( (v12 & 0x20400000) == 0x20400000 )
  {
    v17 = 2LL * ExtendedParameterCount;
    *(_OWORD *)&v21[v17 - 1] = 0LL;
    v21[v17] = 2LL;
  }
  else
  {
    if ( (v12 & 0x20000000) == 0 )
      goto LABEL_9;
    v17 = 2LL * ExtendedParameterCount;
    *(_OWORD *)&v21[v17 - 1] = 0LL;
    v21[v17] = 8LL;
  }
  ++ExtendedParameterCount;
  LOBYTE(v21[v17 - 1]) = 5;
LABEL_9:
  if ( v11 == 5 )
  {
    v18 = &v20;
    if ( !ExtendedParameterCount )
      v18 = 0LL;
    return ((__int64 (__fastcall *)(__int64, __int64, PVOID *, PSIZE_T, ULONG, ULONG, __int64 *, ULONG))(a8 ^ *(_QWORD *)(a8 + 8) ^ RtlpHpHeapGlobals))(
             a8 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a8,
             -1LL,
             BaseAddress,
             RegionSize,
             v12,
             PageProtection,
             v18,
             ExtendedParameterCount);
  }
  else
  {
    ExtendedParameters = (MEM_EXTENDED_PARAMETER *)&v20;
    if ( !ExtendedParameterCount )
      ExtendedParameters = 0LL;
    return NtAllocateVirtualMemoryEx(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             BaseAddress,
             RegionSize,
             v12,
             PageProtection,
             ExtendedParameters,
             ExtendedParameterCount);
  }
}
