/*
 * XREFs of ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x1800E64FC
 * Callers:
 *     ?SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z @ 0x1800E1950 (-SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800CD748 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___ @ 0x1800E6098 (wil--details--ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___--_ScopeExitFn__lambda_c7ef.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1801A09C0 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?SetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEAXKPEADK@Z @ 0x1801A1350 (-SetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEAXKPEADK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TrySetTrackingEnabled(GazeHidDevice *this, unsigned __int8 a2)
{
  int v2; // esi
  char *v4; // r14
  __int64 v5; // rdx
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // eax
  void *v11; // [rsp+50h] [rbp-20h] BYREF
  void **v12; // [rsp+58h] [rbp-18h] BYREF
  char v13; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int v15; // [rsp+A0h] [rbp+30h] BYREF
  int v16; // [rsp+B0h] [rbp+40h] BYREF
  int v17; // [rsp+B8h] [rbp+48h] BYREF

  v2 = a2;
  v11 = 0LL;
  v15 = 0;
  v12 = &v11;
  v13 = 1;
  v4 = (char *)this + 128;
  v6 = GazeHidParser::CreateReportForProperty((char *)this + 128, 1LL, &v11, &v15);
  if ( v6 < 0 )
    goto LABEL_6;
  v16 = v2;
  v7 = v15;
  v8 = GazeHidParser::SetPropertyValue(v4, v5, &v16);
  v6 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)v8);
LABEL_6:
    wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___((__int64)&v12);
    return (unsigned int)v6;
  }
  v17 = 0;
  v9 = NtRIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721297LL, v11, v7, 0LL, 0, &v17, 0);
  if ( v9 < 0 )
  {
    v6 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x110,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
           (const char *)(unsigned int)v9);
    goto LABEL_6;
  }
  if ( v11 )
    operator delete[](v11);
  return 0LL;
}
