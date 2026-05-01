/*
 * XREFs of ??1?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAA@XZ @ 0x1805A7388
 * Callers:
 *     _KioskPositioner::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1802BB67D (_KioskPositioner--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z @ 0x1805A75E0 (--R-$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z.c)
 */

__int64 __fastcall std::optional<KioskPositioner::KioskPositionerConfiguration>::~optional<KioskPositioner::KioskPositionerConfiguration>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( *(_QWORD *)a1 )
      return std::default_delete<PrimaryAppProxyBase>::operator()();
  }
  return result;
}
