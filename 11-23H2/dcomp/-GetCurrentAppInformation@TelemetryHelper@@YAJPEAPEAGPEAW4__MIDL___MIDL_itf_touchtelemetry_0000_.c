/*
 * XREFs of ?GetCurrentAppInformation@TelemetryHelper@@YAJPEAPEAGPEAW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0005@@@Z @ 0x18001DF00
 * Callers:
 *     ?Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z @ 0x18001DCDC (-Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     GetWin32AppId @ 0x18001E1BC (GetWin32AppId.c)
 *     GetModernAppId @ 0x18001F368 (GetModernAppId.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     wil::details::lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___::_lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___ @ 0x1801B3618 (wil--details--lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___--_lambda_call__lambda_d8d4.c)
 */

__int64 __fastcall TelemetryHelper::GetCurrentAppInformation(
        TelemetryHelper *this,
        unsigned __int16 **a2,
        enum __MIDL___MIDL_itf_touchtelemetry_0000_0000_0005 *a3)
{
  HANDLE CurrentProcess; // rax
  unsigned int *v6; // rdi
  ULONG v7; // ebx
  HANDLE v8; // rax
  int ModernAppId; // eax
  unsigned int v10; // ebx
  ULONG ProcessInformationLength; // [rsp+30h] [rbp-59h] BYREF
  void *Block; // [rsp+38h] [rbp-51h] BYREF
  void **p_Block; // [rsp+40h] [rbp-49h] BYREF
  char v15; // [rsp+48h] [rbp-41h]
  _BYTE ProcessInformation[96]; // [rsp+50h] [rbp-39h] BYREF

  *(_QWORD *)this = 0LL;
  *(_DWORD *)a2 = 0;
  memset_0(ProcessInformation, 0, sizeof(ProcessInformation));
  ProcessInformationLength = 0;
  CurrentProcess = GetCurrentProcess();
  if ( NtQueryInformationProcess(
         CurrentProcess,
         (PROCESSINFOCLASS)64,
         ProcessInformation,
         0x60u,
         &ProcessInformationLength) != -2147483643 )
    return 2147500037LL;
  v6 = (unsigned int *)malloc(ProcessInformationLength);
  Block = v6;
  v15 = 1;
  p_Block = &Block;
  if ( !v6
    || (v7 = ProcessInformationLength,
        v8 = GetCurrentProcess(),
        NtQueryInformationProcess(v8, (PROCESSINFOCLASS)64, v6, v7, &ProcessInformationLength) < 0) )
  {
    wil::details::lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___::_lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___(&p_Block);
    return 2147500037LL;
  }
  if ( *(_WORD *)((char *)v6 + v6[20]) )
  {
    ModernAppId = GetModernAppId(v6, this, a2);
  }
  else
  {
    *(_DWORD *)a2 = 3;
    ModernAppId = GetWin32AppId(this);
  }
  v10 = (ModernAppId >> 31) & 0x80004005;
  free(Block);
  return v10;
}
