/*
 * XREFs of RtlVirtualUnwind @ 0x180039050
 * Callers:
 *     RtlRaiseException @ 0x180032D00 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180035990 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180038900 (RtlUnwindEx.c)
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x180093890 (__report_gsfailure.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x180039210 (RtlpxVirtualUnwind.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  int v8; // edi
  PCONTEXT v9; // r11
  int v10; // ebx
  int v11; // esi
  unsigned int ContextFlags; // r10d
  int P1Home; // eax
  int P3Home; // edx
  unsigned int P1Home_high; // r8d
  unsigned int P3Home_high; // r9d
  _QWORD v18[4]; // [rsp+60h] [rbp-28h] BYREF

  v18[0] = 0LL;
  v8 = ControlPc;
  v18[1] = 0LL;
  v9 = ContextRecord;
  v10 = (int)FunctionEntry;
  ContextRecord = 0LL;
  v11 = ImageBase;
  ContextFlags = v9->ContextFlags;
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
    v9->ContextFlags = 1048587;
    goto LABEL_10;
  }
  if ( (ContextFlags & 0x100000) == 0 )
  {
LABEL_8:
    ContextFlags = ContextFlags & 0xF800001F | 0x100000;
    v9->ContextFlags = ContextFlags;
  }
  if ( (ContextFlags & 0x100040) == 0x100040 )
  {
    P1Home = v9[1].P1Home;
    P3Home = v9[1].P3Home;
    if ( P1Home > P3Home
      || (P1Home_high = HIDWORD(v9[1].P1Home),
          P3Home_high = HIDWORD(v9[1].P3Home),
          (int)(P1Home_high + P1Home) < (int)(P3Home_high + P3Home))
      || P1Home_high < 0x530
      || HIDWORD(v9[1].P2Home) != 1232
      || P3Home_high < 0x40
      || (struct _CONTEXT *)((char *)&v9[1] + SLODWORD(v9[1].P2Home)) != v9 )
    {
      v9->ContextFlags = ContextFlags & 0xFFFFFFBF;
    }
  }
LABEL_10:
  v18[2] = ContextPointers;
  RtlpxVirtualUnwind(
    HandlerType,
    v11,
    v8,
    v10,
    (__int64)v9,
    0LL,
    (__int64)HandlerData,
    (__int64)EstablisherFrame,
    (__int64)&ContextRecord,
    (__int64)v18,
    0);
  return (PEXCEPTION_ROUTINE)ContextRecord;
}
