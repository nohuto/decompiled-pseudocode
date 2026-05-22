/*
 * XREFs of ?GetValue@CAnimationInstance@DirectComposition@@UEAAJPEAM@Z @ 0x1800E8BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?AnimationGetAnimationTime@CDevice@DirectComposition@@QEAAXI_KPEA_J@Z @ 0x1800EDD28 (-AnimationGetAnimationTime@CDevice@DirectComposition@@QEAAXI_KPEA_J@Z.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1801B2760 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationInstance::GetValue(
        DirectComposition::CAnimationInstance *this,
        float *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r11
  __int64 v9; // rdx
  bool *v10; // r9
  bool AnimationValue; // al
  unsigned int v12; // ecx
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  DirectComposition::CDeviceLock *v16; // [rsp+50h] [rbp+18h] BYREF
  struct DirectComposition::CDevice *v17; // [rsp+58h] [rbp+20h] BYREF

  v16 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v16);
  v4 = *((_QWORD *)this + 3);
  v15 = 0LL;
  v5 = a2 == 0LL ? 0x80070057 : 0;
  if ( *(_QWORD *)(v4 + 648) )
  {
    if ( a2 )
    {
      v6 = (*((_QWORD *)this + 4) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 4) >> 64);
      if ( v6 )
        v7 = v6 - 8;
      else
        v7 = 0LL;
      DirectComposition::CDevice::GetDeviceAndHandleWorker(v7, &v17, &v14);
      DirectComposition::CDevice::AnimationGetAnimationTime(*((DirectComposition::CDevice **)this + 3), v14, v8, &v15);
      v9 = v15;
      *a2 = 0.0;
      AnimationValue = CAnimationInterpolator::GetAnimationValue(
                         (DirectComposition::CAnimationInstance *)((char *)this + 168),
                         v9,
                         a2,
                         v10);
      v12 = a2 == 0LL ? 0x80070057 : 0;
      if ( !AnimationValue )
        v12 = -2147019873;
      v5 = v12;
    }
  }
  else
  {
    v5 = -2147019873;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v16);
  return v5;
}
