/*
 * XREFs of ValidateAcpi_PSD_TSD @ 0x1C002EF98
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C0035F48 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C00361C0 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_DsD @ 0x1C0008088 (WPP_RECORDER_SF_DsD.c)
 */

__int64 __fastcall ValidateAcpi_PSD_TSD(unsigned int *a1, char a2)
{
  __int64 v3; // rdx
  bool v4; // zf
  unsigned __int16 v5; // r9
  __int64 result; // rax
  unsigned int Number; // eax
  const char *v8; // rcx
  int v9; // [rsp+20h] [rbp-28h]

  v3 = *a1;
  if ( (_DWORD)v3 == 1 )
  {
    if ( a1[1] == 5 )
    {
      v3 = a1[4];
      if ( (_DWORD)v3 == 1 || (unsigned int)(v3 - 252) <= 2 )
      {
        v3 = a1[5];
        if ( (unsigned int)v3 <= 0x800 )
        {
          result = 0LL;
          if ( (_DWORD)v3 )
            return result;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v4 = a2 == 0;
            v5 = 33;
            goto LABEL_17;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v4 = a2 == 0;
          v5 = 32;
          goto LABEL_17;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v4 = a2 == 0;
        v5 = 31;
        goto LABEL_17;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = a2 == 0;
      v5 = 30;
LABEL_17:
      Number = KeGetPcr()->Prcb.Number;
      v8 = "_PSD";
      if ( v4 )
        v8 = "_TSD";
      WPP_RECORDER_SF_DsD((__int64)WPP_GLOBAL_Control->DeviceExtension, v3, (__int64)"_TSD", v5, v9, Number, v8);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = a2 == 0;
    v5 = 29;
    goto LABEL_17;
  }
  return 3221225473LL;
}
