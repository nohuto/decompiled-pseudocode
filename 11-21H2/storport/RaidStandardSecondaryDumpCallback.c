/*
 * XREFs of RaidStandardSecondaryDumpCallback @ 0x1C0064BD0
 * Callers:
 *     <none>
 * Callees:
 *     FillBufferWithDriverTelemetryDump @ 0x1C00648C8 (FillBufferWithDriverTelemetryDump.c)
 */

void __fastcall RaidStandardSecondaryDumpCallback(
        __int64 Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        GUID *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 v5; // rax
  unsigned int v6; // eax
  char *v7; // rdx
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( BootDriveExtension && *(_DWORD *)(*(_QWORD *)(BootDriveExtension + 24) + 4804LL) )
  {
    v5 = *(_QWORD *)&ReasonSpecificData[2].Data1;
    if ( !v5 )
    {
      v6 = 7776;
LABEL_8:
      *(_DWORD *)ReasonSpecificData[2].Data4 = v6;
      ReasonSpecificData[1] = GUID_DEVICEDUMP_DRIVER_STORAGE_PORT;
      return;
    }
    v7 = *(char **)&ReasonSpecificData->Data1;
    if ( *(_QWORD *)&ReasonSpecificData->Data1 == v5 )
    {
      v8 = *(_DWORD *)ReasonSpecificData->Data4;
      if ( (int)FillBufferWithDriverTelemetryDump(Reason, v7, &v8) >= 0 )
      {
        v6 = v8;
        goto LABEL_8;
      }
    }
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[2].Data4 = 0;
  }
}
