/*
 * XREFs of ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00771D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     NdisWriteConfiguration @ 0x1C001C950 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C001CB40 (NdisOpenConfigurationKeyByName.c)
 *     NdisOpenConfigurationEx @ 0x1C001D060 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001D290 (NdisCloseConfiguration.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075F10 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostIovNicSwitchParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r13
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  int v4; // eax
  __int64 v5; // rbx
  _LIST_ENTRY *SwitchBySwitchId; // r15
  NDIS_STATUS v7; // eax
  PVOID v8; // rsi
  PVOID v9; // r14
  __int64 v10; // r8
  unsigned __int16 *v11; // rdx
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+58h] [rbp-18h] BYREF
  int Status; // [rsp+B0h] [rbp+40h] BYREF
  PVOID ConfigurationHandle; // [rsp+B8h] [rbp+48h] BYREF
  PVOID SubKeyHandle; // [rsp+C0h] [rbp+50h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  ConfigurationHandle = 0LL;
  SubKeyHandle = 0LL;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Bu,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      v1);
  if ( *(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL) == 1 )
  {
    if ( v3 )
    {
      v4 = *((_DWORD *)a1 + 10);
      if ( !v4 || v4 == -1071448016 )
      {
        v5 = *(_QWORD *)(v1 + 40);
        SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v3, *(_DWORD *)(v5 + 12));
        if ( SwitchBySwitchId )
        {
          ConfigObject.Flags = 0;
          ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
          ConfigObject.NdisHandle = v3;
          v7 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
          v8 = ConfigurationHandle;
          Status = v7;
          if ( !v7 )
          {
            NdisOpenConfigurationKeyByName(&Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
            v9 = SubKeyHandle;
            if ( !Status && (*(_DWORD *)(v5 + 4) & 0x10000) != 0 )
            {
              v10 = 4LL;
              v11 = (unsigned __int16 *)(v5 + 16);
              v12 = (_OWORD *)((char *)&SwitchBySwitchId[7].Flink + 4);
              v13 = (_OWORD *)(v5 + 16);
              do
              {
                *v12 = *v13;
                v12[1] = v13[1];
                v12[2] = v13[2];
                v12[3] = v13[3];
                v12[4] = v13[4];
                v12[5] = v13[5];
                v12[6] = v13[6];
                v12 += 8;
                v14 = v13[7];
                v13 += 8;
                *(v12 - 1) = v14;
                --v10;
              }
              while ( v10 );
              *(_DWORD *)v12 = *(_DWORD *)v13;
              ParameterValue.ParameterType = NdisParameterString;
              ParameterValue.ParameterData.StringData.Buffer = (wchar_t *)(v5 + 18);
              ParameterValue.ParameterData.StringData.Length = *v11;
              ParameterValue.ParameterData.StringData.MaximumLength = *v11 + 2;
              NdisWriteConfiguration(&Status, v9, &NicSwitchNameStr, &ParameterValue);
            }
            if ( v9 )
              NdisCloseConfiguration(v9);
          }
          if ( v8 )
            NdisCloseConfiguration(v8);
        }
      }
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Cu,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      v1);
}
