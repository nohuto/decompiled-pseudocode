/*
 * XREFs of ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C00716EC
 * Callers:
 *     ?AllocateEnumInfo@FxDevice@@UEAAJXZ @ 0x1C003D880 (-AllocateEnumInfo@FxDevice@@UEAAJXZ.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0082840 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x1C004FF48 (--0FxWaitLockInternal@@QEAA@XZ.c)
 */

__int64 __fastcall FxPkgPnp::AllocateEnumInfo(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // edi
  unsigned __int8 v6; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v8; // rax
  FX_POOL **v9; // rax
  FX_POOL **v10; // rbx
  const void *_a1; // rax
  int _a2; // edx
  __m128i v13; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  irql = 0;
  if ( this->m_EnumInfo )
    return 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( !this->m_EnumInfo )
  {
    m_Globals = this->m_Globals;
    v8 = retaddr;
    v13.m128i_i64[0] = 0LL;
    v13.m128i_i64[1] = 64LL;
    if ( !m_Globals->FxPoolTrackingOn )
      v8 = 0LL;
    v9 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v13, 0x88uLL, m_Globals->Tag, v8);
    v10 = v9;
    if ( v9 )
    {
      FxWaitLockInternal::FxWaitLockInternal((FxWaitLockInternal *)v9);
      *((_DWORD *)v10 + 22) = 0;
      v10[7] = (FX_POOL *)(v10 + 6);
      v10[6] = (FX_POOL *)(v10 + 6);
      v10[9] = (FX_POOL *)(v10 + 8);
      v10[8] = (FX_POOL *)(v10 + 8);
      v10[5] = (FX_POOL *)FxWaitLockTransactionedList::`vftable';
      *((_WORD *)v10 + 46) = 0;
      *((_BYTE *)v10 + 94) = 0;
      v10[10] = 0LL;
      FxWaitLockInternal::FxWaitLockInternal((FxWaitLockInternal *)(v10 + 12));
      this->m_EnumInfo = (FxEnumerationInfo *)v10;
      KeInitializeEvent((PRKEVENT)v10, SynchronizationEvent, 1u);
      *((_BYTE *)v10 + 24) = 1;
      KeInitializeEvent((PRKEVENT)v10 + 4, SynchronizationEvent, 1u);
      *((_BYTE *)v10 + 120) = 1;
    }
    else
    {
      this->m_EnumInfo = 0LL;
      v3 = -1073741670;
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x4Cu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
    }
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  return v3;
}
