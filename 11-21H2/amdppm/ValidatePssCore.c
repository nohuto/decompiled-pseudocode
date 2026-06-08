/*
 * XREFs of ValidatePssCore @ 0x1C002F53C
 * Callers:
 *     ValidateAcpi2PStates @ 0x1C002D710 (ValidateAcpi2PStates.c)
 *     ValidateXPssPStates @ 0x1C002F860 (ValidateXPssPStates.c)
 * Callees:
 *     WPP_RECORDER_SF_sD @ 0x1C0006470 (WPP_RECORDER_SF_sD.c)
 *     WPP_RECORDER_SF_sDD @ 0x1C0008158 (WPP_RECORDER_SF_sDD.c)
 *     Display_PSS @ 0x1C002A704 (Display_PSS.c)
 */

__int64 __fastcall ValidatePssCore(unsigned int *a1, const char *a2)
{
  __int64 v2; // r8
  __int64 i; // rdx
  unsigned int v6; // edi
  int v8; // [rsp+20h] [rbp-28h]
  unsigned int Number; // [rsp+30h] [rbp-18h]

  v2 = 0LL;
  if ( a1[2] )
  {
    for ( i = 1LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
    {
      v6 = a1[12 * (unsigned int)i + 2];
      if ( v6 >= a1[12 * (unsigned int)(i - 1) + 2]
        || a1[12 * (unsigned int)i + 3] > a1[12 * (unsigned int)(i - 1) + 3]
        || !v6 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sDD((__int64)WPP_GLOBAL_Control->DeviceExtension, i, 0LL, 6LL * (unsigned int)(i - 1), v8, a2);
        Display_PSS(a1, i, v2);
        LODWORD(v2) = -1073741823;
        return (unsigned int)v2;
      }
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
        (__int64)&WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids,
        a2,
        Number);
    }
    LODWORD(v2) = -1073741811;
  }
  return (unsigned int)v2;
}
