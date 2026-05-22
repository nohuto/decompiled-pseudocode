/*
 * XREFs of ?put_PrimitiveTopology@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJW4DirectXPrimitiveTopology@DirectX@Graphics@6@@Z @ 0x180132F50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0CI@$$CBGAEAY0BG@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBGAEAY0BG@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A2CE4 (--$InitApiData@AEAY0CI@$$CBGAEAY0BG@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CB.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?SetScalarIntegerProperty@ProxyObject@Composition@UI@Windows@@IEAAXI_J@Z @ 0x1801473F8 (-SetScalarIntegerProperty@ProxyObject@Composition@UI@Windows@@IEAAXI_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMesh::Api::put_PrimitiveTopology(wil *a1, int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rcx
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  const char *v8; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile int *v10; // [rsp+50h] [rbp+8h] BYREF
  const char *v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  v5 = 0;
  if ( !wil::ProcessShutdownInProgress(a1) && _InterlockedIncrement(&dword_1802208D4) == 1 )
  {
    v11 = 0LL;
    v10 = &dword_1802208D4;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[40],unsigned short const (&)[22],std::nullptr_t,long volatile *>(
      v4,
      L"put_PrimitiveTopology",
      &v11,
      &v10);
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)a1 - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)a1 - 120) & 2) != 0 )
  {
    if ( (_DWORD)v2 )
    {
      if ( (_DWORD)v2 != *((_DWORD *)a1 + 6) )
      {
        Windows::UI::Composition::ProxyObject::SetScalarIntegerProperty((wil *)((char *)a1 - 152), 0, v2);
        *((_DWORD *)a1 + 6) = v2;
      }
    }
    else
    {
      v5 = -2147024809;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x48,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialmesh.cpp",
        (const char *)0x80070057LL,
        (int)"Unsupported value for primitive topology.",
        v8);
      DoStackCaptureDirect(-2147024809, 0x106u);
    }
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
