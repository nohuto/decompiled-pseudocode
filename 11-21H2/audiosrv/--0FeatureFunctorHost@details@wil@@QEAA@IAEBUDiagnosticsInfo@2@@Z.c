/*
 * XREFs of ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800506D4
 * Callers:
 *     AudioServerGetMixFormat @ 0x180010C40 (AudioServerGetMixFormat.c)
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18004F4BC (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005207C (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x18005A8FC (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 */

wil::details::FeatureFunctorHost *__fastcall wil::details::FeatureFunctorHost::FeatureFunctorHost(
        wil::details::FeatureFunctorHost *this,
        BOOL a2,
        const struct DiagnosticsInfo *a3)
{
  wil::details::FeatureFunctorHost *v3; // rbx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  int v7; // ecx
  __int64 v8; // rax
  wil::details::FeatureFunctorHost *result; // rax

  v3 = this;
  *(_QWORD *)this = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(this) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(this, a2);
  *((_DWORD *)v3 + 4) = 0;
  *((_DWORD *)v3 + 5) = 0;
  *((_QWORD *)v3 + 1) = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    *((_DWORD *)v3 + 5) = *((_DWORD *)ThreadLocalDataCache + 4);
    v7 = **((_DWORD **)ThreadLocalDataCache + 1);
    v8 = *((_QWORD *)v3 + 1);
    *((_DWORD *)v3 + 4) = v7;
    *(_DWORD *)(v8 + 16) = v7;
  }
  *((_DWORD *)v3 + 8) = a2;
  result = v3;
  *((_QWORD *)v3 + 3) = a3;
  return result;
}
