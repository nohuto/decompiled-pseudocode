/*
 * XREFs of ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00C8BFC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ValidateExternalLogFont @ 0x1C00C3544 (ValidateExternalLogFont.c)
 *     ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x1C00C8B70 (-xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00CBC78 (DwmAsyncNotifyAnimationChange.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C0157CE0 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C0157F48 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C0158F68 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D2534 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetSPIMetrics(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        struct tagMINIMIZEDMETRICS *a3,
        int a4,
        int *a5)
{
  int v8; // ebx
  void *v9; // rax
  int v10; // ecx
  int v11; // eax

  *a5 = 0;
  switch ( (_DWORD)a2 )
  {
    case ',':
      v11 = xxxSPISetMinMetrics(a1, a3, a4);
      goto LABEL_11;
    case '"':
      if ( !(unsigned int)ValidateExternalLogFont((__int64)a3) )
        break;
      v11 = SPISetIconTitleFont(a1, (struct tagLOGFONTW *)a3, a4);
LABEL_11:
      v10 = v11;
      goto LABEL_12;
    case '*':
      if ( !(unsigned int)ValidateExternalLogFont((__int64)a3 + 24)
        || !(unsigned int)ValidateExternalLogFont((__int64)a3 + 124)
        || !(unsigned int)ValidateExternalLogFont((__int64)a3 + 224)
        || !(unsigned int)ValidateExternalLogFont((__int64)a3 + 316)
        || !(unsigned int)ValidateExternalLogFont((__int64)a3 + 408) )
      {
        break;
      }
      v11 = xxxSPISetNCMetrics(a1, a3, a4);
      goto LABEL_11;
    case '.':
      if ( !(unsigned int)ValidateExternalLogFont((__int64)a3 + 16) )
        break;
      v11 = SPISetIconMetrics(a1, a3, a4);
      goto LABEL_11;
    case 'I':
      v8 = *((_DWORD *)a3 + 1);
      v9 = (void *)ReferenceDwmApiPort(a1);
      DwmAsyncNotifyAnimationChange(v9);
      if ( a4 )
      {
        v10 = SetWindowMetricInt(a1, 0x95u, v8);
        if ( !v10 )
          return 1LL;
      }
      else
      {
        v10 = 0;
      }
      if ( v8 )
        gdwPUDFlags |= 0x10000u;
      else
        gdwPUDFlags &= ~0x10000u;
LABEL_12:
      *a5 = v10;
      return 1LL;
  }
  UserSetLastError(87LL, a2);
  return 0LL;
}
