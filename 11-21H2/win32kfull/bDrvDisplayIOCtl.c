/*
 * XREFs of bDrvDisplayIOCtl @ 0x1C02BF1E0
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C021FADC (CtxDisplayIOCtl.c)
 * Callees:
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C0154B2C (--1SEMOBJEX@@QEAA@XZ.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0154C08 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bDrvDisplayIOCtl(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  _QWORD *v6; // rdx
  __int64 (__fastcall *v7)(__int64, _QWORD); // rax
  unsigned int v8; // eax
  _BYTE v10[96]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v11; // [rsp+100h] [rbp+8h] BYREF

  v11 = (_QWORD *)a1;
  if ( a1 && (v5 = 1, (*(_DWORD *)(a1 + 40) & 1) != 0) )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v10,
      ghsemDynamicModeChange,
      1,
      ghsemGreLock,
      2u,
      ghsemDCVisRgn,
      3u,
      *(HSEMAPHORE *)(a1 + 56),
      4u,
      ghsemSprite,
      5u,
      ghsemHT,
      6u);
    GreAcquireSemaphore(v11[6]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v11[6], 11LL);
    PDEVOBJ::vSync((PDEVOBJ *)&v11, (struct _SURFOBJ *)((v11[316] + 24LL) & -(__int64)(v11[316] != 0LL)), 0LL, 0);
    v6 = v11;
    v7 = (__int64 (__fastcall *)(__int64, _QWORD))v11[417];
    if ( v7 )
    {
      v8 = v7(a2, a3);
      v6 = v11;
      v5 = v8;
    }
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v6[6]);
    GreReleaseSemaphoreInternal(v11[6]);
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v10);
  }
  else
  {
    return 0;
  }
  return v5;
}
