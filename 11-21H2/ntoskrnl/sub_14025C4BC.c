/*
 * XREFs of sub_14025C4BC @ 0x14025C4BC
 * Callers:
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14025C4BC(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v7; // rsi
  __int64 v8; // rax
  struct _KTHREAD *v9; // rdi
  unsigned int v10; // ecx
  char *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // r9d

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v7 = a1 + 56;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v8 = *(_QWORD *)(a1 + 96);
  if ( v8 )
  {
    *a2 = 1;
    LOBYTE(v8) = (*(_DWORD *)(v8 + 8) & 8) != 0;
  }
  else if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
  {
    *a2 = 1;
    LOBYTE(v8) = 1;
  }
  else
  {
    *a2 = 0;
  }
  *a3 = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  v9 = KeGetCurrentThread();
  if ( v7 - qword_140C50630 < 0x8000000000LL )
    v10 = sub_140287F30(*((_QWORD *)v9 + 23));
  else
    v10 = -1;
  _disable();
  v11 = (char *)v9 + 1696;
  v12 = v7 & 0x7FFFFFFFFFFFFFFCLL;
  v13 = 0LL;
  while ( (*(_QWORD *)v11 & 0x7FFFFFFFFFFFFFFCLL) != v12
       || !v11[18]
       || (*(_DWORD *)v11 & 1) != 0
       || *((_DWORD *)v11 + 2) != v10 )
  {
    v13 = (unsigned int)(v13 + 1);
    v11 += 96;
    if ( (unsigned int)v13 >= 6 )
      goto LABEL_20;
  }
  v11[18] = 0;
  if ( v11 )
  {
    if ( *(__int64 *)v11 < 0 )
    {
      *v11 |= 2u;
      _enable();
      sub_14034EE30(v11, v13, v12);
      _disable();
    }
    v14 = *((_DWORD *)v11 + 22);
    *((_DWORD *)v11 + 22) = 0;
    v11[17] = 0;
    *(_QWORD *)v11 = 0LL;
    *((_BYTE *)v9 + 792) |= 1 << v11[16];
    _enable();
    if ( v14 )
      sub_14022B568((ULONG_PTR)v9, v7, v14);
    return sub_1402AC800(CurrentThread);
  }
LABEL_20:
  if ( (*((_DWORD *)v9 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v9, v7, v10, 0LL);
  _enable();
  return sub_1402AC800(CurrentThread);
}
