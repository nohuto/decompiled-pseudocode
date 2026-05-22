/*
 * XREFs of ?EnsurePreviousCommitCompletedAsync@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@6@@Z @ 0x1800B67C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?CreateCommitCompletionWaiter@CompositorCommon@Composition@UI@Windows@@QEAAJ_NPEAPEAVCommitCompletionWaiter@234@@Z @ 0x1800838E8 (-CreateCommitCompletionWaiter@CompositorCommon@Composition@UI@Windows@@QEAAJ_NPEAPEAVCommitCompl.c)
 */

__int64 __fastcall Windows::UI::Composition::Core::CompositorController::Api::EnsurePreviousCommitCompletedAsync(
        Windows::UI::Composition::Core::CompositorController::Api *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  Windows::UI::Composition::CompositorCommon *v6; // rcx
  int v7; // eax
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 8) & 2) != 0 )
  {
    v6 = (Windows::UI::Composition::CompositorCommon *)*((_QWORD *)this + 4);
    v9 = 0LL;
    v7 = Windows::UI::Composition::CompositorCommon::CreateCommitCompletionWaiter(v6, 1, &v9);
    v5 = v7;
    if ( v7 < 0 )
    {
      DoStackCaptureDirect(v7, 0xF6u);
      if ( v9 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
    }
    else
    {
      *a2 = (struct Windows::Foundation::IAsyncAction *)(((unsigned __int64)v9 + 128) & -(__int64)(v9 != 0LL));
      v5 = 0;
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
