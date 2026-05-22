/*
 * XREFs of ?RemoveAnimationBuilder@CDevice@DirectComposition@@QEAAXPEAVCAnimationBuilder@2@@Z @ 0x18006412C
 * Callers:
 *     ??1CAnimationBuilder@DirectComposition@@QEAA@XZ @ 0x180063EB4 (--1CAnimationBuilder@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CDevice::RemoveAnimationBuilder(
        DirectComposition::CDevice *this,
        struct DirectComposition::CAnimationBuilder *a2)
{
  unsigned int v4; // r9d
  __int64 v5; // r8
  __int64 i; // r10
  __int64 v7; // rcx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (_QWORD *)((char *)this + 96);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 96));
  v4 = *((_DWORD *)this + 114);
  v5 = 0LL;
  for ( i = *((_QWORD *)this + 54); (unsigned int)v5 < v4; v5 = (unsigned int)(v5 + 1) )
  {
    if ( a2 == *(struct DirectComposition::CAnimationBuilder **)(i + 8 * v5) )
      break;
  }
  if ( (unsigned int)v5 < v4 )
  {
    for ( ; (unsigned int)v5 < v4 - 1; v4 = *((_DWORD *)this + 114) )
    {
      v7 = (unsigned int)v5;
      LODWORD(v5) = v5 + 1;
      *(_QWORD *)(i + 8 * v7) = *(_QWORD *)(i + 8LL * (unsigned int)v5);
    }
    *((_DWORD *)this + 114) = v4 - 1;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v8);
}
