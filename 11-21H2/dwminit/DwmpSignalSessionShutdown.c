/*
 * XREFs of DwmpSignalSessionShutdown @ 0x1800078DC
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000411C (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x1800044C0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180001C50 (__security_check_cookie.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180005FEC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x1800075AC (-DoStackCaptureDirect@@YAXJI@Z.c)
 */

__int64 DwmpSignalSessionShutdown()
{
  int v0; // eax
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  int v3; // edx
  int v4; // ecx
  void *EventHandle; // [rsp+20h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-71h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-61h] BYREF
  WCHAR SourceString[56]; // [rsp+70h] [rbp-29h] BYREF

  EventHandle = 0LL;
  v0 = StringCchPrintfW(
         SourceString,
         53LL,
         L"\\Sessions\\%d\\Windows\\DwmCatastrophicShutdown",
         NtCurrentPeb()->SessionId);
  v1 = v0;
  if ( v0 < 0 )
  {
    v3 = 104;
    v4 = v0;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 0;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = NtOpenEvent(&EventHandle, 2u, &ObjectAttributes);
    if ( v2 >= 0 )
    {
      v2 = NtSetEvent(EventHandle, 0LL);
      if ( v2 >= 0 )
        goto LABEL_9;
      v3 = 118;
    }
    else
    {
      v3 = 116;
    }
    v1 = v2 | 0x10000000;
    v4 = v2 | 0x10000000;
  }
  DoStackCaptureDirect(v4, v3);
LABEL_9:
  if ( EventHandle )
    NtClose(EventHandle);
  return v1;
}
