/*
 * XREFs of NdisOpenConfiguration @ 0x1C001CD40
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C001D060 (NdisOpenConfigurationEx.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008D894 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C013818C (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C001C190 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C012B910 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C012C76C (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 */

void __stdcall NdisOpenConfiguration(
        PNDIS_STATUS Status,
        PNDIS_HANDLE ConfigurationHandle,
        NDIS_HANDLE WrapperConfigurationContext)
{
  __int64 Pool2; // rax
  void *v7; // rbx
  HANDLE *v8; // r14
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  HANDLE v15; // rcx
  int v16; // eax
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x15u,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      WrapperConfigurationContext);
  Pool2 = ExAllocatePool2(64LL, 40LL, 1751336014);
  v7 = (void *)Pool2;
  if ( Pool2 )
  {
    *Status = 0;
    v8 = (HANDLE *)(Pool2 + 32);
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    v9 = *(_BYTE *)WrapperConfigurationContext == 10;
    *(_DWORD *)Pool2 = 2621707;
    *(_QWORD *)(Pool2 + 16) = WrapperConfigurationContext;
    if ( v9 )
    {
      v10 = *((_QWORD *)WrapperConfigurationContext + 1);
      *(_QWORD *)(Pool2 + 8) = v10;
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 120);
        if ( (v11 & 0x100) != 0 )
        {
          Handle = 0LL;
          v13 = ndisLWMOpenConfigurationKey((const struct _GUID *)(v10 + 4008), (KRegKey *)&Handle);
          v14 = NdisConvertNtStatusToNdisStatus(v13);
          *Status = v14;
          if ( v14 )
          {
            v15 = Handle;
          }
          else
          {
            v15 = 0LL;
            *v8 = Handle;
          }
          if ( v15 )
            ZwClose(v15);
        }
        else
        {
          if ( (v11 & 0x80u) != 0 )
          {
            v16 = ndisWdfOpenConfigurationKey(v10);
            v12 = NdisConvertNtStatusToNdisStatus(v16);
          }
          else
          {
            v12 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(v10 + 3832), 2u, 0xC2000000, v8);
          }
          *Status = v12;
        }
      }
    }
    else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        8u,
        0x16u,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
        WrapperConfigurationContext);
    }
    if ( *Status < 0 )
      ExFreePoolWithTag(v7, 0);
    else
      *ConfigurationHandle = v7;
  }
  else
  {
    *Status = -1073741670;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x17u,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      WrapperConfigurationContext);
}
