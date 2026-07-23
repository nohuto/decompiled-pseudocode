/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x1406CD9D4
 * Callers:
 *     _CmGetInstallerClassRegPropWorker @ 0x14069B808 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406C940C (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406CD60C (_CmGetDeviceRegPropWorker.c)
 *     _PnpGetGenericStoreProperty @ 0x1406CDA30 (_PnpGetGenericStoreProperty.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14088138C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 520);
  if ( !v2 )
    v2 = (__int64 (__fastcall *)(__int64, __int64))&PnpRegQueryValueIndirect;
  return v2(a1, a2);
}
