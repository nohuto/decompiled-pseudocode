/*
 * XREFs of RtlpHpVaMgrRangeFree @ 0x180064C48
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x180064760 (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x180047828 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeCleanup @ 0x1800651E4 (RtlpHpVaMgrRangeCleanup.c)
 */

NTSTATUS __fastcall RtlpHpVaMgrRangeFree(__int64 a1, __int64 a2)
{
  bool v3; // zf
  __int64 v4; // rax
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  v3 = (*(_BYTE *)a2 & 4) == 0;
  BaseAddress = (PVOID)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
                      + ((unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) << 20));
  if ( v3 )
    v4 = *(unsigned __int16 *)(a2 + 24);
  else
    v4 = *(_QWORD *)(a2 + 24);
  RegionSize = v4 << 20;
  RtlpHpVaMgrRangeCleanup(a1);
  return RtlpHpEnvFreeVA(
           &BaseAddress,
           &RegionSize,
           0x8000,
           (*(unsigned __int8 *)(a1 + 46) >> 1) & 7,
           *(_QWORD *)(a1 + 32));
}
