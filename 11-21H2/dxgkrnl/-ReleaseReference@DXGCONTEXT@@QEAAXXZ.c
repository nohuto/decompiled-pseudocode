/*
 * XREFs of ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C002B450
 * Callers:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C0166C98 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1C01708C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N66@Z @ 0x1C017EED0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     DxgkPresent @ 0x1C0181EB0 (DxgkPresent.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C018ED80 (DxgkPresentMultiPlaneOverlay3.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C018F6E0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02D1520 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0313260 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016CBAC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::ReleaseReference(DXGCONTEXT *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r9
  char *v5; // rdx
  _BYTE v6[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v7; // [rsp+40h] [rbp-C0h]
  char v8; // [rsp+48h] [rbp-B8h]
  _QWORD v9[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v10[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v11[64]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v12[88]; // [rsp+A8h] [rbp-58h] BYREF

  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v2 = *((_QWORD *)this + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v9,
      (struct DXGDEVICE *)v2);
    v3 = *((_QWORD *)this + 2);
    v8 = 0;
    v7 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v10, v2, 2, v4, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v10, v5);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v2, this, (struct COREDEVICEACCESS *)v10);
    COREACCESS::~COREACCESS((COREACCESS *)v12);
    COREACCESS::~COREACCESS((COREACCESS *)v11);
    if ( v8 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
    if ( v9[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v2 + 16), (struct DXGDEVICE *)v2);
  }
}
