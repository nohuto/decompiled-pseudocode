/*
 * XREFs of ValidateMsrGenAddr @ 0x1C0038B68
 * Callers:
 *     ValidateMsr_PCT @ 0x1C0038C48 (ValidateMsr_PCT.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0005484 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall ValidateMsrGenAddr(_BYTE *a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // r9
  unsigned int Number; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  if ( *a1 == 127 )
  {
    if ( a1[1] == 64 )
    {
      v1 = 0;
      if ( a1[2] )
      {
        v1 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v2 = 39;
          goto LABEL_13;
        }
      }
      else if ( a1[3] != 64 )
      {
        v1 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v2 = 40;
          goto LABEL_13;
        }
      }
    }
    else
    {
      v1 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v2 = 38;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v1 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v2 = 37;
LABEL_13:
      v5 = -1073741811;
      Number = KeGetPcr()->Prcb.Number;
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v2,
        (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids,
        Number,
        v5);
    }
  }
  return v1;
}
