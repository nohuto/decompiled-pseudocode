/*
 * XREFs of sub_1406ECC60 @ 0x1406ECC60
 * Callers:
 *     sub_140260BE0 @ 0x140260BE0 (sub_140260BE0.c)
 *     sub_1406ED528 @ 0x1406ED528 (sub_1406ED528.c)
 *     sub_1409D3E54 @ 0x1409D3E54 (sub_1409D3E54.c)
 * Callees:
 *     sub_140261818 @ 0x140261818 (sub_140261818.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1409D55B0 @ 0x1409D55B0 (sub_1409D55B0.c)
 *     sub_1409D56C0 @ 0x1409D56C0 (sub_1409D56C0.c)
 */

__int64 __fastcall sub_1406ECC60(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v4; // r12d
  unsigned int v7; // edi
  _QWORD *v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v10; // rbp
  __int16 v11; // cx
  __int64 v12; // r15
  ULONGLONG *v13; // rax
  ULONGLONG *v14; // r13
  struct _KTHREAD *v15; // rax

  v4 = a2 & 0x3FF;
  v7 = 0;
  v8 = (_QWORD *)sub_14035F5E8(a1, v4);
  if ( !v8 )
    return (unsigned int)-1073741735;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v10 = v8 + 2;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 2), 0LL);
  v11 = *((_WORD *)v8 + 16);
  if ( a2 >> 10 != (v11 & 0x3F) )
    goto LABEL_21;
  v12 = *v8;
  if ( (unsigned __int64)(*v8 - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_21;
  if ( !a3 )
  {
LABEL_5:
    sub_14042A5E0(a1, *v8);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v8 + 1);
    v13 = sub_140261818(0);
    v14 = v13;
    if ( v13 )
    {
      sub_1409D56C0(v13, *v8);
      sub_1409D55B0(v14, *v8, qword_140038258);
    }
    sub_14042A5E0(a1, v12);
    *v8 = 0LL;
    v15 = KeGetCurrentThread();
    --*((_WORD *)v15 + 242);
    ExAcquirePushLockExclusiveEx(a1 + 416, 0LL);
    if ( *(_DWORD *)(a1 + 432) == v4 )
      *(_DWORD *)(a1 + 432) = -1;
    if ( (*(_DWORD *)(a1 + 424))-- == 1 )
      sub_14042A5E0(a1, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 416), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 416);
    sub_1402AFC00(a1 + 416);
    KeLeaveCriticalRegion();
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    sub_1402AFC00((ULONG_PTR)v10);
    KeLeaveCriticalRegion();
    sub_14042A5E0(a1, v12);
    return v7;
  }
  if ( (v11 & 0x40) != 0 )
  {
LABEL_21:
    v7 = -1073741735;
  }
  else
  {
    if ( (v11 & 0x80u) == 0 )
      goto LABEL_5;
    v7 = -1073741790;
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8 + 2);
  sub_1402AFC00((ULONG_PTR)(v8 + 2));
  KeLeaveCriticalRegion();
  return v7;
}
