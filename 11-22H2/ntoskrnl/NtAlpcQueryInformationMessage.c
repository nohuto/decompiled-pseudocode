/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x14071AA80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     AlpcpQuerySidMessage @ 0x140714BEC (AlpcpQuerySidMessage.c)
 *     AlpcpUnlockMessage @ 0x14071BF28 (AlpcpUnlockMessage.c)
 *     AlpcpCaptureIdMessage @ 0x14071D0B0 (AlpcpCaptureIdMessage.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     AlpcpLookupMessage @ 0x140738DC0 (AlpcpLookupMessage.c)
 *     AlpcpQueryHandleInformationMessage @ 0x1407BF9BC (AlpcpQueryHandleInformationMessage.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x140978A64 (AlpcpQueryTokenModifiedIdMessage.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformationMessage(
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ALPC_MESSAGE_INFORMATION_CLASS MessageInformationClass,
        PVOID MessageInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // bl
  PULONG v11; // rsi
  __int64 v12; // rcx
  int v13; // r14d
  int v14; // ebx
  int v15; // r9d
  PVOID v16; // r15
  ULONG_PTR v17; // r14
  __int32 v18; // edi
  __int32 v19; // edi
  int HandleInformationMessage; // eax
  int v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+34h] [rbp-34h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR v25[2]; // [rsp+40h] [rbp-28h] BYREF

  v23 = 0;
  v25[0] = 0LL;
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AlpcpCaptureIdMessage(PortMessage, &v22, &v23);
  if ( PreviousMode )
  {
    ProbeForWrite(MessageInformation, Length, 4u);
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v12 = (__int64)ReturnLength;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v11 = ReturnLength;
  }
  v13 = v22;
  if ( !v22 )
  {
    v14 = -1073741811;
    goto LABEL_22;
  }
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v16 = Object;
    v14 = AlpcpLookupMessage((_DWORD)Object, v13, v23, v15, (__int64)v25);
    if ( v14 < 0 )
    {
LABEL_21:
      ObfDereferenceObject(v16);
      goto LABEL_22;
    }
    v17 = v25[0];
    if ( !*(_QWORD *)(v25[0] + 24) )
    {
      v14 = -1073740029;
      goto LABEL_20;
    }
    if ( MessageInformationClass )
    {
      v18 = MessageInformationClass - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( !v19 )
        {
          if ( !MessageInformation && !Length && !v11 )
          {
            v14 = (*(_DWORD *)(v25[0] + 40) & 7) != 4 ? 0x103 : 0;
LABEL_20:
            AlpcpUnlockMessage(v17);
            goto LABEL_21;
          }
LABEL_25:
          v14 = -1073741811;
          goto LABEL_20;
        }
        if ( v19 != 1 )
          goto LABEL_25;
        HandleInformationMessage = AlpcpQueryHandleInformationMessage(
                                     (_DWORD)v16,
                                     v25[0],
                                     (_DWORD)MessageInformation,
                                     Length,
                                     (__int64)v11);
      }
      else
      {
        HandleInformationMessage = AlpcpQueryTokenModifiedIdMessage(
                                     (_DWORD)v16,
                                     v25[0],
                                     (_DWORD)MessageInformation,
                                     Length,
                                     (__int64)v11);
      }
    }
    else
    {
      HandleInformationMessage = AlpcpQuerySidMessage(
                                   (int)v16,
                                   v25[0],
                                   (__int64)MessageInformation,
                                   Length,
                                   (__int64)v11);
    }
    v14 = HandleInformationMessage;
    goto LABEL_20;
  }
LABEL_22:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v14;
}
