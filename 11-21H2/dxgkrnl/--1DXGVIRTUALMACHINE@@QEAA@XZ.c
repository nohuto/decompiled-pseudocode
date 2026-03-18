/*
 * XREFs of ??1DXGVIRTUALMACHINE@@QEAA@XZ @ 0x1C0334C20
 * Callers:
 *     ??_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z @ 0x1C0057884 (--_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::~DXGVIRTUALMACHINE(DXGVIRTUALMACHINE *this)
{
  struct DXGGLOBAL *Global; // rdi
  char *v3; // rbx
  __int64 v4; // rax
  char **v5; // rdx

  Global = DXGGLOBAL_GetGlobal();
  v3 = (char *)this + 8;
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 488));
  v4 = *((_QWORD *)this + 1);
  if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = (char **)*((_QWORD *)this + 2), *v5 != v3) )
    __fastfail(3u);
  *v5 = (char *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  --*((_DWORD *)Global + 442);
  *((_QWORD *)Global + 62) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Global + 488, 0LL);
  KeLeaveCriticalRegion();
  operator delete(*((void **)this + 27));
}
