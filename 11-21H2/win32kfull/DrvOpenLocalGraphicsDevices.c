/*
 * XREFs of DrvOpenLocalGraphicsDevices @ 0x1C01537D4
 * Callers:
 *     xxxRemoteReconnect @ 0x1C01528E0 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 DrvOpenLocalGraphicsDevices()
{
  __int64 v0; // rdi
  int v1; // ebp
  struct tagGRAPHICS_DEVICE *v2; // rbx
  PVOID *v3; // rsi
  __int64 v4; // rcx
  int v5; // eax
  NTSTATUS DeviceObjectPointer; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v9[2]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v10; // [rsp+60h] [rbp-38h]
  __int64 v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+A0h] [rbp+8h] BYREF

  LODWORD(v0) = 0;
  DestinationString = 0LL;
  v1 = 0;
  if ( !(unsigned int)DrvUpdateGraphicsDeviceList(1LL) )
    return 3221225473LL;
  v2 = gpLocalGraphicsDeviceList;
  if ( !gpLocalGraphicsDeviceList )
    return 0LL;
  do
  {
    v3 = (PVOID *)((char *)v2 + 232);
    if ( *((_QWORD *)v2 + 29) )
      goto LABEL_4;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)v2);
    DeviceObjectPointer = IoGetDeviceObjectPointer(
                            &DestinationString,
                            0,
                            (PFILE_OBJECT *)v2 + 29,
                            (PDEVICE_OBJECT *)v2 + 17);
    v0 = DeviceObjectPointer;
    if ( DeviceObjectPointer < 0 )
      goto LABEL_11;
    if ( (unsigned int)bSetDeviceSessionUsage(v2, 1LL) )
    {
LABEL_4:
      v1 = 1;
      if ( (*((_DWORD *)v2 + 40) & 8) == 0 )
      {
        if ( *v3 )
        {
          v4 = *((_QWORD *)v2 + 17);
          v11 = 0LL;
          v12 = 0;
          v9[1] = VideoPortCallout;
          v10 = 0LL;
          v9[0] = v2;
          v5 = GreGdoDeviceIoControlEx(v4, 2301983LL, v9, 40LL, v9, 40, &v12, 1);
          v0 = v5;
          if ( v5 < 0 )
LABEL_11:
            WdLogSingleEntry1(4LL, v0);
        }
      }
    }
    else
    {
      ObfDereferenceObject(*v3);
      *((_QWORD *)v2 + 17) = 0LL;
      LODWORD(v0) = -1073741790;
      *v3 = 0LL;
      WdLogSingleEntry0(4LL);
    }
    v2 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v2 + 16);
  }
  while ( v2 );
  if ( v1 )
    return 0LL;
  else
    return (unsigned int)v0;
}
