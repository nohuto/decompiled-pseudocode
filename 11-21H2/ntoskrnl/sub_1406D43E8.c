/*
 * XREFs of sub_1406D43E8 @ 0x1406D43E8
 * Callers:
 *     sub_1406D435C @ 0x1406D435C (sub_1406D435C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 *     MmMapViewOfSection @ 0x140785150 (MmMapViewOfSection.c)
 */

__int64 __fastcall sub_1406D43E8(__int64 a1)
{
  ULONG_PTR v1; // rsi
  __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rcx
  __int64 *v5; // rax
  char v6; // di
  int v8; // [rsp+50h] [rbp-38h]
  __int64 v9; // [rsp+60h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+68h] [rbp-20h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+18h] BYREF
  ULONG_PTR v12; // [rsp+A8h] [rbp+20h]

  v11 = 0LL;
  v1 = *((_QWORD *)KeGetCurrentThread() + 23);
  v12 = v1;
  v10[0] = 0LL;
  v2 = *(_QWORD *)(v1 + 1360);
  if ( *(_QWORD *)(v2 + 1952) )
  {
    v8 = 0;
  }
  else
  {
    v9 = 0LL;
    v8 = MmMapViewOfSection(*(_QWORD *)(a1 + 8), v1, &v11, 0LL, 0LL, v10, &v9, 1, 0, 2);
    if ( v8 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15D90, 0LL);
      qword_140C547C0 = (__int64)KeGetCurrentThread();
      if ( !*(_QWORD *)(v2 + 1952) )
      {
        *(_QWORD *)(v2 + 1952) = v11;
        v11 = 0LL;
      }
      v4 = 0LL;
      v5 = *(__int64 **)(v1 + 1408);
      if ( v5 )
        v4 = *v5;
      if ( v4 )
        *(_DWORD *)(v4 + 1116) = *(_DWORD *)(v2 + 1952);
      v8 = 0;
    }
  }
  if ( (struct _KTHREAD *)qword_140C547C0 == KeGetCurrentThread() )
  {
    qword_140C547C0 = 0LL;
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15D90, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C15D90);
    sub_1402AFC00((ULONG_PTR)&qword_140C15D90);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( v11 )
    sub_1406F8D30(v1);
  return (unsigned int)v8;
}
