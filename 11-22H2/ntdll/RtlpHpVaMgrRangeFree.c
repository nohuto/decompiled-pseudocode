/*
 * XREFs of RtlpHpVaMgrRangeFree @ 0x180064D78
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x180064890 (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x180047988 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeCleanup @ 0x180065314 (RtlpHpVaMgrRangeCleanup.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeFree(__int64 a1, __int64 a2)
{
  bool v3; // zf
  __int64 v4; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v3 = (*(_BYTE *)a2 & 4) == 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
     + ((unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) << 20);
  if ( v3 )
    v4 = *(unsigned __int16 *)(a2 + 24);
  else
    v4 = *(_QWORD *)(a2 + 24);
  v6 = v4 << 20;
  RtlpHpVaMgrRangeCleanup(a1);
  return RtlpHpEnvFreeVA(
           (__int64)&v7,
           (__int64)&v6,
           0x8000,
           (*(unsigned __int8 *)(a1 + 46) >> 1) & 7,
           *(_QWORD *)(a1 + 32));
}
