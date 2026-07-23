/*
 * XREFs of sub_140A52F48 @ 0x140A52F48
 * Callers:
 *     sub_1406AE11C @ 0x1406AE11C (sub_1406AE11C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_140A52F48(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, int a4, int a5)
{
  bool v9; // zf
  unsigned int v10; // esi
  struct _KTHREAD *CurrentThread; // rax

  if ( !a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 48) != a2 )
  {
    v10 = -1073741735;
    goto LABEL_8;
  }
  v9 = a4 == 0;
  if ( !a4 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
    {
      v10 = -1073741431;
      goto LABEL_8;
    }
    v9 = 1;
  }
  if ( !v9 )
    a3 = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 40) = a3;
  v10 = 0;
LABEL_8:
  if ( !a5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    sub_1402AFC00(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
  return v10;
}
