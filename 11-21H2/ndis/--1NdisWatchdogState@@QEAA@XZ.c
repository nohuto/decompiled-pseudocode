/*
 * XREFs of ??1NdisWatchdogState@@QEAA@XZ @ 0x1C010B90C
 * Callers:
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C010B8C8 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 * Callees:
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C010B998 (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisWatchdogState::~NdisWatchdogState(NdisWatchdogState *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  NdisWatchdogState::Disarm(this);
  v5.m_Lock = (KPushLockBase *)&g_ndisWatchdogLock;
  KeEnterCriticalRegion();
  v5.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&g_ndisWatchdogLock, 0LL);
  v2 = (_QWORD *)((char *)this + 272);
  v5.m_State = Exclusive;
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  KLockHolder::~KLockHolder(&v5);
}
