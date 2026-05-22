/*
 * XREFs of ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801C05F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x1800AD174 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 */

__int64 __fastcall MPCSixDofProcessor::OnDeviceRemoval(MPCSixDofProcessor *this, struct DeviceInfo *a2)
{
  if ( *((_BYTE *)this + 3571) )
  {
    *((_BYTE *)this + 10800) = 0;
    MPCInputProviderBase::ClearInputTargets(this);
    *((_BYTE *)this + 10800) = 1;
  }
  return MPCInputProviderBase::OnDeviceRemoval(this, a2);
}
