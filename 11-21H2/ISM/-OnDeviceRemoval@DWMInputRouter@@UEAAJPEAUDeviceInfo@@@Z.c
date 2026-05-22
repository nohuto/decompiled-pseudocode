/*
 * XREFs of ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18019B1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@XPEAUDeviceInfo@@@std@@QEBAXPEAUDeviceInfo@@@Z @ 0x18019A0A8 (--R-$_Func_class@XPEAUDeviceInfo@@@std@@QEBAXPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall DWMInputRouter::OnDeviceRemoval(DWMInputRouter *this, struct DeviceInfo *a2)
{
  __int64 *v2; // rsi
  __int64 *i; // rbx

  v2 = (__int64 *)*((_QWORD *)this + 86);
  for ( i = (__int64 *)*((_QWORD *)this + 85); i != v2; ++i )
    std::_Func_class<void,DeviceInfo *>::operator()(*i, (__int64)a2);
  return DWMInputRouter::OnDeviceChange(this, a2, 0);
}
