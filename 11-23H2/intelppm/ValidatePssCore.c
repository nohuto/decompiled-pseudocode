/*
 * XREFs of ValidatePssCore @ 0x1C00393E8
 * Callers:
 *     ValidateAcpi2PStates @ 0x1C0037E28 (ValidateAcpi2PStates.c)
 *     ValidateXPssPStates @ 0x1C00396E0 (ValidateXPssPStates.c)
 * Callees:
 *     WPP_RECORDER_SF_sD @ 0x1C000A8F0 (WPP_RECORDER_SF_sD.c)
 *     WPP_RECORDER_SF_sDD @ 0x1C000AA7C (WPP_RECORDER_SF_sDD.c)
 *     Display_PSS @ 0x1C003DBFC (Display_PSS.c)
 */

__int64 __fastcall ValidatePssCore(unsigned int *a1, const char *a2)
{
  unsigned int v2; // r8d
  unsigned int v5; // r10d
  __int64 v6; // rdx
  _DWORD *i; // r9
  unsigned int v8; // ecx
  int v10; // [rsp+20h] [rbp-28h]
  unsigned int Number; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( a1[2] )
  {
    v5 = *a1;
    v6 = 1LL;
    if ( *a1 > 1 )
    {
      for ( i = a1 + 15; ; i += 12 )
      {
        v8 = *(i - 1);
        if ( v8 >= a1[12 * (unsigned int)(v6 - 1) + 2] || *i > a1[12 * (unsigned int)(v6 - 1) + 3] || !v8 )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= v5 )
          return v2;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sDD((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, 0LL, (__int64)i, v10, a2);
      Display_PSS(a1);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Number = KeGetPcr()->Prcb.Number;
      WPP_RECORDER_SF_sD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x29u,
        (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids,
        a2,
        Number);
    }
    return (unsigned int)-1073741811;
  }
  return v2;
}
