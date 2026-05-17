/*
 * XREFs of RtlDeactivateActivationContext @ 0x180074060
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseActivationContext @ 0x180033D90 (RtlReleaseActivationContext.c)
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x180054840 (RtlRaiseException.c)
 *     RtlpFreeActivationContextStackFrame @ 0x18007415C (RtlpFreeActivationContextStackFrame.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 */

void __fastcall RtlDeactivateActivationContext(int a1, unsigned __int64 a2)
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

  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    DbgPrintEx(51, 0, "SXS: %s() called with invalid flags 0x%08lx\n", "RtlDeactivateActivationContext", a1);
    RtlRaiseStatus(3221225485LL);
  }
  if ( a2 )
  {
    if ( a2 >> 60 != 1 )
    {
      DbgPrintEx(51, 0, "SXS: %s() called with invalid cookie type 0x%08Ix\n", "RtlDeactivateActivationContext", a2);
      RtlRaiseStatus(3221225485LL);
    }
    v3 = NtCurrentTeb();
    if ( ((HIDWORD(a2) ^ v3->ActivationContextStackPointer->StackId) & 0xFFFFFFF) != 0 )
    {
      DbgPrintEx(
        51,
        0,
        "SXS: %s() called with invalid cookie tid 0x%08Ix - should be %08Ix\n",
        "RtlDeactivateActivationContext",
        a2,
        v3->ActivationContextStackPointer->StackId & 0xFFFFFFF);
      RtlRaiseStatus(3221225485LL);
    }
    ActivationContextStackPointer = (unsigned __int64 *)v3->ActivationContextStackPointer;
    v5 = *ActivationContextStackPointer;
    if ( *ActivationContextStackPointer )
    {
      if ( (*(_BYTE *)(v5 + 16) & 8) != 0 && *(_QWORD *)(v5 + 24) == a2 )
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
          if ( (v6 & -(__int64)(v11 != 0)) != 0 && *(_QWORD *)((v6 & -(__int64)(v11 != 0)) + 0x18) == a2 )
            break;
          v6 = *(_QWORD *)v6;
          ++v9;
          if ( !v6 )
            goto LABEL_28;
        }
        if ( !v6 )
LABEL_28:
          RtlRaiseStatus(3222601744LL);
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
          RtlReleaseActivationContext(*(volatile signed __int32 **)(v5 + 8));
        if ( (*(_BYTE *)(v5 + 16) & 8) != 0 )
          RtlpFreeActivationContextStackFrame(ActivationContextStackPointer, v5);
        v5 = v8;
      }
      while ( v8 != v7 );
      *ActivationContextStackPointer = v7;
    }
  }
}
