/*
 * XREFs of sub_1409E512C @ 0x1409E512C
 * Callers:
 *     sub_1406D435C @ 0x1406D435C (sub_1406D435C.c)
 * Callees:
 *     sub_14024F548 @ 0x14024F548 (sub_14024F548.c)
 *     sub_14024F59C @ 0x14024F59C (sub_14024F59C.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_1409E512C(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v6; // rbp
  int v7; // edx
  unsigned int *v8; // rax
  int v9; // r11d
  int v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0;
  if ( (unsigned int)sub_14024F59C((__int64 *)a2, &v11) )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15D90, 0LL);
    v6 = *(unsigned int **)(a1 + 16);
    v7 = *(_DWORD *)(a2 + 8);
    qword_140C547C0 = (__int64)KeGetCurrentThread();
    v8 = sub_14024F548(v6, v7);
    if ( *v8 == v9 )
    {
      v4 = 1;
      *(_DWORD *)(a2 + 12) = v6[6];
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
    }
  }
  if ( (struct _KTHREAD *)qword_140C547C0 == KeGetCurrentThread() )
  {
    qword_140C547C0 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15D90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C15D90);
    sub_1402AFC00((ULONG_PTR)&qword_140C15D90);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  return v4;
}
