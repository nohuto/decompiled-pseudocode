/*
 * XREFs of ?ReleaseProxiedCallbackId@CAnimationInstance@DirectComposition@@AEAAXXZ @ 0x1800E901C
 * Callers:
 *     ??1CAnimationInstance@DirectComposition@@EEAA@XZ @ 0x180061D94 (--1CAnimationInstance@DirectComposition@@EEAA@XZ.c)
 * Callees:
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?ReleaseProxiedCallbackId@CDevice@DirectComposition@@QEAAXII@Z @ 0x1800F3DFC (-ReleaseProxiedCallbackId@CDevice@DirectComposition@@QEAAXII@Z.c)
 */

void __fastcall DirectComposition::CAnimationInstance::ReleaseProxiedCallbackId(
        DirectComposition::CAnimationInstance *this)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  DirectComposition::CDevice *v6; // rbx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  struct DirectComposition::CDevice *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 4);
  v8 = 0LL;
  v3 = v1 + 8;
  v4 = -v1;
  if ( (v3 & -(__int64)(v4 != 0)) != 0 )
    v5 = (v3 & -(__int64)(v4 != 0)) - 8;
  else
    v5 = 0LL;
  DirectComposition::CDevice::GetDeviceAndHandleWorker(v5, &v8, &v7);
  v6 = v8;
  DirectComposition::CDeviceLock::AssertIsOwned((struct DirectComposition::CDevice *)((char *)v8 + 96));
  DirectComposition::CDevice::ReleaseProxiedCallbackId(v6, *((_DWORD *)this + 52), v7);
  *((_DWORD *)this + 52) = 0;
}
