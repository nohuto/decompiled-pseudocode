/*
 * XREFs of RaidQueryLedStateByAcpiDsm @ 0x1C005A76C
 * Callers:
 *     RaidQueryLedState @ 0x1C005A704 (RaidQueryLedState.c)
 * Callees:
 *     RaidDsmGetLedState @ 0x1C0058BC0 (RaidDsmGetLedState.c)
 *     RaidDsmQuerySupportedFunctionForLedState @ 0x1C0058D40 (RaidDsmQuerySupportedFunctionForLedState.c)
 */

__int64 __fastcall RaidQueryLedStateByAcpiDsm(struct _DEVICE_OBJECT *a1, int *a2)
{
  _BYTE *DeviceExtension; // rbx
  int SupportedFunctionForLedState; // ecx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  DeviceExtension = a1->DeviceExtension;
  v7 = 0;
  if ( *(_DWORD *)DeviceExtension != 1094997074 )
    return 3221225659LL;
  if ( !DeviceExtension )
    return 3221225473LL;
  SupportedFunctionForLedState = RaidDsmQuerySupportedFunctionForLedState(a1);
  if ( SupportedFunctionForLedState >= 0 )
  {
    if ( (DeviceExtension[5632] & 5) == 5 )
    {
      SupportedFunctionForLedState = RaidDsmGetLedState(a1, &v7);
      if ( SupportedFunctionForLedState >= 0 )
        *a2 = (v7 >> 2) & 0x1FF;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)SupportedFunctionForLedState;
}
