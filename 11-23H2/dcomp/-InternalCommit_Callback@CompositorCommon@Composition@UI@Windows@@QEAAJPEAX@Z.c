/*
 * XREFs of ?InternalCommit_Callback@CompositorCommon@Composition@UI@Windows@@QEAAJPEAX@Z @ 0x1800803B4
 * Callers:
 *     ?Commit@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJXZ @ 0x180080340 (-Commit@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?HandleCommitNeeded_Callback@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x180080390 (-HandleCommitNeeded_Callback@CompositorCommon@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?InternalCommit@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJPEAX@Z @ 0x18015BB80 (-InternalCommit@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?DisableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x180080450 (-DisableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?BeginNewCycle@BatchController@Composition@UI@Windows@@QEAAXXZ @ 0x180080488 (-BeginNewCycle@BatchController@Composition@UI@Windows@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_56af6cbb798eeaf6704c85839a4943fd___ @ 0x18011F6DC (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_56af6cbb798eeaf6704c85839a4943fd_.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::InternalCommit_Callback(
        DirectComposition::CDevice **this,
        void *a2)
{
  int v3; // eax
  int v4; // edi
  int v6; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = DirectComposition::CDevice::Commit(this[57], ((_BYTE)this[129] & 2) != 0, a2);
  *((_BYTE *)this + 1032) &= ~2u;
  v4 = v3;
  Windows::UI::Composition::BatchController::BeginNewCycle((Windows::UI::Composition::BatchController *)(this + 76));
  Windows::UI::Composition::BatchController::BeginNewCycle((Windows::UI::Composition::BatchController *)(this + 85));
  Windows::UI::Composition::BatchController::BeginNewCycle((Windows::UI::Composition::BatchController *)(this + 94));
  if ( v4 >= 0 && (*((_BYTE *)this + 452) & 2) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(DirectComposition::CDevice *))(*(_QWORD *)this[57] + 32LL))(this[57]);
    v4 = v6;
    if ( v6 < 0 )
      Microsoft::WRL2::FailFast::ForHR(v6, retaddr);
  }
  *((_BYTE *)this + 452) &= ~1u;
  Windows::UI::Composition::CompositorCommon::DisableMessageGroup((Windows::UI::Composition::CompositorCommon *)this);
  if ( v4 >= 0 && this[103] )
    Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_56af6cbb798eeaf6704c85839a4943fd___((Microsoft::WRL2::ContextSession *)this);
  return (unsigned int)v4;
}
