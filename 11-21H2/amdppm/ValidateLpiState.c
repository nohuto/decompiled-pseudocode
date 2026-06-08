/*
 * XREFs of ValidateLpiState @ 0x1C002E8DC
 * Callers:
 *     InitAcpiLpiStates @ 0x1C003ADAC (InitAcpiLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003B414 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     IsValidAcpiGenericAddress @ 0x1C001E7D8 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall ValidateLpiState(__int64 a1, char a2)
{
  unsigned int v2; // r9d
  unsigned __int16 v3; // r9
  unsigned int v4; // r8d
  int v5; // ecx
  int v6; // r10d

  v2 = 0;
  if ( *(_DWORD *)(a1 + 12) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741823;
    v3 = 88;
    v4 = 1;
LABEL_4:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v4,
      v3,
      (__int64)&WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids);
    return (unsigned int)-1073741823;
  }
  v5 = *(unsigned __int8 *)(a1 + 24);
  if ( (_BYTE)v5 != 127 )
  {
    v6 = 1;
    if ( (_BYTE)v5 == 1 )
    {
      if ( !IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C0011D6C) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v3 = v6 + 88;
        goto LABEL_10;
      }
    }
    else
    {
      if ( (_BYTE)v5 != 126 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x5Bu,
            (__int64)&WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids,
            v5);
        return (unsigned int)-1073741823;
      }
      if ( !a2 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v3 = 90;
LABEL_10:
        v4 = v6;
        goto LABEL_4;
      }
    }
  }
  return v2;
}
