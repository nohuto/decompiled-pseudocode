/*
 * XREFs of ?put_BaseColorFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJUVector4@Numerics@Foundation@6@@Z @ 0x18013FA40
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0DN@$$CBGAEAY0BE@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DN@$$CBGAEAY0BE@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A2FA0 (--$InitApiData@AEAY0DN@$$CBGAEAY0BE@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DN@$$CB.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector4@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector4@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18013ED2C (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector4@Numerics@Foundation@Windows@@@Composi.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::Api::put_BaseColorFactor(
        wil *a1,
        __int128 *a2)
{
  __int64 v4; // rcx
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v6; // edi
  __int128 v7; // xmm0
  int updated; // eax
  __int128 v10; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v11[4]; // [rsp+30h] [rbp-20h] BYREF
  PVOID *v12; // [rsp+70h] [rbp+20h] BYREF
  const char *v13; // [rsp+80h] [rbp+30h] BYREF

  if ( !wil::ProcessShutdownInProgress(a1) && _InterlockedIncrement(&dword_180220900) == 1 )
  {
    v13 = 0LL;
    v12 = (PVOID *)&dword_180220900;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[61],unsigned short const (&)[20],std::nullptr_t,long volatile *>(
      v4,
      L"put_BaseColorFactor",
      &v13,
      (volatile int **)&v12);
  }
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)a1 - 27);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)a1 - 208) & 2) != 0 )
  {
    v7 = *a2;
    v11[0] = (char *)a1 + 32;
    v11[1] = &v10;
    v11[2] = &v10;
    v12 = (PVOID *)&Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::sc_BaseColorFactor;
    v10 = v7;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector4>,Windows::UI::Composition::PropertyUpdateInfo>(
                (wil *)((char *)a1 - 240),
                (__int64)v11,
                &v12);
    v6 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0xA0u);
    else
      v6 = 0;
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v6;
}
