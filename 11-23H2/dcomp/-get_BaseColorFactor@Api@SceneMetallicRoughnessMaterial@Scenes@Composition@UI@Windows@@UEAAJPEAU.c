/*
 * XREFs of ?get_BaseColorFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUVector4@Numerics@Foundation@6@@Z @ 0x18013F640
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0DN@$$CBGAEAY0BE@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DN@$$CBGAEAY0BE@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A2FA0 (--$InitApiData@AEAY0DN@$$CBGAEAY0BE@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DN@$$CB.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::Api::get_BaseColorFactor(
        __m128i *this,
        struct Windows::Foundation::Numerics::Vector4 *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  volatile int *v8; // [rsp+40h] [rbp+8h] BYREF
  const char *v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  if ( !wil::ProcessShutdownInProgress((wil *)this) && _InterlockedIncrement(&dword_180220914) == 1 )
  {
    v9 = 0LL;
    v8 = &dword_180220914;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[61],unsigned short const (&)[20],std::nullptr_t,long volatile *>(
      v4,
      L"get_BaseColorFactor",
      &v9,
      &v8);
  }
  *(_OWORD *)a2 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)this[-14].m128i_i64[1];
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (this[-13].m128i_i8[0] & 2) != 0 )
  {
    *(__m128i *)a2 = _mm_loadu_si128(this + 2);
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
