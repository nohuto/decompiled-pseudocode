/*
 * XREFs of ?QuerySecureDeviceToken@FxCompanionTarget@@UEAAJPEA_K@Z @ 0x1C002E110
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C003B79C (-QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall FxCompanionTarget::QuerySecureDeviceToken(FxCompanionTarget *this, unsigned __int64 *SecureToken)
{
  _LIST_ENTRY *Flink; // r10
  int v5; // ebx
  unsigned __int64 v6; // rax
  void *Context; // rcx
  const void *_a1; // rax
  __int64 v9; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v12; // r10
  _SDEV_IDENTIFIER_INTERFACE Interface; // [rsp+40h] [rbp-38h] BYREF

  *SecureToken = -1LL;
  Flink = this->m_ChildListHead.Flink;
  memset(&Interface, 0, sizeof(Interface));
  if ( LOWORD(Flink[40].Blink->Blink) == 4353 )
  {
    v5 = FxDeviceBase::QueryForInterface(
           (FxDeviceBase *)Flink,
           &GUID_SDEV_IDENTIFIER_INTERFACE,
           &Interface.InterfaceHeader,
           0x28u,
           1u,
           0LL,
           0LL);
    if ( v5 < 0 )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)this->m_ChildListHead.Flink);
      WPP_IFR_SF_q(
        *(_FX_DRIVER_GLOBALS **)(v9 + 16),
        2u,
        0xCu,
        0xDu,
        (const _GUID *)&WPP_FxCompanionTarget_cpp_Traceguids,
        _a1);
    }
    else
    {
      v6 = Interface.GetIdentifier(Interface.InterfaceHeader.Context);
      Context = Interface.InterfaceHeader.Context;
      *SecureToken = v6;
      Interface.InterfaceHeader.InterfaceDereference(Context);
    }
    return (unsigned int)v5;
  }
  else
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)Flink);
    WPP_IFR_SF_q(
      *(_FX_DRIVER_GLOBALS **)(v12 + 16),
      2u,
      0xCu,
      0xCu,
      (const _GUID *)&WPP_FxCompanionTarget_cpp_Traceguids,
      ObjectHandleUnchecked);
    return 3221225659LL;
  }
}
