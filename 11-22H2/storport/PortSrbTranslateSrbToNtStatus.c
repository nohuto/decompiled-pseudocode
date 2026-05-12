/*
 * XREFs of PortSrbTranslateSrbToNtStatus @ 0x1C001F060
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C001E658 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001ECDC (RaidUnitSendSrbIoControlSynchronously.c)
 *     TcglibEalExecuteCommandSync @ 0x1C005515C (TcglibEalExecuteCommandSync.c)
 *     RaUnitSmartDataIoctl @ 0x1C005EF34 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C005F444 (RaUnitSmartReturnStatus.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C00618BC (RaidUnitLogSenseCommandSrb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortSrbTranslateSrbToNtStatus(char a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx

  v1 = a1 & 0x3F;
  if ( v1 > 0xE )
  {
    v8 = v1 - 17;
    if ( !v8 )
      return 3221225664LL;
    v9 = v8 - 1;
    if ( !v9 )
      return 2147483653LL;
    v10 = v9 - 3;
    if ( v10 )
    {
      v11 = v10 - 11;
      if ( !v11 )
        return 3221225664LL;
      v12 = v11 - 1;
      if ( !v12 )
        return 3221225664LL;
      if ( v12 != 1 )
        return 3221225861LL;
    }
    return 3221225488LL;
  }
  if ( v1 == 14 )
    return 3221225653LL;
  result = 0LL;
  if ( (a1 & 0x3F) == 0 )
    return 259LL;
  v3 = v1 - 1;
  if ( v3 )
  {
    v4 = v3 - 5;
    if ( v4 )
    {
      v5 = v4 - 2;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( !v7 )
            return 3221225629LL;
          if ( v7 != 1 )
            return 3221225861LL;
        }
        return 3221225653LL;
      }
      return 3221225664LL;
    }
    return 3221225488LL;
  }
  return result;
}
