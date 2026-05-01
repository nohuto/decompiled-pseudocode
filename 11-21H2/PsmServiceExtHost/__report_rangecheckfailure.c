/*
 * XREFs of __report_rangecheckfailure @ 0x18004E7C8
 * Callers:
 *     ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x18000C2B0 (-HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     __raise_securityfailure @ 0x18004E610 (__raise_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  struct _RUNTIME_FUNCTION *FunctionEntry; // [rsp+40h] [rbp-38h]
  DWORD64 ControlPc; // [rsp+48h] [rbp-30h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp-20h] BYREF
  PVOID HandlerData; // [rsp+60h] [rbp-18h] BYREF

  RtlCaptureContext(&ContextRecord);
  ControlPc = ContextRecord.Rip;
  FunctionEntry = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( FunctionEntry )
  {
    RtlVirtualUnwind(0, ImageBase, ControlPc, FunctionEntry, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = *(_QWORD *)ContextRecord.Rsp;
    ContextRecord.Rsp += 8LL;
  }
  qword_1800DC920 = ContextRecord.Rip;
  dword_1800DC910 = -1073740791;
  dword_1800DC914 = 1;
  dword_1800DC928 = 1;
  qword_1800DC930[0] = 8LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
