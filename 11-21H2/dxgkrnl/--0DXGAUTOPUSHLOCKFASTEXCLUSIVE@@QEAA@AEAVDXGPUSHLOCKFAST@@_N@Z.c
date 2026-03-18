/*
 * XREFs of ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0025B34
 * Callers:
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x1C00239C0 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C01DAB10 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C021B8B0 (-CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 *     ?DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C02C357C (-DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C02C3BA8 (-EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?EnableIommuForSecureVgpu@ADAPTER_RENDER@@AEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C02C3C20 (-EnableIommuForSecureVgpu@ADAPTER_RENDER@@AEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     DxgkWslDestroyNtSharedObject @ 0x1C031E500 (DxgkWslDestroyNtSharedObject.c)
 *     DxgkWslShareObjects @ 0x1C031E7F0 (DxgkWslShareObjects.c)
 *     ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C03479C0 (-DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 *     ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C0347AF0 (-DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

DXGAUTOPUSHLOCKFASTEXCLUSIVE *__fastcall DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
        DXGAUTOPUSHLOCKFASTEXCLUSIVE *this,
        struct DXGPUSHLOCKFAST *a2)
{
  DXGAUTOPUSHLOCKFASTEXCLUSIVE *result; // rax

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a2, 0LL);
  *((_QWORD *)a2 + 1) = KeGetCurrentThread();
  result = this;
  *((_BYTE *)this + 8) = 1;
  return result;
}
