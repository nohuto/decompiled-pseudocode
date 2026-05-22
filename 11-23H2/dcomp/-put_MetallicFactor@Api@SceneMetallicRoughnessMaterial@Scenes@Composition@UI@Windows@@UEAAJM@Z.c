/*
 * XREFs of ?put_MetallicFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJM@Z @ 0x18013FC90
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0DN@$$CBGAEAY0BD@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DN@$$CBGAEAY0BD@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A2F3C (--$InitApiData@AEAY0DN@$$CBGAEAY0BD@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DN@$$CB.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::Api::put_MetallicFactor(
        Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::Api *this,
        float a2)
{
  __int64 v3; // rcx
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int updated; // eax
  _QWORD v8[4]; // [rsp+20h] [rbp-30h] BYREF
  volatile int *v9; // [rsp+60h] [rbp+10h] BYREF
  void **v10; // [rsp+70h] [rbp+20h] BYREF

  if ( !wil::ProcessShutdownInProgress(this) && _InterlockedIncrement(&dword_180220908) == 1 )
  {
    v10 = 0LL;
    v9 = &dword_180220908;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[61],unsigned short const (&)[19],std::nullptr_t,long volatile *>(
      v3,
      L"put_MetallicFactor",
      (const char **)&v10,
      &v9);
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 27);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 208) & 2) != 0 )
  {
    *(float *)&v9 = a2;
    v8[0] = (char *)this + 48;
    v8[1] = &v9;
    v8[2] = &v9;
    v10 = (void **)&Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::sc_MetallicFactor;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
                (__int64 *)this - 30,
                (__int64)v8,
                &v10);
    v5 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0xA1u);
    else
      v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
