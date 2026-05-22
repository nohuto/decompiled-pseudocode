/*
 * XREFs of ?CapturePointer@CInteractionProxy@DirectComposition@@UEAAJI@Z @ 0x1800F8EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?InteractionCapturePointer@CDevice@DirectComposition@@QEAAJIII_K@Z @ 0x1800F2170 (-InteractionCapturePointer@CDevice@DirectComposition@@QEAAJIII_K@Z.c)
 *     ?ReroutePointer@DComp@InputTraceLogging@@SAXKJ@Z @ 0x1800F8F68 (-ReroutePointer@DComp@InputTraceLogging@@SAXKJ@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionProxy::CapturePointer(__int64 this, unsigned int a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  DirectComposition::CDevice *v6; // rbx
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  struct DirectComposition::CDevice *v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = this + 8;
  v4 = -this;
  if ( (v2 & -(__int64)(v4 != 0)) != 0 )
    v5 = (v2 & -(__int64)(v4 != 0)) - 8;
  else
    v5 = 0LL;
  DirectComposition::CDevice::GetDeviceAndHandleWorker(v5, &v9, &v8);
  v6 = v9;
  v9 = (struct DirectComposition::CDevice *)((char *)v9 + 96);
  DirectComposition::CDeviceLock::Enter(v9);
  LODWORD(v6) = DirectComposition::CDevice::InteractionCapturePointer(v6, v8, 0, a2, 0LL);
  InputTraceLogging::DComp::ReroutePointer(a2, (int)v6);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v9);
  return (unsigned int)v6;
}
