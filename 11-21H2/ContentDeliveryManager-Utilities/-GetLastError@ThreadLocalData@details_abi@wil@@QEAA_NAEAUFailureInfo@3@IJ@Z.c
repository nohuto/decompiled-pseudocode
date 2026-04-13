/*
 * XREFs of ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x180036290
 * Callers:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x1800351D4 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180043970 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002245D (memset_0.c)
 */

char __fastcall wil::details_abi::ThreadLocalData::GetLastError(
        wil::details_abi::ThreadLocalData *this,
        struct wil::FailureInfo *a2,
        unsigned int a3,
        int a4)
{
  __int64 v4; // r10
  __int64 v6; // rbx
  __int64 v8; // rcx
  unsigned int v9; // eax

  v4 = *((_QWORD *)this + 3);
  if ( !v4 )
    return 0;
  v6 = v4 + 80LL * *((unsigned __int16 *)this + 17);
  if ( a3 >= *(_DWORD *)(v6 + 4) )
    return 0;
  if ( a4 )
  {
    v6 = 0LL;
    v8 = v4 + 80LL * *((unsigned __int16 *)this + 16);
    if ( v4 == v8 )
      return 0;
    do
    {
      if ( *(_DWORD *)(v4 + 8) == a4 )
      {
        v9 = *(_DWORD *)(v4 + 4);
        if ( v9 > a3 && (!v6 || v9 < *(_DWORD *)(v6 + 4)) )
          v6 = v4;
      }
      v4 += 80LL;
    }
    while ( v4 != v8 );
    if ( !v6 )
      return 0;
  }
  memset_0(a2, 0, 0x98uLL);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(v6 + 4);
  *((_DWORD *)a2 + 2) = *(_DWORD *)(v6 + 8);
  *((_QWORD *)a2 + 7) = *(_QWORD *)(v6 + 16);
  *((_DWORD *)a2 + 16) = *(unsigned __int16 *)(v6 + 24);
  *(_DWORD *)a2 = *(unsigned __int8 *)(v6 + 26);
  *((_QWORD *)a2 + 16) = *(_QWORD *)(v6 + 32);
  *((_QWORD *)a2 + 17) = *(_QWORD *)(v6 + 40);
  *((_QWORD *)a2 + 18) = *(_QWORD *)(v6 + 48);
  *((_QWORD *)a2 + 3) = *(_QWORD *)(v6 + 56);
  return 1;
}
