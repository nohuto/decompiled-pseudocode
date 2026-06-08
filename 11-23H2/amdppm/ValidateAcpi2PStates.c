/*
 * XREFs of ValidateAcpi2PStates @ 0x1C002E620
 * Callers:
 *     InitAcpiPerfStates @ 0x1C00367AC (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0005D08 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     ValidatePssCore @ 0x1C0030498 (ValidatePssCore.c)
 *     Validate_PCT_PTC @ 0x1C0030884 (Validate_PCT_PTC.c)
 */

__int64 __fastcall ValidateAcpi2PStates(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // ebx
  unsigned __int16 v7; // r9
  unsigned int Number; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v6 = ValidatePssCore(a2, "_PSS");
  if ( v6 >= 0 )
  {
    v6 = Validate_PCT_PTC(a1);
    if ( v6 >= 0 )
    {
      if ( !qword_1C00126B0 )
        return 0;
      v6 = qword_1C00126B0(a1, a2, a3);
      if ( v6 >= 0 )
        return 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v6;
      v7 = 14;
    }
    else
    {
      *a3 |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v6;
      v7 = 13;
    }
    v10 = v6;
    Number = KeGetPcr()->Prcb.Number;
    goto LABEL_4;
  }
  *a3 |= 0x40u;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 12;
    v10 = v6;
    Number = KeGetPcr()->Prcb.Number;
LABEL_4:
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v7,
      (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids,
      Number,
      v10);
  }
  return (unsigned int)v6;
}
