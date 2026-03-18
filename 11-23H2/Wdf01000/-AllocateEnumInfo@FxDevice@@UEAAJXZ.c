/*
 * XREFs of ?AllocateEnumInfo@FxDevice@@UEAAJXZ @ 0x1C003D880
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C00716EC (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 */

int __fastcall FxDevice::AllocateEnumInfo(FxDevice *this)
{
  FxPkgPnp *m_PkgPnp; // rcx

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
    return FxPkgPnp::AllocateEnumInfo(m_PkgPnp);
  else
    return 0;
}
