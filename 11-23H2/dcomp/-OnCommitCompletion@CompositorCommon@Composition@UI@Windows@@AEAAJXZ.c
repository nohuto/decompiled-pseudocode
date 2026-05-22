/*
 * XREFs of ?OnCommitCompletion@CompositorCommon@Composition@UI@Windows@@AEAAJXZ @ 0x18001C18C
 * Callers:
 *     ?CommitCompletionCallback@CompositorCommon@Composition@UI@Windows@@CAJPEAXK0@Z @ 0x18001C180 (-CommitCompletionCallback@CompositorCommon@Composition@UI@Windows@@CAJPEAXK0@Z.c)
 * Callees:
 *     ?UnregisterCommitCompletionWait@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001BCF4 (-UnregisterCommitCompletionWait@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_7a47a105f9b5dad1ba9e001874e9af85___ @ 0x18001C33C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_7a47a105f9b5dad1ba9e001874e9af85_.c)
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::OnCommitCompletion(
        Windows::UI::Composition::CompositorCommon *this)
{
  __int64 v2; // rsi
  void *v3; // rcx
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  Microsoft::WRL2::ContextSession *v8; // rcx
  int v10; // eax
  const void *v11; // rdx
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL2::ContextSession::BeginApiEntry(this);
  v2 = *((_QWORD *)this + 3);
  if ( *(int *)(v2 + 88) > 0 && !*(_BYTE *)(v2 + 97) )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  ++*(_DWORD *)(v2 + 92);
  if ( *((_QWORD *)this + 126) )
  {
    v3 = (void *)*((_QWORD *)this + 128);
    v12 = 0;
    ResetEvent(v3);
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *))(**(_QWORD **)(*((_QWORD *)this + 57) + 160LL)
                                                                    + 56LL))(
           *(_QWORD *)(*((_QWORD *)this + 57) + 160LL),
           1LL,
           &v12);
    if ( v4 < 0 )
    {
      v10 = DirectComposition::CDevice::HRESULTFromNTSTATUS(v4);
      Microsoft::WRL2::FailFast::ForHR(v10, v11);
    }
    if ( !*((_QWORD *)this + 126) )
      goto LABEL_13;
    v5 = *((_QWORD *)this + 126);
    do
    {
      v6 = v5;
      if ( *(_DWORD *)(v5 + 176) > v12 )
        break;
      v7 = *(_QWORD *)(v5 + 168);
      *((_QWORD *)this + 126) = v7;
      if ( v7 )
        *(_QWORD *)(v7 + 160) = 0LL;
      else
        *((_QWORD *)this + 127) = 0LL;
      *(_QWORD *)(v5 + 168) = 0LL;
      *(_QWORD *)(v5 + 160) = 0LL;
      if ( !*(_DWORD *)(v5 + 216) )
      {
        v8 = *(Microsoft::WRL2::ContextSession **)(v5 + 24);
        *(_DWORD *)(v5 + 216) = 1;
        Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_7a47a105f9b5dad1ba9e001874e9af85___(v8);
      }
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)v5);
      v6 = *((_QWORD *)this + 126);
      v5 = v6;
    }
    while ( v6 );
    if ( !v6 )
LABEL_13:
      Windows::UI::Composition::CompositorCommon::UnregisterCommitCompletionWait(this);
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(this);
  --*(_DWORD *)(v2 + 92);
  return 0LL;
}
