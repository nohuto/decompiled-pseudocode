/*
 * XREFs of ?_PnpQueryDeviceText@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0030B30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0002DF8 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?FindObjectForGivenLocale@@YAPEAUFxDeviceText@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C0030C3C (-FindObjectForGivenLocale@@YAPEAUFxDeviceText@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     WPP_IFR_SF_qdd @ 0x1C005CC6C (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryDeviceText(FxPkgPnp *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  unsigned int Status; // esi
  _SINGLE_LIST_ENTRY *v6; // rcx
  FxDeviceText *ObjectForGivenLocale; // rbx
  __int64 v8; // r8
  int v10; // ecx
  wchar_t *m_LocationInformation; // rbx
  __int64 v12; // rax
  size_t v13; // rbp
  void *Pool2; // rax
  unsigned __int64 v15; // rsi
  const void *_a1; // rax

  m_Globals = This->m_Globals;
  Status = Irp->m_Irp->IoStatus.Status;
  ObjectForGivenLocale = FindObjectForGivenLocale(
                           (_SINGLE_LIST_ENTRY *)&This[1],
                           Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options);
  if ( ObjectForGivenLocale || (ObjectForGivenLocale = FindObjectForGivenLocale(v6, *(_DWORD *)&This[1].m_Type)) != 0LL )
  {
    v10 = *(_DWORD *)(v8 + 8);
    if ( v10 )
    {
      if ( v10 != 1 )
        return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
      m_LocationInformation = ObjectForGivenLocale->m_LocationInformation;
    }
    else
    {
      m_LocationInformation = ObjectForGivenLocale->m_Description;
    }
    if ( m_LocationInformation )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( m_LocationInformation[v12] );
      v13 = 2 * v12 + 2;
      Pool2 = (void *)ExAllocatePool2(256LL, v13, m_Globals->Tag);
      v15 = (unsigned __int64)Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, m_LocationInformation, v13);
        Irp->m_Irp->IoStatus.Information = v15;
        Status = 0;
      }
      else
      {
        Status = -1073741670;
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
        WPP_IFR_SF_qdd(
          m_Globals,
          2u,
          0xCu,
          0xCu,
          (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids,
          _a1,
          Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
          0xC000009A);
      }
    }
  }
  return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
}
