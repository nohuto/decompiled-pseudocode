/*
 * XREFs of ?PowerCheckParentOverload@FxPkgPdo@@EEAAJPEAE@Z @ 0x1C00805B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x1C0080720 (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 */

int __fastcall FxPkgPdo::PowerCheckParentOverload(FxPkgPdo *this, bool *WaitForParentOn)
{
  FxDeviceBase *m_DeviceBase; // rax
  int result; // eax
  unsigned __int8 parentOn; // [rsp+30h] [rbp+8h] BYREF

  if ( this->m_HasPowerDependencyOnParent )
  {
    m_DeviceBase = this->m_DeviceBase;
    parentOn = 0;
    result = FxPkgPnp::PowerPolicyCanChildPowerUp(
               *(FxPkgPnp **)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 648LL),
               &parentOn);
    if ( result >= 0 )
      *WaitForParentOn = parentOn == 0;
  }
  else
  {
    *WaitForParentOn = 0;
    return 0;
  }
  return result;
}
