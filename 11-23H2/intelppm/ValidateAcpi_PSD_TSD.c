/*
 * XREFs of ValidateAcpi_PSD_TSD @ 0x1C002947C
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C0029400 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C003E378 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_DsD @ 0x1C0009C08 (WPP_RECORDER_SF_DsD.c)
 */

__int64 __fastcall ValidateAcpi_PSD_TSD(unsigned int *a1, char a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  bool v5; // zf
  unsigned __int16 v6; // r9
  unsigned int Number; // eax
  const char *v8; // rcx
  int v9; // [rsp+20h] [rbp-28h]

  v3 = *a1;
  if ( (_DWORD)v3 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = a2 == 0;
      v6 = 29;
      goto LABEL_18;
    }
    return 3221225473LL;
  }
  if ( a1[1] != 5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = a2 == 0;
      v6 = 30;
LABEL_18:
      Number = KeGetPcr()->Prcb.Number;
      v8 = "_PSD";
      if ( v5 )
        v8 = "_TSD";
      WPP_RECORDER_SF_DsD((__int64)WPP_GLOBAL_Control->DeviceExtension, v3, (__int64)"_TSD", v6, v9, Number, v8);
    }
    return 3221225473LL;
  }
  v3 = a1[4];
  if ( (unsigned int)(v3 - 252) > 2 && (_DWORD)v3 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = a2 == 0;
      v6 = 31;
      goto LABEL_18;
    }
    return 3221225473LL;
  }
  v3 = a1[5];
  if ( (unsigned int)v3 > 0x800 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = a2 == 0;
      v6 = 32;
      goto LABEL_18;
    }
    return 3221225473LL;
  }
  result = 0LL;
  if ( !(_DWORD)v3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = a2 == 0;
      v6 = 33;
      goto LABEL_18;
    }
    return 3221225473LL;
  }
  return result;
}
