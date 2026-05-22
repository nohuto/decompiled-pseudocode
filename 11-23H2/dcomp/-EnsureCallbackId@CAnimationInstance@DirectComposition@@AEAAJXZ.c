/*
 * XREFs of ?EnsureCallbackId@CAnimationInstance@DirectComposition@@AEAAJXZ @ 0x1800E8AAC
 * Callers:
 *     ?Initialize@CAnimationInstance@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCAnimationBuilder@2@@Z @ 0x180063650 (-Initialize@CAnimationInstance@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCAnimationBuilder@2@@Z.c)
 *     ?AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z @ 0x1800E8900 (-AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z.c)
 * Callees:
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?RequestProxiedCallbackId@CDevice@DirectComposition@@QEAAJIPEAXPEAI@Z @ 0x1800F4178 (-RequestProxiedCallbackId@CDevice@DirectComposition@@QEAAJIPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationInstance::EnsureCallbackId(DirectComposition::CAnimationInstance *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  DirectComposition::CDevice *v6; // rsi
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  struct DirectComposition::CDevice *v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  v9 = 0LL;
  v4 = (v1 + 8) & -(__int64)(v1 != 0);
  v5 = v4 - 8;
  if ( !v4 )
    v5 = 0LL;
  DirectComposition::CDevice::GetDeviceAndHandleWorker(v5, &v9, &v8);
  v6 = v9;
  DirectComposition::CDeviceLock::AssertIsOwned((struct DirectComposition::CDevice *)((char *)v9 + 96));
  if ( !*((_DWORD *)this + 52) )
    return (unsigned int)DirectComposition::CDevice::RequestProxiedCallbackId(v6, v8, this, (unsigned int *)this + 52);
  return v2;
}
