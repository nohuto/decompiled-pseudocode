/*
 * XREFs of ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18001FD18
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180013EB0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800417A4 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 */

__int64 __fastcall GetProcessModuleNameAndAppId(HANDLE ProcessHandle, unsigned __int16 **a2, unsigned __int16 **a3)
{
  unsigned __int16 *v3; // rdi
  unsigned __int16 *v4; // rsi
  const unsigned __int16 **v5; // r14
  NTSTATUS v9; // ecx
  signed int LastError; // eax
  int v11; // ebx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 **v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int16 *v18; // rax
  PULONG ReturnLength; // [rsp+20h] [rbp-20h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-20h]
  unsigned __int16 *v22[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG ProcessInformationLength; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int16 *v24; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v22[0] = 0LL;
  v24 = 0LL;
  if ( !ProcessHandle )
    goto LABEL_12;
  v9 = NtQueryInformationProcess(ProcessHandle, ProcessImageFileName, 0LL, 0, &ProcessInformationLength);
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -1073741820 )
  {
    v5 = (const unsigned __int16 **)LocalAlloc(0x40u, ProcessInformationLength);
    if ( !v5 )
    {
      v11 = -2147024882;
      goto LABEL_20;
    }
    v12 = NtQueryInformationProcess(
            ProcessHandle,
            ProcessImageFileName,
            v5,
            ProcessInformationLength,
            &ProcessInformationLength);
    if ( v12 < 0 )
    {
      v9 = v12;
      goto LABEL_4;
    }
    v11 = _AllocStringWorker<CTCoAllocPolicy>(
            v14,
            v13,
            v5[1],
            (unsigned __int64)*((unsigned __int16 *)v5 + 1) >> 1,
            (__int64)ReturnLengtha,
            v22);
    if ( v11 < 0 )
      goto LABEL_19;
    v3 = v22[0];
    if ( v22[0] )
      goto LABEL_14;
LABEL_12:
    v11 = _AllocStringWorker<CTCoAllocPolicy>(
            (__int64)ProcessHandle,
            (__int64)a2,
            word_18004DC10,
            0LL,
            (__int64)ReturnLength,
            v22);
    if ( v11 >= 0 )
    {
      v3 = v22[0];
LABEL_14:
      CallerIdentity::GetProcessAppId(ProcessHandle, &v24, v15);
      v18 = v24;
      if ( !v24 )
      {
        v11 = _AllocStringWorker<CTCoAllocPolicy>(v17, v16, word_18004DC10, 0LL, (__int64)ReturnLength, &v24);
        if ( v11 < 0 )
        {
          v4 = v24;
          goto LABEL_20;
        }
        v18 = v24;
      }
      *a2 = v3;
      v3 = 0LL;
      *a3 = v18;
      goto LABEL_20;
    }
LABEL_19:
    v3 = v22[0];
    goto LABEL_20;
  }
LABEL_4:
  RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v9);
  LastError = GetLastError();
  v11 = LastError;
  if ( LastError > 0 )
    v11 = (unsigned __int16)LastError | 0x80070000;
LABEL_20:
  CoTaskMemFree(v3);
  CoTaskMemFree(v4);
  LocalFree(v5);
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v11);
    }
    AudPolicyLogError("GetProcessModuleNameAndAppId", 351, v11);
  }
  return (unsigned int)v11;
}
