/*
 * XREFs of PnpLogVetoInformation @ 0x1409645E0
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x140971E9C (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140208A00 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x14022A970 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitAnsiString @ 0x1402F6EE0 (RtlInitAnsiString.c)
 *     PsGetProcessImageFileName @ 0x14034E690 (PsGetProcessImageFileName.c)
 *     PnpDiagnosticTraceAppVeto @ 0x140563104 (PnpDiagnosticTraceAppVeto.c)
 *     PsLookupProcessByProcessId @ 0x1406FA580 (PsLookupProcessByProcessId.c)
 *     PsGetAllocatedFullProcessImageName @ 0x140742998 (PsGetAllocatedFullProcessImageName.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773DF0 (RtlAnsiStringToUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x140793EC8 (IopAllocateUnicodeString.c)
 *     PnpGetProcessCommandLine @ 0x140964548 (PnpGetProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall PnpLogVetoInformation(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  char v5; // r12
  int *p_LockNV; // r14
  UNICODE_STRING *v7; // rbx
  const CHAR *ProcessImageFileName; // rax
  _QWORD *i; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  void *ProcessCommandLine; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  STRING SourceString; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v17; // [rsp+50h] [rbp-10h] BYREF
  PVOID P; // [rsp+A8h] [rbp+48h] BYREF
  PEPROCESS Process; // [rsp+B0h] [rbp+50h] BYREF

  P = 0LL;
  Process = 0LL;
  v17 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  IopAllocateUnicodeString((__int64)&DestinationString, 0xC90u);
  for ( result = (_QWORD *)*a2; ; result = (_QWORD *)v14[3] )
  {
    v14 = result - 3;
    if ( a2 == result )
      break;
    v5 = 0;
    if ( PsLookupProcessByProcessId((HANDLE)*((unsigned int *)v14 + 4), &Process) >= 0 )
    {
      p_LockNV = &Process->Header.LockNV;
      if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, (__int64 *)&P) >= 0 )
      {
        v7 = (UNICODE_STRING *)P;
        if ( !*(_WORD *)P )
        {
          v5 = 1;
          SourceString = 0LL;
          ExFreePoolWithTag(P, 0);
          v7 = &v17;
          P = &v17;
          ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)p_LockNV);
          RtlInitAnsiString(&SourceString, ProcessImageFileName);
          RtlAnsiStringToUnicodeString(&v17, &SourceString, 1u);
        }
      }
      else
      {
        v7 = 0LL;
        P = 0LL;
      }
      for ( i = (_QWORD *)*v14; ; i = (_QWORD *)v11[1] )
      {
        v11 = i - 1;
        if ( v14 == i )
          break;
        v10 = *v11 ? *(_QWORD *)(*(_QWORD *)(*v11 + 312LL) + 40LL) : 0LL;
        if ( RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(v10 + 40)) < 0
          || RtlAppendUnicodeToString(&DestinationString, L"\r\n") < 0 )
        {
          break;
        }
      }
      ProcessCommandLine = PnpGetProcessCommandLine((ULONG_PTR)p_LockNV);
      PnpDiagnosticTraceAppVeto(
        v13,
        p_LockNV[272],
        (__int64)v7,
        a1,
        (__int64)ProcessCommandLine,
        (__int64)&DestinationString);
      if ( v5 )
      {
        RtlFreeUnicodeString(v7);
      }
      else if ( v7 )
      {
        ExFreePoolWithTag(v7, 0);
        P = 0LL;
      }
      if ( ProcessCommandLine )
        ExFreePoolWithTag(ProcessCommandLine, 0x4F706E50u);
      RtlFreeUnicodeString(&DestinationString);
      ObfDereferenceObjectWithTag(p_LockNV, 0x746C6644u);
    }
  }
  return result;
}
