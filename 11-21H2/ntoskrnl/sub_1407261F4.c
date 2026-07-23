/*
 * XREFs of sub_1407261F4 @ 0x1407261F4
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140725A50 (NtOpenThreadTokenEx.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_1407261F4(__int64 a1, void *a2, unsigned __int64 a3)
{
  void *v3; // r14
  struct _KTHREAD *CurrentThread; // r13
  int v8; // edi
  __int64 v9; // rcx
  void *v11; // rcx

  v3 = 0LL;
  if ( (*(_DWORD *)(a1 + 1376) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 0;
    ObfReferenceObject((PVOID)a3);
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(a1 + 1360, 0LL);
    if ( (*(_DWORD *)(a1 + 1376) & 8) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 1272);
      if ( (void *)(v9 & 0xFFFFFFFFFFFFFFF8uLL) == a2 && (*(_DWORD *)(a1 + 1376) & 0x100) != 0 )
      {
        v3 = *(void **)(a1 + 1544);
        *(_QWORD *)(a1 + 1544) = 0LL;
        *(_QWORD *)(a1 + 1272) = a3 | v9 & 7;
        _InterlockedAnd((volatile signed __int32 *)(a1 + 1376), 0xFFFFFEFF);
      }
      else
      {
        v8 = -1073741823;
      }
    }
    else
    {
      v8 = -1073741700;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1360), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1360);
    sub_1402AFC00(a1 + 1360);
    sub_1402AC800((__int64)CurrentThread);
    if ( v8 < 0 )
    {
      v11 = (void *)a3;
    }
    else
    {
      ObfDereferenceObject(a2);
      if ( !v3 )
        return (unsigned int)v8;
      v11 = v3;
    }
    ObfDereferenceObject(v11);
    return (unsigned int)v8;
  }
  return 3221225596LL;
}
