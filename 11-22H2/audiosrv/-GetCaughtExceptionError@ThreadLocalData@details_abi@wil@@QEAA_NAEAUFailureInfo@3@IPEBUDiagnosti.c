/*
 * XREFs of ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x18011DA70
 * Callers:
 *     ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x18011DA3C (-GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _alloca_probe @ 0x180075970 (_alloca_probe.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x1800D7AA0 (--$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x18011DEDC (-GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18011F1FC (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

bool __fastcall wil::details_abi::ThreadLocalData::GetCaughtExceptionError(
        wil::details_abi::ThreadLocalData *this,
        struct wil::FailureInfo *a2,
        unsigned int a3,
        const struct DiagnosticsInfo *a4,
        int a5,
        void *a6)
{
  wil *v10; // rcx
  int v11; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rax
  unsigned __int16 v21; // ax
  int *v22; // rax
  __int64 v23; // [rsp+20h] [rbp-E0h]
  __int64 v24; // [rsp+28h] [rbp-D8h]
  __int64 v25; // [rsp+40h] [rbp-C0h]
  __int128 v26; // [rsp+50h] [rbp-B0h]
  _BYTE v27[16]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v28[9]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+110h] [rbp+10h]
  _WORD v30[2048]; // [rsp+120h] [rbp+20h] BYREF

  memset_0(v28, 0, 0x98uLL);
  if ( wil::details_abi::ThreadLocalData::GetLastError(this, (struct wil::FailureInfo *)v28, a3, 0)
    && (v11 = wil::ResultFromCaughtException(v10), DWORD2(v28[0]) == v11) )
  {
    v12 = v28[1];
    *(_OWORD *)a2 = v28[0];
    v13 = v28[2];
    *((_OWORD *)a2 + 1) = v12;
    v14 = v28[3];
    *((_OWORD *)a2 + 2) = v13;
    v15 = v28[4];
    *((_OWORD *)a2 + 3) = v14;
    v16 = v28[5];
    *((_OWORD *)a2 + 4) = v15;
    v17 = v28[6];
    *((_OWORD *)a2 + 5) = v16;
    v18 = v28[8];
    *((_OWORD *)a2 + 6) = v17;
    v19 = v29;
    *((_OWORD *)a2 + 7) = v28[7];
    *((_OWORD *)a2 + 8) = v18;
    *((_QWORD *)a2 + 18) = v19;
    return 1;
  }
  else
  {
    v21 = 0;
    v26 = 0LL;
    if ( a4 )
    {
      v21 = (unsigned __int16)a4[3];
      v26 = *(_OWORD *)&a4->cost;
    }
    v30[0] = 0;
    v22 = (int *)wil::details::ReportFailure_CaughtExceptionCommon<2>(
                   (__int64)v27,
                   v26,
                   v21,
                   SDWORD2(v26),
                   v23,
                   v24,
                   (__int64)a6,
                   (__int64)v30,
                   v25,
                   2);
    return wil::details_abi::ThreadLocalData::GetLastError(this, a2, a3, *v22);
  }
}
