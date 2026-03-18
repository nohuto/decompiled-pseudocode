/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003881C
 * Callers:
 *     GreGetClipBox @ 0x1C00389B0 (GreGetClipBox.c)
 *     GreGetNearestColor @ 0x1C005FC20 (GreGetNearestColor.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01545DC (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0155B48 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0156018 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     pProcessDfbSurfacesInternal @ 0x1C015AC60 (pProcessDfbSurfacesInternal.c)
 *     GreSetMagicColors @ 0x1C016C76C (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BCC0 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(struct _ERESOURCE *this)
{
  struct _ERESOURCE *v1; // rbx
  int v2; // eax
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  int v7; // eax
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v9; // rcx
  int v10; // r8d
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rax

  v1 = this;
  if ( qword_1C0294730 && (int)qword_1C0294730() >= 0 && qword_1C0294738 )
    qword_1C0294738(v1);
  v2 = *(_DWORD *)&v1->ActiveCount;
  if ( (v2 & 0x1000) != 0 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v4 = *ThreadWin32Thread;
      if ( v4 )
        --*(_DWORD *)(v4 + 104);
    }
    *(_DWORD *)&v1->ActiveCount &= ~0x1000u;
    v5 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v5 )
    {
      v6 = *v5;
      if ( v6 )
      {
        *(_QWORD *)(v6 + 320) = 0LL;
        *(_QWORD *)(v6 + 312) = 0LL;
      }
    }
  }
  else if ( (v2 & 0x800000) != 0 )
  {
    v12 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v12 )
      --*(_DWORD *)(v12 + 104);
    *(_DWORD *)&v1->ActiveCount &= ~0x800000u;
  }
  if ( v1->SystemResourcesList.Flink )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v1->SystemResourcesList.Flink);
    this = (struct _ERESOURCE *)v1->SystemResourcesList.Flink;
    if ( v1->SystemResourcesList.Flink )
    {
      ExReleaseResourceAndLeaveCriticalRegion(this);
      PsLeavePriorityRegion();
    }
  }
  v7 = *(_DWORD *)&v1->ActiveCount;
  if ( (v7 & 8) != 0 )
    *(_DWORD *)&v1->ActiveCount = v7 & 0xFFFFFFF7;
  Blink = v1->SystemResourcesList.Blink;
  if ( Blink )
  {
    v9 = *(_QWORD *)(SGDGetSessionState(this) + 24);
    if ( *(_DWORD *)(v9 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v9, (unsigned int)&LockRelease, v10, (_DWORD)Blink, (__int64)L"hsemDMC");
    v11 = (struct _ERESOURCE *)v1->SystemResourcesList.Blink;
    if ( v11 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v11);
      PsLeavePriorityRegion();
    }
  }
  if ( qword_1C0294740 && (int)qword_1C0294740() >= 0 )
  {
    if ( qword_1C0294748 )
      qword_1C0294748(&v1[1], &v1->SpinLock, &v1->Address, &v1->26 + 1);
  }
}
