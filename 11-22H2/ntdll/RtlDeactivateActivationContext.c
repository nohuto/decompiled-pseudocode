/*
 * XREFs of RtlDeactivateActivationContext @ 0x1800739F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseActivationContext @ 0x180033EF0 (RtlReleaseActivationContext.c)
 *     DbgPrintEx @ 0x180053A30 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x1800549A0 (RtlRaiseException.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180073AEC (RtlpFreeActivationContextStackFrame.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

void __cdecl RtlDeactivateActivationContext(ULONG Flags, ULONG_PTR Cookie)
{
  struct _TEB *v3; // r14
  unsigned __int64 *ActivationContextStackPointer; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned int v9; // edx
  int i; // eax
  char v11; // al
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-C8h] BYREF

  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() called with invalid flags 0x%08lx\n", "RtlDeactivateActivationContext", Flags);
    RtlRaiseStatus(-1073741811);
  }
  if ( Cookie )
  {
    if ( Cookie >> 60 != 1 )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() called with invalid cookie type 0x%08Ix\n",
        "RtlDeactivateActivationContext",
        Cookie);
      RtlRaiseStatus(-1073741811);
    }
    v3 = NtCurrentTeb();
    if ( ((HIDWORD(Cookie) ^ v3->ActivationContextStackPointer->StackId) & 0xFFFFFFF) != 0 )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() called with invalid cookie tid 0x%08Ix - should be %08Ix\n",
        "RtlDeactivateActivationContext",
        Cookie,
        v3->ActivationContextStackPointer->StackId & 0xFFFFFFF);
      RtlRaiseStatus(-1073741811);
    }
    ActivationContextStackPointer = (unsigned __int64 *)v3->ActivationContextStackPointer;
    v5 = *ActivationContextStackPointer;
    if ( *ActivationContextStackPointer )
    {
      if ( (*(_BYTE *)(v5 + 16) & 8) != 0 && *(_QWORD *)(v5 + 24) == Cookie )
      {
        v6 = *ActivationContextStackPointer;
      }
      else
      {
        v6 = *(_QWORD *)v5;
        v9 = 0;
        if ( !*(_QWORD *)v5 )
          goto LABEL_28;
        for ( i = *(_DWORD *)(v6 + 16); ; LOBYTE(i) = *(_BYTE *)(v6 + 16) )
        {
          v11 = -(i & 8);
          if ( (v6 & -(__int64)(v11 != 0)) != 0 && *(_QWORD *)((v6 & -(__int64)(v11 != 0)) + 0x18) == Cookie )
            break;
          v6 = *(_QWORD *)v6;
          ++v9;
          if ( !v6 )
            goto LABEL_28;
        }
        if ( !v6 )
LABEL_28:
          RtlRaiseStatus(-1072365552);
        ExceptionRecord.ExceptionRecord = 0LL;
        ExceptionRecord.ExceptionFlags = 0;
        ExceptionRecord.ExceptionInformation[0] = v9;
        ExceptionRecord.NumberParameters = 3;
        ExceptionRecord.ExceptionInformation[1] = v6;
        ExceptionRecord.ExceptionInformation[2] = v5;
        ExceptionRecord.ExceptionCode = -1072365553;
        RtlRaiseException(&ExceptionRecord);
      }
      v7 = *(_QWORD *)v6;
      do
      {
        v8 = *(_QWORD *)v5;
        if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
          RtlReleaseActivationContext(*(PACTIVATION_CONTEXT *)(v5 + 8));
        if ( (*(_BYTE *)(v5 + 16) & 8) != 0 )
          RtlpFreeActivationContextStackFrame(ActivationContextStackPointer, v5);
        v5 = v8;
      }
      while ( v8 != v7 );
      *ActivationContextStackPointer = v7;
    }
  }
}
