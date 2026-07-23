/*
 * XREFs of sub_140883F24 @ 0x140883F24
 * Callers:
 *     sub_1409846C8 @ 0x1409846C8 (sub_1409846C8.c)
 *     sub_14098471C @ 0x14098471C (sub_14098471C.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F344C @ 0x1402F344C (sub_1402F344C.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140733340 @ 0x140733340 (sub_140733340.c)
 */

__int64 __fastcall sub_140883F24(__int64 a1, _DWORD *a2, signed __int32 a3, _DWORD *a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // edi
  __int64 *i; // r14
  __int64 v10; // rbp
  __int64 j; // rbx
  volatile signed __int64 *v12; // rax
  volatile signed __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r15
  signed __int32 v17[10]; // [rsp+0h] [rbp-88h] BYREF
  _DWORD *v18; // [rsp+28h] [rbp-60h]
  char *v19; // [rsp+40h] [rbp-48h] BYREF
  struct _KTHREAD *v20; // [rsp+48h] [rbp-40h]

  CurrentThread = KeGetCurrentThread();
  v20 = CurrentThread;
  v8 = 0;
  v19 = (char *)a2 + (a5 != 0 ? 16LL : 8LL);
  *a4 = a5 != 0 ? 16 : 8;
  *a2 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140D3CB18, 0LL);
  for ( i = (__int64 *)qword_140D3CEA8;
        (((v8 + 0x80000000) & 0x80000000) != 0 || v8 == -1073741820) && i != &qword_140D3CEA8;
        i = (__int64 *)*i )
  {
    v10 = (__int64)(i - 3);
    for ( j = 0LL; ((v8 + 0x80000000) & 0x80000000) != 0 || v8 == -1073741820; j += 4LL )
    {
      v12 = (volatile signed __int64 *)sub_140733340((unsigned int *)v10, j);
      v13 = v12;
      if ( !v12 )
        break;
      if ( (j & 0x3FC) != 0 && *v12 && sub_1402F344C(v10, v12) )
      {
        ++*a2;
        v14 = *(unsigned int *)(v10 + 40);
        v18 = a4;
        v17[8] = a3;
        v8 = sub_14042A5E0(&v19, v14);
        _InterlockedExchangeAdd64(v13, 1uLL);
        _InterlockedOr(v17, 0);
        if ( *(_QWORD *)(v10 + 48) )
          ExfUnblockPushLock((volatile __int64 *)(v10 + 48), 0LL);
      }
    }
  }
  v15 = (__int64)v20;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D3CB18, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140D3CB18);
  sub_1402AFC00((ULONG_PTR)&qword_140D3CB18);
  sub_1402F9540(v15);
  return v8;
}
