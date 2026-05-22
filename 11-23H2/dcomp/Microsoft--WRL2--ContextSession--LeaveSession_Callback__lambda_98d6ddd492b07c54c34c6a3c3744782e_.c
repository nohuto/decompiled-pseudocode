/*
 * XREFs of Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_98d6ddd492b07c54c34c6a3c3744782e___ @ 0x1800B6954
 * Callers:
 *     ?Message_ScrollValuesChanged_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEBUVector3@Numerics@Foundation@5@MH@Z @ 0x1800B6CC6 (-Message_ScrollValuesChanged_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QE.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001EEA8 (-EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18002CA28 (-BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@@Z @ 0x180108EF8 (-SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_98d6ddd492b07c54c34c6a3c3744782e___(
        Microsoft::WRL2::ContextSession *this,
        _QWORD *a2)
{
  int v4; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  Microsoft::WRL2::ContextSession::BeginApiCallback((struct _RTL_CRITICAL_SECTION *)this);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 88LL))(
         *a2,
         a2[1],
         (a2[2] + 48LL) & -(__int64)(a2[2] != 0LL));
  if ( v4 < 0 )
    Microsoft::WRL2::FailFast::ForHR(v4, retaddr);
  Microsoft::WRL2::ContextSession::EndApiCallback((struct _RTL_CRITICAL_SECTION *)this);
  return Microsoft::WRL2::NestableRuntimeClass::InternalRelease(this);
}
