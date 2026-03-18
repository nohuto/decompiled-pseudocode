/*
 * XREFs of ?_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002C2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0002DF8 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?FxCalculateTotalMultiSzStringSize@@YA_KPEBG@Z @ 0x1C002C4A8 (-FxCalculateTotalMultiSzStringSize@@YA_KPEBG@Z.c)
 *     WPP_IFR_SF_qLd @ 0x1C002C4F0 (WPP_IFR_SF_qLd.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryId(FxPkgPnp *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  int globals; // ebx
  int _a3; // edi
  FxDeviceBase *m_DeviceBase; // rbp
  const wchar_t *m_Lock; // rbx
  size_t v9; // rbp
  void *Pool2; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  size_t v13; // r15
  void *v14; // rax
  unsigned __int64 v15; // rbx
  const void *_a2; // rax
  unsigned __int8 v17; // dl

  m_Globals = This->m_Globals;
  globals = Irp->m_Irp->IoStatus.Status;
  _a3 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( _a3 )
  {
    if ( _a3 <= 0 )
      goto LABEL_26;
    if ( _a3 <= 2 )
    {
      if ( _a3 == 1 )
        m_Lock = (const wchar_t *)This[1].m_NPLock.m_Lock;
      else
        m_Lock = *(const wchar_t **)&This[1].m_PnpState.ByEnum;
      if ( m_Lock )
        v9 = FxCalculateTotalMultiSzStringSize(m_Lock);
      else
        v9 = 4LL;
      Pool2 = (void *)ExAllocatePool2(256LL, v9, m_Globals->Tag);
      v11 = (unsigned __int64)Pool2;
      if ( Pool2 )
      {
        if ( m_Lock )
          memmove(Pool2, m_Lock, v9);
        Irp->m_Irp->IoStatus.Information = v11;
        goto LABEL_18;
      }
      goto LABEL_19;
    }
    if ( _a3 == 3 )
    {
      m_DeviceBase = *(FxDeviceBase **)&This[1].m_NPLock.m_DbgFlagIsInitialized;
    }
    else
    {
      if ( _a3 != 5 )
        goto LABEL_26;
      m_DeviceBase = *(FxDeviceBase **)&This[1].m_PnpCapsAddress;
    }
  }
  else
  {
    m_DeviceBase = This[1].m_DeviceBase;
  }
  if ( !m_DeviceBase )
  {
LABEL_26:
    if ( globals >= 0 )
      return FxPkgPnp::CompletePnpRequest(This, Irp, globals);
    goto LABEL_27;
  }
  v12 = -1LL;
  do
    ++v12;
  while ( *((_WORD *)&m_DeviceBase->FxNonPagedObject::FxObject::__vftable + v12) );
  v13 = 2 * v12 + 2;
  v14 = (void *)ExAllocatePool2(256LL, v13, m_Globals->Tag);
  v15 = (unsigned __int64)v14;
  if ( v14 )
  {
    memmove(v14, m_DeviceBase, v13);
    Irp->m_Irp->IoStatus.Information = v15;
LABEL_18:
    globals = 0;
    return FxPkgPnp::CompletePnpRequest(This, Irp, globals);
  }
LABEL_19:
  globals = -1073741670;
LABEL_27:
  Irp->m_Irp->IoStatus.Information = 0LL;
  _a2 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  if ( globals == -1073741637 )
    WPP_IFR_SF_qLd(m_Globals, v17, 0xCu, 0x14u, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids, _a2, _a3, -1073741637);
  else
    WPP_IFR_SF_qLd(m_Globals, v17, 0xCu, 0x15u, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids, _a2, _a3, globals);
  return FxPkgPnp::CompletePnpRequest(This, Irp, globals);
}
