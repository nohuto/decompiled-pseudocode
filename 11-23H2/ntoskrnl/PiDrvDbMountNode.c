/*
 * XREFs of PiDrvDbMountNode @ 0x140970050
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1406D64B0 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140208A00 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x14022A860 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     PiDrvDbFindNode @ 0x140565040 (PiDrvDbFindNode.c)
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1407C6F90 (ExpAllocateStringRoutine.c)
 *     PiDrvDbRegisterNode @ 0x14081173C (PiDrvDbRegisterNode.c)
 *     PiDrvDbQueryHiveFileName @ 0x140970B64 (PiDrvDbQueryHiveFileName.c)
 */

__int64 __fastcall PiDrvDbMountNode(PCWSTR SourceString)
{
  int appended; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v7; // [rsp+78h] [rbp+18h] BYREF

  Source = 0LL;
  v7 = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&Source, SourceString);
  if ( (int)PiDrvDbFindNode(&Source, &v7) < 0 )
  {
    DestinationString.Length = 0;
    DestinationString.MaximumLength = Source.Length + 38;
    DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(Source.Length + 38));
    if ( DestinationString.Buffer )
    {
      appended = RtlAppendUnicodeToString(&DestinationString, L"\\REGISTRY\\MACHINE\\");
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeStringToString(&DestinationString, &Source);
        if ( appended >= 0 )
        {
          appended = PiDrvDbQueryHiveFileName(&DestinationString, &UnicodeString);
          if ( appended >= 0 )
            appended = PiDrvDbRegisterNode(SourceString, 24, 0);
        }
      }
    }
    else
    {
      appended = -1073741670;
    }
  }
  else
  {
    appended = (*(_DWORD *)(v7 + 64) & 1) != 0 ? -1073741790 : 0x40000000;
  }
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)appended;
}
