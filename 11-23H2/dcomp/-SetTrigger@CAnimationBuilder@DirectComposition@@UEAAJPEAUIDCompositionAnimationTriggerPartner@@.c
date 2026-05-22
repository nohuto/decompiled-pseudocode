/*
 * XREFs of ?SetTrigger@CAnimationBuilder@DirectComposition@@UEAAJPEAUIDCompositionAnimationTriggerPartner@@@Z @ 0x1800E86C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ??$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectComposition@@@Z @ 0x180063DF0 (--$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectCompos.c)
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::SetTrigger(
        DirectComposition::CAnimationBuilder *this,
        struct IDCompositionAnimationTriggerPartner *a2)
{
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  struct DirectComposition::CDevice *v7; // [rsp+50h] [rbp+18h] BYREF
  DirectComposition::CDeviceLock *v8; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v8 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v8);
  if ( (*((_BYTE *)this + 40) & 2) != 0 || *((_QWORD *)this + 7) )
  {
    v4 = -2147024891;
  }
  else
  {
    v7 = 0LL;
    DirectComposition::CDevice::GetDeviceAndHandleWorker((unsigned __int64)a2, &v7, &v6);
    if ( *((struct DirectComposition::CDevice **)this + 3) == v7 )
    {
      ReleaseInterface<DirectComposition::CAnimationProxy>((DirectComposition::CTransformGroupProxy **)this + 2);
      *((_QWORD *)this + 7) = a2;
      if ( a2 )
        _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    }
    else
    {
      v4 = -2147024809;
    }
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v8);
  return v4;
}
