/*
 * XREFs of ??0MPCThrottleableInputHelper@@QEAA@IPEBG@Z @ 0x1800D11D8
 * Callers:
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x1800CB2F4 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800D1114 (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

MPCThrottleableInputHelper *__fastcall MPCThrottleableInputHelper::MPCThrottleableInputHelper(
        MPCThrottleableInputHelper *this,
        unsigned int a2,
        const unsigned __int16 *a3)
{
  char v3; // di
  LSTATUS ValueW; // eax
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  char v13; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+18h] BYREF
  int v15; // [rsp+74h] [rbp+1Ch]
  DWORD v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = HIDWORD(a3);
  v3 = 0;
  v16 = 4;
  *(_BYTE *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v14 = 0;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\DWM",
             L"TouchHoverReportThrottleTimeInMs",
             0x10u,
             0LL,
             &v14,
             &v16);
  v13 = 0;
  v12 = 0;
  if ( !ValueW )
    a2 = v14;
  v8 = qword_1802778B8 * a2;
  *((_QWORD *)this + 2) = v8 / 1000;
  v9 = wil::wnf_query_nothrow<unsigned long>(v8, &v13, &v12, v7);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x28,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcthrottleableinputhelper.cpp",
      (const char *)(unsigned int)v9);
  if ( v13 && v12 < 2 )
    v3 = 1;
  *(_BYTE *)this = v3;
  return this;
}
