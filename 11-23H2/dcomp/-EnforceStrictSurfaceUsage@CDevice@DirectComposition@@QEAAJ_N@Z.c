/*
 * XREFs of ?EnforceStrictSurfaceUsage@CDevice@DirectComposition@@QEAAJ_N@Z @ 0x18009AD3C
 * Callers:
 *     ?Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z @ 0x18009BA98 (-Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$MakeGuard@VCDeviceLock@DirectComposition@@@@YA?AV?$CGuard@VCDeviceLock@DirectComposition@@@@AEAVCDeviceLock@DirectComposition@@@Z @ 0x1800246CC (--$MakeGuard@VCDeviceLock@DirectComposition@@@@YA-AV-$CGuard@VCDeviceLock@DirectComposition@@@@A.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::EnforceStrictSurfaceUsage(DirectComposition::CDevice *this, char a2)
{
  unsigned int v4; // ebx
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  MakeGuard<DirectComposition::CDeviceLock>(
    (DirectComposition::CDeviceLock **)&v6,
    (DirectComposition::CDevice *)((char *)this + 96));
  if ( a2 == *((_BYTE *)this + 833) )
    goto LABEL_5;
  if ( *((_DWORD *)this + 152) <= 1u )
  {
    *((_BYTE *)this + 833) = a2;
LABEL_5:
    v4 = 0;
    goto LABEL_6;
  }
  v4 = -2147020579;
LABEL_6:
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v6);
  return v4;
}
