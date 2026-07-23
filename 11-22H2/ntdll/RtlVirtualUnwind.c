/*
 * XREFs of RtlVirtualUnwind @ 0x180020E20
 * Callers:
 *     RtlDispatchException @ 0x18001E860 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180020160 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x1800549A0 (RtlRaiseException.c)
 *     _invalid_parameter @ 0x18008E6B8 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x18008E7E0 (__report_gsfailure.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x180021010 (RtlpxVirtualUnwind.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  int v8; // edi
  int v9; // ebx
  DWORD ContextFlags; // r11d
  int P1Home; // eax
  int P3Home; // r8d
  unsigned int P1Home_high; // r9d
  unsigned int P3Home_high; // r11d
  EXCEPTION_DISPOSITION (__cdecl *v16)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+60h] [rbp-28h] BYREF
  _QWORD v17[3]; // [rsp+68h] [rbp-20h] BYREF

  v16 = 0LL;
  v8 = ControlPc;
  v17[0] = 0LL;
  v17[1] = 0LL;
  v9 = (int)FunctionEntry;
  ContextFlags = ContextRecord->ContextFlags;
  if ( (ContextFlags & 0x27FFFF80) != 0x10000
    && (ContextFlags & 0x7FFFF20) != 0x100000
    && (ContextFlags & 0x7FFFFF0) != 0x200000
    && (ContextFlags & 0x7FFFFE0) != 0x400000 )
  {
    goto LABEL_8;
  }
  if ( ((ContextFlags & 0x100040) == 1048640 || (ContextFlags & 0x10040) == 65600) && !MEMORY[0x7FFE03D8]
    || (ContextFlags & 0x100080) == 0x100080 )
  {
    ContextRecord->ContextFlags = 1048587;
    goto LABEL_10;
  }
  if ( (ContextFlags & 0x100000) == 0 )
LABEL_8:
    ContextRecord->ContextFlags = ContextFlags & 0xF800001F | 0x100000;
  if ( (ContextRecord->ContextFlags & 0x100040) == 0x100040 )
  {
    P1Home = ContextRecord[1].P1Home;
    P3Home = ContextRecord[1].P3Home;
    if ( P1Home > P3Home
      || (P1Home_high = HIDWORD(ContextRecord[1].P1Home),
          P3Home_high = HIDWORD(ContextRecord[1].P3Home),
          (int)(P1Home_high + P1Home) < (int)(P3Home_high + P3Home))
      || P1Home_high < 0x530
      || HIDWORD(ContextRecord[1].P2Home) != 1232
      || P3Home_high < 0x40
      || (struct _CONTEXT *)((char *)&ContextRecord[1] + SLODWORD(ContextRecord[1].P2Home)) != ContextRecord )
    {
      ContextRecord->ContextFlags &= ~0x40u;
    }
  }
LABEL_10:
  v17[2] = ContextPointers;
  RtlpxVirtualUnwind(
    HandlerType,
    ImageBase,
    v8,
    v9,
    (__int64)ContextRecord,
    0LL,
    (__int64)HandlerData,
    (__int64)EstablisherFrame,
    (__int64)&v16,
    (__int64)v17,
    0);
  return v16;
}
