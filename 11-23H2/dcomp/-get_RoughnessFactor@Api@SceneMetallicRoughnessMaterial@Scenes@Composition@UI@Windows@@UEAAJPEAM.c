/*
 * XREFs of ?get_RoughnessFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18013F980
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0DN@$$CBGAEAY0BE@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DN@$$CBGAEAY0BE@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A2FA0 (--$InitApiData@AEAY0DN@$$CBGAEAY0BE@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DN@$$CB.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::Api::get_RoughnessFactor(
        Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::Api *this,
        float *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  volatile int *v8; // [rsp+40h] [rbp+8h] BYREF
  const char *v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  if ( !wil::ProcessShutdownInProgress(this) && _InterlockedIncrement(&dword_180220904) == 1 )
  {
    v9 = 0LL;
    v8 = &dword_180220904;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[61],unsigned short const (&)[20],std::nullptr_t,long volatile *>(
      v4,
      L"get_RoughnessFactor",
      &v9,
      &v8);
  }
  *a2 = 0.0;
  v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 27);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)this - 208) & 2) != 0 )
  {
    *a2 = *((float *)this + 13);
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v5;
}
