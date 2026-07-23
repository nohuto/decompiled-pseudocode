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
  ULONG v8; // r9d
  ULONG ExtendedParameterCount; // ecx
  MEM_EXTENDED_PARAMETER *ExtendedParameters; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v15[3]; // [rsp+40h] [rbp-21h] BYREF
  __int64 v16; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v17[5]; // [rsp+60h] [rbp-1h]

  v8 = a4 & 0xBFFFFFFF;
  if ( RtlpHpEnvEnableSimulatedLargePageCommit && (v8 & 0x2000) == 0 )
    v8 &= ~0x20000000u;
  ExtendedParameterCount = 0;
  if ( (v8 & 0x2000) != 0 )
  {
    v15[0] = 0LL;
    v15[1] = 0LL;
    v15[2] = a3;
    ExtendedParameterCount = 1;
    v16 = 1LL;
    v17[0] = v15;
    if ( (v8 & 0x40000) != 0 )
    {
      v8 &= ~0x40000u;
      v15[0] = 0x100000000LL;
    }
  }
  if ( a8 )
  {
    v13 = 2LL * ExtendedParameterCount++;
    *(_OWORD *)&v17[v13 - 1] = 0LL;
    LOBYTE(v17[v13 - 1]) = 3;
    v17[v13] = a8;
  }
  if ( (v8 & 0x20400000) == 0x20400000 )
  {
    v14 = 2LL * ExtendedParameterCount;
    *(_OWORD *)&v17[v14 - 1] = 0LL;
    v17[v14] = 2LL;
  }
  else
  {
    if ( (v8 & 0x20000000) == 0 )
      goto LABEL_7;
    v14 = 2LL * ExtendedParameterCount;
    *(_OWORD *)&v17[v14 - 1] = 0LL;
    v17[v14] = 8LL;
  }
  ++ExtendedParameterCount;
  LOBYTE(v17[v14 - 1]) = 5;
LABEL_7:
  ExtendedParameters = (MEM_EXTENDED_PARAMETER *)&v16;
  if ( !ExtendedParameterCount )
    ExtendedParameters = 0LL;
  return NtAllocateVirtualMemoryEx(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           RegionSize,
           v8,
           PageProtection,
           ExtendedParameters,
           ExtendedParameterCount);
}
