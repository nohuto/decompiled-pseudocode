/*
 * XREFs of ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1C00768B4
 * Callers:
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002EBE0 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisReadConfiguration @ 0x1C001D370 (NdisReadConfiguration.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 */

__int64 __fastcall ndisIovReadSwitchConfiguration(
        NDIS_HANDLE ConfigurationHandle,
        struct _NDIS_NIC_SWITCH_PARAMETERS *a2)
{
  unsigned int v4; // edx
  PNDIS_CONFIGURATION_PARAMETER v5; // rdx
  unsigned __int16 Length; // ax
  int Status; // [rsp+48h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+50h] [rbp+20h] BYREF

  Status = 0;
  ParameterValue = 0LL;
  if ( *((_BYTE *)a2 + 1) && *((_WORD *)a2 + 1) >= 0x224u )
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchFlagsStr, NdisParameterInteger);
    v4 = Status;
    if ( !Status )
    {
      *((_DWORD *)a2 + 1) = ParameterValue->ParameterData.IntegerData;
      NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchTypeStr, NdisParameterInteger);
      v4 = Status;
      if ( !Status )
      {
        *((_DWORD *)a2 + 2) = ParameterValue->ParameterData.IntegerData;
        NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchIdStr, NdisParameterInteger);
        v4 = Status;
        if ( !Status )
        {
          *((_DWORD *)a2 + 3) = ParameterValue->ParameterData.IntegerData;
          NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchNameStr, NdisParameterString);
          v4 = Status;
          if ( !Status )
          {
            v5 = ParameterValue;
            Length = ParameterValue->ParameterData.StringData.Length;
            if ( Length <= 0x200u )
            {
              *((_WORD *)a2 + 8) = Length;
              memmove((char *)a2 + 18, v5->ParameterData.StringData.Buffer, v5->ParameterData.StringData.Length);
              NdisReadConfiguration(
                &Status,
                &ParameterValue,
                ConfigurationHandle,
                &NicSwitchNumVFsStr,
                NdisParameterInteger);
              v4 = Status;
              if ( !Status )
                *((_DWORD *)a2 + 133) = ParameterValue->ParameterData.IntegerData;
            }
            else
            {
              return (unsigned int)-1073741811;
            }
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073676267;
  }
  return v4;
}
