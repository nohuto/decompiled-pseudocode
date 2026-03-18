/*
 * XREFs of ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C001BE60
 * Callers:
 *     GreGetClipBox @ 0x1C001BC60 (GreGetClipBox.c)
 * Callees:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001C600 (-bCompute@DC@@QEAAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00D8EEC (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall DEVLOCKOBJ::bLock(DEVLOCKOBJ *this, DC **a2, int a3)
{
  int v3; // ebp
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rax
  struct _ERESOURCE *v12; // rdi
  int v13; // r8d
  int v14; // ecx
  DC *v15; // r9
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // r8
  __int64 *v19; // rax
  int v20; // r8d
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rax
  int v26; // ecx
  int v27; // edx
  int v28; // ecx
  DC *v29; // rdi
  DC *v30; // rcx
  int v31; // eax
  bool v32; // zf
  __int64 v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // rax
  __int64 *v39; // rax
  __int64 v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rax
  int v43; // ecx
  struct _ERESOURCE *v44; // r8
  struct _ERESOURCE *v45; // rdi
  __int64 v46; // r8
  int v47; // edx
  struct _ERESOURCE *v48; // rcx
  struct _ERESOURCE *v49; // rcx

  v3 = 0;
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 13) = *(_QWORD *)*a2;
  if ( !a3 )
  {
    if ( !qword_1C029B5F0
      || (int)qword_1C029B5F0() < 0
      || !qword_1C029B5F8
      || (v7 = qword_1C029B5F8(a2, (char *)this + 96, (char *)this + 88, (char *)this + 28), v7 != 1) )
    {
      LOBYTE(v7) = 0;
    }
    if ( !(_BYTE)v7 )
      return 0LL;
  }
  if ( qword_1C029B090 && (int)qword_1C029B090() >= 0 && qword_1C029B098 )
    qword_1C029B098(this, 0LL);
  if ( a3 == 1 )
    *((_DWORD *)this + 6) |= 0x20000u;
  v8 = 0;
  if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
  {
    *((_QWORD *)this + 1) = ghsemDynamicModeChange;
    v9 = (int)ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared();
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v9,
        (unsigned int)&LockAcquireShared,
        a3,
        (_DWORD)ghsemDynamicModeChange,
        (__int64)L"ghsemDynamicModeChange");
    *((_DWORD *)this + 6) |= 8u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || (v11 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v11 + 104) )
    {
      v12 = ghsemGreLock;
      if ( !ExIsResourceAcquiredExclusiveLite(ghsemGreLock) && !ExIsResourceAcquiredSharedLite(v12) )
      {
        v14 = (int)ghsemGreLock;
        if ( ghsemGreLock )
          ExEnterPriorityRegionAndAcquireResourceShared();
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(
            v14,
            (unsigned int)&LockAcquireShared,
            v13,
            (_DWORD)ghsemGreLock,
            (__int64)L"ghsemGreLock");
        v8 = 1;
      }
    }
    v15 = *a2;
    v16 = *((_QWORD *)*a2 + 6);
    if ( (**((_DWORD **)*a2 + 122) & 1) == 0 && (*((_DWORD *)v15 + 9) & 0x8000) == 0
      || (v17 = *(_DWORD *)(v16 + 40), (v17 & 1) == 0)
      || (v17 & 0x1000000) != 0
      || *(_DWORD *)(v16 + 2588) != 5
      && (v17 & 0x20000) == 0
      && ((v18 = *(_QWORD *)(v16 + 2552), ((v18 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0)
       || (*(_DWORD *)(v18 + 160) & 0x800000) == 0)
      || (*(_DWORD *)(v16 + 2096) & 0x400) != 0
      || (v17 & 0x48000000) != 0
      || (*(_DWORD *)(v16 + 1792) & 0x8000000) != 0
      || (*(_DWORD *)(*(_QWORD *)(v16 + 24) + 40LL) & 0x1000000) != 0 )
    {
      v44 = (struct _ERESOURCE *)*((_QWORD *)v15 + 8);
      *(_QWORD *)this = v44;
      v45 = v44;
      *((_QWORD *)this + 2) = *((_QWORD *)*a2 + 6);
      if ( v8 == 1 && v44 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        if ( ghsemGreLock )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
          PsLeavePriorityRegion();
        }
        v45 = *(struct _ERESOURCE **)this;
        v8 = 0;
      }
      if ( v45 )
      {
        PsEnterPriorityRegion();
        ExEnterCriticalRegionAndAcquireResourceExclusive(v45);
        v45 = *(struct _ERESOURCE **)this;
      }
      v46 = 11LL;
      if ( v45 == ghsemGreLock )
        v46 = 2LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v45, v46);
      v47 = *((_DWORD *)this + 6);
      if ( (v47 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
        *((_DWORD *)this + 6) = v47 | 0x200;
    }
    v19 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !v19 || (v21 = *v19) == 0 || !*(_DWORD *)(v21 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x1000u;
      v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v22 )
      {
        v23 = *v22;
        if ( v23 )
        {
          *(_QWORD *)(v23 + 320) = 0LL;
          *(_QWORD *)(v23 + 312) = 0LL;
        }
      }
      v24 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v24 )
      {
        v25 = *v24;
        if ( v25 )
          ++*(_DWORD *)(v25 + 104);
      }
      v26 = (int)ghsemDCVisRgn;
      if ( ghsemDCVisRgn )
        ExEnterPriorityRegionAndAcquireResourceShared();
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v26,
          (unsigned int)&LockAcquireShared,
          v20,
          (_DWORD)ghsemDCVisRgn,
          (__int64)L"ghsemDCVisRgn");
    }
    v27 = *((_DWORD *)*a2 + 9);
    if ( (v27 & 0x1000) != 0 && (v27 & 0x4000) == 0 )
    {
      if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        v48 = ghsemDCVisRgn;
        if ( ghsemDCVisRgn )
          goto LABEL_127;
      }
      goto LABEL_128;
    }
  }
  else
  {
    v39 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !v39 || (v40 = *v39) == 0 || !*(_DWORD *)(v40 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x800000u;
      v41 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v41 )
      {
        v42 = *v41;
        if ( v42 )
          ++*(_DWORD *)(v42 + 104);
      }
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( (*((_DWORD *)*a2 + 9) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 1) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        v48 = ghsemDCVisRgn;
        if ( ghsemDCVisRgn )
        {
LABEL_127:
          ExReleaseResourceAndLeaveCriticalRegion(v48);
          PsLeavePriorityRegion();
        }
      }
LABEL_128:
      *((_DWORD *)this + 6) &= ~1u;
      if ( !v8 )
        return 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      v49 = ghsemGreLock;
      if ( !ghsemGreLock )
        return 0LL;
      goto LABEL_139;
    }
  }
  else if ( *((_QWORD *)this + 1) )
  {
    goto LABEL_53;
  }
  if ( (*((_DWORD *)*a2 + 9) & 0x10) != 0 && !(unsigned int)DC::bCompute(*a2) )
  {
    if ( *((_QWORD *)this + 1) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      if ( ghsemDCVisRgn )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
        PsLeavePriorityRegion();
      }
    }
    *((_DWORD *)this + 6) &= ~1u;
    if ( !v8 )
      return 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    v49 = ghsemGreLock;
    if ( !ghsemGreLock )
      return 0LL;
LABEL_139:
    ExReleaseResourceAndLeaveCriticalRegion(v49);
    PsLeavePriorityRegion();
    return 0LL;
  }
LABEL_53:
  v28 = *((_DWORD *)this + 6);
  if ( (v28 & 0x20000) == 0 )
  {
    v29 = *a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 && (v28 & 0x1000) != 0 )
    {
      if ( !*((_QWORD *)this + 11) )
      {
        v30 = (*((_DWORD *)v29 + 10) & 1) != 0 ? (DC *)((char *)v29 + 1024) : (DC *)((char *)v29 + 1016);
        *((_DWORD *)v29 + 256) = *(_DWORD *)v30;
        *((_DWORD *)v29 + 257) = *((_DWORD *)v30 + 1);
        *((_DWORD *)v29 + 262) = *((_DWORD *)v29 + 258);
        *((_DWORD *)v29 + 263) = *((_DWORD *)v29 + 259);
        *((_DWORD *)v29 + 264) = *((_DWORD *)v29 + 260);
        v31 = *((_DWORD *)v29 + 261);
        *((_DWORD *)v29 + 10) |= 1u;
        v32 = (*((_DWORD *)v29 + 9) & 0x4000) == 0;
        *((_DWORD *)v29 + 265) = v31;
        if ( !v32 )
        {
          v33 = *((_QWORD *)v29 + 62);
          if ( *(_QWORD *)(v33 + 248) || (*(_DWORD *)(v33 + 116) & 1) != 0 )
          {
            KeWaitForSingleObject((PVOID)(*(_QWORD *)(v33 + 312) + 64LL), UserRequest, 0, 0, 0LL);
            ++*(_DWORD *)(*((_QWORD *)v29 + 62) + 324LL);
            KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)v29 + 62) + 312LL) + 64LL), 0);
          }
        }
      }
      v34 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v34 )
      {
        v35 = *v34;
        if ( *v34 )
        {
          *(_QWORD *)(v35 + 312) = (char *)this + 32;
          if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
          {
            *(_DWORD *)(v35 + 328) |= 1u;
            *((_QWORD *)*a2 + 247) = 0LL;
            v43 = (int)ghsemVisRgnUniqueness;
            if ( ghsemVisRgnUniqueness )
              ExEnterPriorityRegionAndAcquireResourceShared();
            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              McTemplateK0pz_EtwWriteTransfer(
                v43,
                (unsigned int)&LockAcquireShared,
                v20,
                (_DWORD)ghsemVisRgnUniqueness,
                (__int64)L"ghsemVisRgnUniqueness");
            *(_DWORD *)(v35 + 336) = giVisRgnUniqueness;
            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              McTemplateK0pz_EtwWriteTransfer(
                v43,
                (unsigned int)&LockRelease,
                v20,
                (_DWORD)ghsemVisRgnUniqueness,
                (__int64)L"ghsemVisRgnUniqueness");
            v28 = (int)ghsemVisRgnUniqueness;
            if ( ghsemVisRgnUniqueness )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemVisRgnUniqueness);
              PsLeavePriorityRegion();
            }
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 1) && (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v28,
        (unsigned int)&LockRelease,
        v20,
        (_DWORD)ghsemDCVisRgn,
        (__int64)L"ghsemDCVisRgn");
    v28 = (int)ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
      PsLeavePriorityRegion();
    }
  }
  if ( v8 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v28,
        (unsigned int)&LockRelease,
        v20,
        (_DWORD)ghsemGreLock,
        (__int64)L"ghsemGreLock");
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
      PsLeavePriorityRegion();
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x20000) != 0 )
    return 1LL;
  if ( qword_1C029B090 && (int)qword_1C029B090() >= 0 )
  {
    if ( qword_1C029B098 )
      v3 = qword_1C029B098(this, a2);
    v36 = *((_DWORD *)this + 6);
    if ( v3 )
    {
      if ( (v36 & 0x1000) == 0 && (v36 & 0x800000) == 0 )
        return 1LL;
      v37 = *((_QWORD *)this + 4);
      if ( !v37 )
      {
        XDCOBJ::vLock((DEVLOCKOBJ *)((char *)this + 32), *(HDC *)*a2);
        v37 = *((_QWORD *)this + 4);
        if ( !v37 )
          return 1LL;
        *((_BYTE *)this + 81) = 0;
      }
      *(_DWORD *)(v37 + 40) |= 2u;
      *((_BYTE *)this + 80) = 1;
      return 1LL;
    }
  }
  else
  {
    v36 = *((_DWORD *)this + 6);
  }
  *((_DWORD *)this + 6) = v36 & 0xFFFFFFFE;
  return 0LL;
}
