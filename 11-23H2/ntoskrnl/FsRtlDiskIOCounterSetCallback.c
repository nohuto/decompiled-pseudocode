/*
 * XREFs of FsRtlDiskIOCounterSetCallback @ 0x14093EE20
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     PcwAddInstance @ 0x14086D920 (PcwAddInstance.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14093ED4C (FsRtlAddDiskIOCounterInstance.c)
 */

NTSTATUS __fastcall FsRtlDiskIOCounterSetCallback(int a1, __int64 a2)
{
  int v3; // ecx
  struct _PCW_BUFFER *v5; // rcx
  int v6; // ebx
  NTSTATUS v7; // eax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  v3 = a1 - 2;
  if ( v3 )
  {
    if ( v3 == 1 )
      return FsRtlAddDiskIOCounterInstance(*(PPCW_BUFFER *)(a2 + 24));
    else
      return 0;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"default");
    v5 = *(struct _PCW_BUFFER **)(a2 + 24);
    v6 = 0;
    Data.Size = 16;
    Data.Data = 0LL;
    v7 = PcwAddInstance(v5, &DestinationString, 0, 1u, &Data);
    if ( v7 < 0 )
      return v7;
    return v6;
  }
}
