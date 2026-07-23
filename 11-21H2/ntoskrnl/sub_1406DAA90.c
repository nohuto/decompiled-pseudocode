/*
 * XREFs of sub_1406DAA90 @ 0x1406DAA90
 * Callers:
 *     sub_14070E104 @ 0x14070E104 (sub_14070E104.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

bool __fastcall sub_1406DAA90(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v5; // rbp
  __int64 v6; // rcx
  char v7; // cl
  bool v8; // di
  int v10; // eax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v5 = (volatile signed __int64 *)(a1 + 56);
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 )
  {
    v10 = *(_DWORD *)(v6 + 8);
    if ( (v10 & 8) == 0 )
    {
      if ( a2 )
        *(_DWORD *)(v6 + 8) = v10 | 8;
      goto LABEL_4;
    }
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 44);
    if ( (v7 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 44) = v7 & 0xFD | (a2 != 0 ? 2 : 0);
LABEL_4:
      v8 = 1;
      goto LABEL_5;
    }
  }
  v8 = a2 != 0;
LABEL_5:
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  sub_1402AFC00((ULONG_PTR)v5);
  sub_1402AC800((__int64)CurrentThread);
  return v8;
}
