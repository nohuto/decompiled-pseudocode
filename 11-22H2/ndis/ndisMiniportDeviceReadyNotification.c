/*
 * XREFs of ndisMiniportDeviceReadyNotification @ 0x1C0120AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ndisFindMiniportByPdo @ 0x1C0034624 (ndisFindMiniportByPdo.c)
 *     ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034690 (-ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C0116700 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z @ 0x1C0120C6C (--$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall ndisMiniportDeviceReadyNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rax
  _UNICODE_STRING *v4; // rax
  PVOID v5; // rdi
  struct _NDIS_MINIPORT_BLOCK *MiniportByPdo; // rax
  struct _NDIS_MINIPORT_BLOCK *v7; // rbx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v3 )
  {
    CopyPartialStringToBuffer<64>(NotificationStructure, NotificationStructure[5]);
    v4 = (_UNICODE_STRING *)NotificationStructure[5];
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    FileHandle = 0LL;
    ObjectAttributes.ObjectName = v4;
    ObjectAttributes.Length = 48;
    IoStatusBlock = 0LL;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 1u) >= 0 )
    {
      Object = 0LL;
      if ( ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
      {
        v5 = Object;
        MiniportByPdo = ndisFindMiniportByPdo(*((_DEVICE_OBJECT **)Object + 1));
        v7 = MiniportByPdo;
        if ( MiniportByPdo && (MiniportByPdo->Flags & 0x80u) == 0 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              1u,
              0xAu,
              (struct _GUID *)&WPP_ed0d4e867c5c32c49659a97a590a07bf_Traceguids,
              MiniportByPdo);
          ndisMSetMiniportReadyForBinding(v7, 1, 0x80000, RunAsynchronous);
          ndisNotifyWmiAdapterArrival(v7);
        }
        ObfDereferenceObject(v5);
      }
      ZwClose(FileHandle);
    }
  }
  return 0LL;
}
