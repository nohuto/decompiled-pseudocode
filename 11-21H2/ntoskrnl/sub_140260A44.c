/*
 * XREFs of sub_140260A44 @ 0x140260A44
 * Callers:
 *     sub_1406EC47C @ 0x1406EC47C (sub_1406EC47C.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402A1124 @ 0x1402A1124 (sub_1402A1124.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140260A44(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebp
  struct _KTHREAD *v4; // rdi
  unsigned int v5; // ecx
  char *v6; // rbx
  ULONG_PTR v7; // r8
  __int64 v8; // rdx
  int v9; // r8d

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v3 = sub_1402A1124(BugCheckParameter2) != 0 ? 0xFFFFFE96 : 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v4 = KeGetCurrentThread();
  if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
    v5 = sub_140287F30(*((_QWORD *)v4 + 23));
  else
    v5 = -1;
  _disable();
  v6 = (char *)v4 + 1696;
  v7 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  v8 = 0LL;
  while ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) != v7
       || !v6[18]
       || (*(_DWORD *)v6 & 1) != 0
       || *((_DWORD *)v6 + 2) != v5 )
  {
    v8 = (unsigned int)(v8 + 1);
    v6 += 96;
    if ( (unsigned int)v8 >= 6 )
      goto LABEL_17;
  }
  v6[18] = 0;
  if ( v6 )
  {
    if ( *(__int64 *)v6 < 0 )
    {
      *v6 |= 2u;
      _enable();
      sub_14034EE30(v6, v8, v7);
      _disable();
    }
    v9 = *((_DWORD *)v6 + 22);
    *((_DWORD *)v6 + 22) = 0;
    v6[17] = 0;
    *(_QWORD *)v6 = 0LL;
    *((_BYTE *)v4 + 792) |= 1 << v6[16];
    _enable();
    if ( v9 )
      sub_14022B568((ULONG_PTR)v4, BugCheckParameter2, v9);
    goto LABEL_15;
  }
LABEL_17:
  if ( (*((_DWORD *)v4 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v4, BugCheckParameter2, v5, 0LL);
  _enable();
LABEL_15:
  KeLeaveCriticalRegion();
  return v3 - 1073741275;
}
