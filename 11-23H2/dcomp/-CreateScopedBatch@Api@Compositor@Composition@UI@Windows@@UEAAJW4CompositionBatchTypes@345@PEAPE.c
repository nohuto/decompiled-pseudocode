/*
 * XREFs of ?CreateScopedBatch@Api@Compositor@Composition@UI@Windows@@UEAAJW4CompositionBatchTypes@345@PEAPEAUICompositionScopedBatch@345@@Z @ 0x180016480
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateScopedBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionScopedBatch@234@@Z @ 0x180016554 (-CreateScopedBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionScopedBatch@23.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreateScopedBatch(
        __int64 a1,
        int a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  int v7; // edi
  Windows::UI::Composition::BatchController *v8; // rcx
  char v9; // al
  int v11; // edi
  const char *v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::UI::Composition::CompositionScopedBatch *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1 - 1080;
  v4 = 0;
  *a3 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry((Microsoft::WRL2::ContextSession *)(a1 - 1080));
  if ( (*(_BYTE *)(v3 + 32) & 2) != 0 )
  {
    if ( a2 == 1 || a2 == 2 || a2 == 5 )
    {
      v7 = a2 - 1;
      if ( v7 )
      {
        v11 = v7 - 1;
        if ( v11 )
        {
          if ( v11 != 3 )
            Microsoft::WRL2::FailFast::Do();
          v8 = (Windows::UI::Composition::BatchController *)(v3 + 680);
        }
        else
        {
          v8 = (Windows::UI::Composition::BatchController *)(v3 + 752);
        }
      }
      else
      {
        v8 = (Windows::UI::Composition::BatchController *)(v3 + 608);
      }
      v14 = 0LL;
      Windows::UI::Composition::BatchController::CreateScopedBatch(v8, &v14);
      v9 = *(_BYTE *)(v3 + 452);
      if ( (v9 & 1) == 0 )
      {
        *(_BYTE *)(v3 + 452) = v9 | 1;
        if ( !*(_DWORD *)(v3 + 448) )
          Windows::UI::Composition::CompositorCommon::EnableMessageGroup((Windows::UI::Composition::CompositorCommon *)v3);
      }
      *a3 = ((unsigned __int64)v14 + 200) & -(__int64)(v14 != 0LL);
    }
    else
    {
      v4 = -2147024809;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0xC5B,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)0x80070057LL,
        (int)"Unsupported CompositionBatchType",
        v12);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC40,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)0x80070057LL);
      DoStackCaptureDirect(-2147024809, 0x476u);
    }
    Microsoft::WRL2::ContextSession::EndApiEntry((Microsoft::WRL2::ContextSession *)v3);
    return v4;
  }
  else
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry((Microsoft::WRL2::ContextSession *)v3);
    return 2147483667LL;
  }
}
