/*
 * XREFs of NdisOpenConfigurationKeyByName @ 0x1C001CB40
 * Callers:
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002EBE0 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisOpenConfigurationKeyByIndex @ 0x1C0033450 (NdisOpenConfigurationKeyByIndex.c)
 *     ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00771D0 (-ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ndisOpenProtocolSubkey @ 0x1C001EE08 (ndisOpenProtocolSubkey.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 */

void __stdcall NdisOpenConfigurationKeyByName(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING SubKeyName,
        PNDIS_HANDLE SubKeyHandle)
{
  __int64 v8; // rdi
  int v9; // eax
  __int64 Pool2; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  void *v14; // rax
  NTSTATUS v15; // eax
  __int64 v16; // rax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-48h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v8 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x18u,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      ConfigurationHandle,
      *(_QWORD *)&ObjectAttributes.Length,
      ObjectAttributes.RootDirectory,
      ObjectAttributes.ObjectName,
      *(_QWORD *)&ObjectAttributes.Attributes,
      ObjectAttributes.SecurityDescriptor,
      ObjectAttributes.SecurityQualityOfService);
  if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0
    || *((_QWORD *)ConfigurationHandle + 4)
    || (v9 = ndisOpenProtocolSubkey(ConfigurationHandle), *Status = v9, v9 >= 0) )
  {
    Pool2 = ExAllocatePool2(64LL, SubKeyName->Length + 176LL, 1751336014);
    v8 = Pool2;
    if ( Pool2 )
    {
      *Status = 0;
      v11 = Pool2 + 40;
      *(_QWORD *)(Pool2 + 16) = Pool2 + 40;
      *(_WORD *)(Pool2 + 40) = 266;
      *(_WORD *)(*(_QWORD *)(Pool2 + 16) + 2LL) = 40;
      memmove((void *)(Pool2 + 176), SubKeyName->Buffer, SubKeyName->Length);
      *(_DWORD *)(v11 + 56) = 0;
      *(_QWORD *)(v11 + 80) = 0LL;
      *(_DWORD *)(v11 + 88) = 0;
      *(_QWORD *)(v11 + 96) = 0LL;
      *(_QWORD *)(v11 + 24) = ndisSaveParameters;
      v12 = *((_QWORD *)ConfigurationHandle + 2);
      *(_DWORD *)(v11 + 32) = 20;
      v13 = *(_QWORD *)(v12 + 8);
      v14 = (void *)*((_QWORD *)ConfigurationHandle + 4);
      *(_QWORD *)(v11 + 8) = v13;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = v14;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = SubKeyName;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v15 = ZwOpenKey((PHANDLE)(v8 + 32), 0xBu, &ObjectAttributes);
      *Status = v15;
      if ( v15 >= 0 )
      {
        v16 = *((_QWORD *)ConfigurationHandle + 1);
        *(_QWORD *)(v8 + 24) = 0LL;
        *(_QWORD *)(v8 + 8) = v16;
        *SubKeyHandle = (PVOID)v8;
      }
    }
    else
    {
      *Status = -1073741670;
      *SubKeyHandle = 0LL;
    }
  }
  if ( *Status < 0 && v8 )
    ExFreePoolWithTag((PVOID)v8, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x19u,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      ConfigurationHandle);
}
