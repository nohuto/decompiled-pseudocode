/*
 * XREFs of CmpAddRemoveContainerToCLFSLog @ 0x140873814
 * Callers:
 *     CmpStartCLFSLog @ 0x140873508 (CmpStartCLFSLog.c)
 *     CmpAddRemoveRMLogContainer @ 0x140A1E900 (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140208A00 (RtlAppendUnicodeStringToString.c)
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitAnsiString @ 0x1402F6C50 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     sprintf_s @ 0x1403DF0C0 (sprintf_s.c)
 *     PsDisableImpersonation @ 0x14071E460 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x14071E5A0 (PsRestoreImpersonation.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140774110 (RtlAnsiStringToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAddRemoveContainerToCLFSLog(
        PLOG_FILE_OBJECT plfoLog,
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a3,
        PCUNICODE_STRING a4,
        PCUNICODE_STRING Sourcea,
        int a6,
        PULONGLONG pcbContainer)
{
  NTSTATUS v11; // edi
  BOOLEAN v12; // bl
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  NTSTATUS v16; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  STRING SourceString; // [rsp+60h] [rbp-A0h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+70h] [rbp-90h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v20; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+B0h] [rbp-50h] BYREF
  char *v22; // [rsp+D0h] [rbp-30h]
  int v23; // [rsp+D8h] [rbp-28h]
  int v24; // [rsp+DCh] [rbp-24h]
  NTSTATUS *v25; // [rsp+E0h] [rbp-20h]
  int v26; // [rsp+E8h] [rbp-18h]
  int v27; // [rsp+ECh] [rbp-14h]
  _DWORD *v28; // [rsp+F0h] [rbp-10h]
  int v29; // [rsp+F8h] [rbp-8h]
  int v30; // [rsp+FCh] [rbp-4h]
  wchar_t *Buffer; // [rsp+100h] [rbp+0h]
  _DWORD v32[2]; // [rsp+108h] [rbp+8h] BYREF
  char DstBuf[16]; // [rsp+110h] [rbp+10h] BYREF

  SourceString = 0LL;
  Destination = 0LL;
  DestinationString = 0LL;
  ImpersonationState = 0LL;
  memset(&v20, 0, sizeof(v20));
  RtlInitUnicodeString(&DestinationString, 0LL);
  Destination.MaximumLength = Source->Length + a3->Length + a4->Length + Sourcea->Length + 34;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, Destination.MaximumLength, 538987843LL);
  if ( !Destination.Buffer )
    return 3221225626LL;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a3);
  RtlAppendUnicodeStringToString(&Destination, a4);
  sprintf_s(DstBuf, 0x10uLL, ".%u", a6);
  RtlInitAnsiString(&SourceString, DstBuf);
  v11 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
  if ( v11 >= 0 && DestinationString.Length <= 0x20u )
  {
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, Sourcea);
    v12 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v20);
    v11 = ClfsAddLogContainer(plfoLog, pcbContainer, &Destination);
    KiUnstackDetachProcess(&v20);
    if ( v12 )
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  }
  if ( (unsigned int)dword_140C04390 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C04390, 1LL) )
    {
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v32[1] = 0;
      v22 = &v14;
      v14 = 1;
      v25 = &v16;
      v28 = v32;
      Buffer = Destination.Buffer;
      v32[0] = Destination.Length;
      v23 = 1;
      v16 = v11;
      v26 = 4;
      v29 = 2;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C04390,
        (unsigned __int8 *)&dword_1400380FC,
        0LL,
        0LL,
        6u,
        &v21);
    }
  }
  RtlFreeUnicodeString(&DestinationString);
  ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v11;
}
