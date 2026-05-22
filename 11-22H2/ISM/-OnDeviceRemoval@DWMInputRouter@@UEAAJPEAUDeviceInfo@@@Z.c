/*
 * XREFs of ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801C7120
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@XPEAUDeviceInfo@@@std@@QEBAXPEAUDeviceInfo@@@Z @ 0x1801C5B5C (--R-$_Func_class@XPEAUDeviceInfo@@@std@@QEBAXPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall DWMInputRouter::OnDeviceRemoval(DWMInputRouter *this, struct DeviceInfo *a2)
{
  __int64 *v2; // rsi
  __int64 *i; // rbx

  v2 = (__int64 *)*((_QWORD *)this + 87);
  for ( i = (__int64 *)*((_QWORD *)this + 86); i != v2; ++i )
    std::_Func_class<void,DeviceInfo *>::operator()(*i, (__int64)a2);
  return DWMInputRouter::OnDeviceChange(this, a2, 0);
}
