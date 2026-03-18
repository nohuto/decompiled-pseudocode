/*
 * XREFs of ArbFindSuitableRange @ 0x1C009D5B0
 * Callers:
 *     IrqArbpFindSuitableRangeMsi @ 0x1C009D410 (IrqArbpFindSuitableRangeMsi.c)
 *     IrqArbFindSuitableRange @ 0x1C009D510 (IrqArbFindSuitableRange.c)
 *     AcpiMemarbFindSuitableRange @ 0x1C00AF700 (AcpiMemarbFindSuitableRange.c)
 * Callees:
 *     RtlFindRange_0 @ 0x1C002F21F (RtlFindRange_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     ArbShareDriverExclusive @ 0x1C00B82FC (ArbShareDriverExclusive.c)
 */

char __fastcall ArbFindSuitableRange(__int64 a1, __int64 a2)
{
  ULONGLONG v2; // r10
  ULONGLONG v4; // r8
  __int64 v6; // r9
  int v7; // ecx
  int v8; // edx
  ULONG Flags; // r11d

  v2 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  if ( v2 > v4 )
    return 0;
  v6 = *(_QWORD *)(a2 + 40);
  if ( !*(_QWORD *)(v6 + 16) )
  {
    *(_QWORD *)a2 = v2;
    *(_QWORD *)(a2 + 8) = v2;
    return 1;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) & 0xFFFFFFFD) == 0 )
    *(_BYTE *)(a2 + 67) |= 1u;
  v7 = *(_DWORD *)(v6 + 36);
  v8 = (*(unsigned __int16 *)(a2 + 64) >> 2) & 2;
  Flags = v8 | 1;
  if ( (v7 & 1) == 0 )
    Flags = v8;
  if ( (v7 & 8) != 0 )
    *(_BYTE *)(a2 + 67) |= 0x40u;
  if ( RtlFindRange_0(
         *(PRTL_RANGE_LIST *)(a1 + 48),
         v2,
         v4,
         *(_QWORD *)(v6 + 16),
         *(_QWORD *)(v6 + 24),
         Flags,
         *(_BYTE *)(a2 + 67),
         *(PVOID *)(a1 + 328),
         *(PRTL_CONFLICT_RANGE_CALLBACK *)(a1 + 336),
         (PULONGLONG)a2) >= 0 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)a2 - 1LL + *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
    return 1;
  }
  if ( (unsigned __int8)ArbShareDriverExclusive(a1, a2) )
    return 1;
  return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 272))(a1, a2);
}
