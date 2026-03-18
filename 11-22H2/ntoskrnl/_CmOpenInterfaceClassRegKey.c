/*
 * XREFs of _CmOpenInterfaceClassRegKey @ 0x140787DB0
 * Callers:
 *     IopGetDeviceInterfaces @ 0x140787900 (IopGetDeviceInterfaces.c)
 *     _PnpDispatchInterfaceClass @ 0x1407C6330 (_PnpDispatchInterfaceClass.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1407C6530 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     PiCMOpenClassKey @ 0x140860768 (PiCMOpenClassKey.c)
 *     _CmCreateInterfaceClassWorker @ 0x1408809E0 (_CmCreateInterfaceClassWorker.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140A679E8 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140A6A1EC (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x140787DF8 (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInterfaceClassRegKey(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 64, 0, a5, a6, a7, a8);
}
