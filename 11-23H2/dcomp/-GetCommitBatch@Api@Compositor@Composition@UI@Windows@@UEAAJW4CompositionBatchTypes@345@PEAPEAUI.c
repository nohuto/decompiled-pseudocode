/*
 * XREFs of ?GetCommitBatch@Api@Compositor@Composition@UI@Windows@@UEAAJW4CompositionBatchTypes@345@PEAPEAUICompositionCommitBatch@345@@Z @ 0x180002C30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCommitBatch@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTypes@234@PEAPEAVCompositionCommitBatch@234@@Z @ 0x180002CBC (-GetCommitBatch@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTypes@234@PEAPEA.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::GetCommitBatch(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 *a3)
{
  Microsoft::WRL2::ContextSession *v3; // rdi
  int CommitBatch; // eax
  unsigned int v7; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = (Microsoft::WRL2::ContextSession *)(a1 - 1080);
  Microsoft::WRL2::ContextSession::BeginApiEntry((Microsoft::WRL2::ContextSession *)(a1 - 1080));
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v9 = 0LL;
    CommitBatch = Windows::UI::Composition::CompositorCommon::GetCommitBatch(v3, a2, &v9);
    v7 = CommitBatch;
    if ( CommitBatch < 0 )
    {
      DoStackCaptureDirect(CommitBatch, 0x551u);
      if ( v9 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
    }
    else
    {
      *a3 = ((unsigned __int64)v9 + 200) & -(__int64)(v9 != 0LL);
      v7 = 0;
    }
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v7;
}
