/*
 * XREFs of ?DisableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x180080450
 * Callers:
 *     ?InternalCommit_Callback@CompositorCommon@Composition@UI@Windows@@QEAAJPEAX@Z @ 0x1800803B4 (-InternalCommit_Callback@CompositorCommon@Composition@UI@Windows@@QEAAJPEAX@Z.c)
 *     ?InternalBeginDeferral@CommitDeferral@Composition@UI@Windows@@MEAAJPEAVCompositor@234@@Z @ 0x18018AC70 (-InternalBeginDeferral@CommitDeferral@Composition@UI@Windows@@MEAAJPEAVCompositor@234@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositorCommon::DisableMessageGroup(
        Windows::UI::Composition::CompositorCommon *this)
{
  int v1; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 54) + 48LL))(*((_QWORD *)this + 54), 0LL);
  if ( v1 < 0 )
    Microsoft::WRL2::FailFast::ForHR(v1, retaddr);
}
