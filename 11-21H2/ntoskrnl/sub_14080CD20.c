/*
 * XREFs of sub_14080CD20 @ 0x14080CD20
 * Callers:
 *     sub_14080C884 @ 0x14080C884 (sub_14080C884.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PsDisableImpersonation @ 0x140725F50 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x140726090 (PsRestoreImpersonation.c)
 *     sub_14080B938 @ 0x14080B938 (sub_14080B938.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14080CD20(
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a2,
        __int64 a3,
        void *a4,
        int a5,
        ULONGLONG *a6,
        int *a7,
        FILE_OBJECT **a8,
        PVOID *a9)
{
  unsigned __int16 v12; // cx
  __int64 v13; // r9
  NTSTATUS LogFileInformation; // ebx
  int TotalContainers; // edi
  FILE_OBJECT *v16; // rax
  CLFS_INFORMATION *PoolWithTag; // rax
  CLFS_INFORMATION *v19; // rsi
  BOOLEAN v20; // [rsp+60h] [rbp-79h]
  FILE_OBJECT *pplfoLog; // [rsp+68h] [rbp-71h] BYREF
  ULONG pcbInfoBuffer; // [rsp+70h] [rbp-69h] BYREF
  UNICODE_STRING Destination; // [rsp+78h] [rbp-61h] BYREF
  PVOID ppvMarshalContext; // [rsp+88h] [rbp-51h] BYREF
  PULONGLONG pcbContainer; // [rsp+90h] [rbp-49h]
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+98h] [rbp-41h] BYREF
  _OWORD v27[3]; // [rsp+A8h] [rbp-31h] BYREF

  pcbContainer = a6;
  *a8 = 0LL;
  *a9 = 0LL;
  v12 = Source->Length + 26 + a2->Length;
  pcbInfoBuffer = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.MaximumLength = v12;
  ImpersonationState = 0LL;
  memset(v27, 0, sizeof(v27));
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12, 0x20204D43u);
  if ( !Destination.Buffer )
    return 3221225626LL;
  *a8 = 0LL;
  *a9 = 0LL;
  RtlAppendUnicodeStringToString(&Destination, &stru_1400020C8);
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a2);
  RtlAppendUnicodeStringToString(&Destination, &stru_1400020A8);
  pplfoLog = 0LL;
  ppvMarshalContext = 0LL;
  v20 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
  sub_14030D5C0((ULONG_PTR)PsInitialSystemProcess, 0LL, (__int64)v27, v13);
  LogFileInformation = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0010000, 0, a4, 1u, 8u, 0, 0x200u, 0LL, 0);
  if ( LogFileInformation >= 0 )
  {
    pcbInfoBuffer = 120;
    PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
    v19 = PoolWithTag;
    if ( PoolWithTag )
    {
      LogFileInformation = ClfsGetLogFileInformation(pplfoLog, PoolWithTag, &pcbInfoBuffer);
      if ( LogFileInformation < 0 )
      {
        ExFreePoolWithTag(v19, 0);
      }
      else
      {
        TotalContainers = v19->TotalContainers;
        ExFreePoolWithTag(v19, 0);
LABEL_8:
        LogFileInformation = ClfsCreateMarshallingArea(
                               pplfoLog,
                               PagedPool,
                               0LL,
                               0LL,
                               0x1000u,
                               2u,
                               0x14u,
                               &ppvMarshalContext);
        if ( LogFileInformation >= 0 )
        {
          v16 = pplfoLog;
          *a7 = TotalContainers;
          *a8 = v16;
          *a9 = ppvMarshalContext;
        }
      }
    }
    else
    {
      LogFileInformation = -1073741670;
    }
  }
  else if ( LogFileInformation == -1073741772 )
  {
    LogFileInformation = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0010000, 0, a4, 2u, 8u, 0, 0x200u, 0LL, 0);
    if ( LogFileInformation >= 0 )
    {
      TotalContainers = 0;
      while ( 1 )
      {
        LogFileInformation = sub_14080B938(
                               pplfoLog,
                               Source,
                               a2,
                               &stru_1400020A8,
                               &stru_1400020B8,
                               TotalContainers,
                               pcbContainer);
        if ( LogFileInformation < 0 )
          break;
        if ( (unsigned int)++TotalContainers >= 3 )
          goto LABEL_8;
      }
    }
  }
  sub_1402D0930((__int64)v27, 0LL);
  if ( v20 )
    PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( LogFileInformation < 0 )
  {
    if ( pplfoLog )
      ClfsCloseLogFileObject(pplfoLog);
  }
  return (unsigned int)LogFileInformation;
}
