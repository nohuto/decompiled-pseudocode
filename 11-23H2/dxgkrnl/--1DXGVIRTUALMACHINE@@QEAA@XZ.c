/*
 * XREFs of ??1DXGVIRTUALMACHINE@@QEAA@XZ @ 0x1C03432A8
 * Callers:
 *     ??_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z @ 0x1C0056594 (--_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::~DXGVIRTUALMACHINE(DXGVIRTUALMACHINE *this)
{
  struct DXGGLOBAL *Global; // rdi
  char *v3; // rbx
  __int64 v4; // rax
  char **v5; // rdx

  Global = DXGGLOBAL::GetGlobal();
  v3 = (char *)this + 8;
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 488));
  v4 = *((_QWORD *)this + 1);
  if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = (char **)*((_QWORD *)this + 2), *v5 != v3) )
    __fastfail(3u);
  *v5 = (char *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  --*((_DWORD *)Global + 434);
  *((_QWORD *)Global + 62) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Global + 488, 0LL);
  KeLeaveCriticalRegion();
  operator delete(*((void **)this + 27));
}
