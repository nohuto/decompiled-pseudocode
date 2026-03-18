/*
 * XREFs of RIMAllocateAsyncPnpWorkItem @ 0x1C0074AA0
 * Callers:
 *     RIMQueueDeviceClassNotifyAsyncWorkItem @ 0x1C0072890 (RIMQueueDeviceClassNotifyAsyncWorkItem.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x1C0076D60 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x1C018E844 (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem @ 0x1C019AF24 (rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem.c)
 *     rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x1C01A105C (rimQueueUpdateInputGlolbalsAsyncWorkItem.c)
 *     RIMQueueDeviceNotifyAsyncWorkItem @ 0x1C01A20B0 (RIMQueueDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01A2DB8 (RIMVirtQueueDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtQueueRimDevChangeAsyncWorkItem @ 0x1C01A2F50 (RIMVirtQueueRimDevChangeAsyncWorkItem.c)
 *     RIMVirtQueueRootPnpEndSyncAsyncWorkItem @ 0x1C01A30D0 (RIMVirtQueueRootPnpEndSyncAsyncWorkItem.c)
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x1C01AC27C (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 */

__int64 __fastcall RIMAllocateAsyncPnpWorkItem(
        PVOID Object,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _OWORD *a6,
        _OWORD *a7,
        PCUNICODE_STRING SourceString,
        int a9,
        int a10)
{
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  void *v17; // rcx
  char *v18; // rcx
  unsigned int v19; // eax

  v14 = Win32AllocPoolZInit(0x88uLL, 0x70707352u);
  if ( v14 )
  {
    if ( SourceString )
    {
      v15 = Win32AllocPoolZInit(SourceString->MaximumLength, 0x70707352u);
      *(_QWORD *)(v14 + 48) = v15;
      if ( !v15 )
      {
LABEL_9:
        Win32FreePool((char *)v14);
        return 0LL;
      }
      *(_WORD *)(v14 + 42) = SourceString->MaximumLength;
      RtlCopyUnicodeString((PUNICODE_STRING)(v14 + 40), SourceString);
    }
    if ( a10 == 6 )
    {
      v16 = Win32AllocPoolZInit(a2[42], 0x75625252u);
      *(_QWORD *)(v14 + 120) = v16;
      v17 = (void *)v16;
      if ( !v16 )
      {
        v18 = *(char **)(v14 + 48);
        if ( v18 )
        {
          Win32FreePool(v18);
          *(_QWORD *)(v14 + 48) = 0LL;
        }
        goto LABEL_9;
      }
      v19 = *((_DWORD *)a2 + 84);
      *(_DWORD *)(v14 + 116) = v19;
      memmove(v17, *(const void **)(a2[66] + 24LL), v19);
    }
    *(_QWORD *)(v14 + 8) = v14;
    *(_QWORD *)v14 = v14;
    if ( ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 88LL);
    *(_QWORD *)(v14 + 24) = Object;
    if ( a2 )
    {
      if ( ObReferenceObjectByPointer(a2, 3u, ExRawInputManagerObjectType, 0) < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 103LL);
      *(_QWORD *)(v14 + 56) = a2;
    }
    if ( a3 )
      *(_QWORD *)(v14 + 96) = a3;
    if ( a4 )
      *(_QWORD *)(v14 + 104) = a4;
    *(_DWORD *)(v14 + 112) = a9;
    *(_DWORD *)(v14 + 32) = a5;
    if ( a6 )
      *(_OWORD *)(v14 + 64) = *a6;
    if ( a7 )
      *(_OWORD *)(v14 + 80) = *a7;
    *(_DWORD *)(v14 + 16) = a10;
    *(_DWORD *)(v14 + 128) = 0;
  }
  return v14;
}
