/*
 * XREFs of ?ProcessDeferredOperations_NoLockSEH@ContextSession@WRL2@Microsoft@@CAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180029CD4
 * Callers:
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessDeferredOperations_NoLock@ContextSession@WRL2@Microsoft@@CAXPEAUDeferredOperation@123@@Z @ 0x18007406C (-ProcessDeferredOperations_NoLock@ContextSession@WRL2@Microsoft@@CAXPEAUDeferredOperation@123@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@@Z @ 0x180108EF8 (-SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@.c)
 */

void __fastcall Microsoft::WRL2::ContextSession::ProcessDeferredOperations_NoLockSEH(__int64 a1, int a2)
{
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  if ( !a2 )
    goto LABEL_2;
  if ( a2 == 1 )
  {
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a1)(a1, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e, &v3) >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
LABEL_2:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
}
