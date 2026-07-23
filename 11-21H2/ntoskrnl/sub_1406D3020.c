/*
 * XREFs of sub_1406D3020 @ 0x1406D3020
 * Callers:
 *     sub_1406D2EE0 @ 0x1406D2EE0 (sub_1406D2EE0.c)
 *     sub_14077AF18 @ 0x14077AF18 (sub_14077AF18.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     sub_14077B4E4 @ 0x14077B4E4 (sub_14077B4E4.c)
 *     sub_14077B534 @ 0x14077B534 (sub_14077B534.c)
 */

__int64 __fastcall sub_1406D3020(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, _QWORD *a5)
{
  unsigned int v7; // r14d
  int v8; // ebx
  char v9; // si
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rbp
  unsigned int v13; // edx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v15; // rdi
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v20[4]; // [rsp+28h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v20[0] = 0LL;
  v19 = 0;
  v7 = a1;
  v8 = -1073741802;
  v9 = 0;
  sub_14077B4E4(a1, v20, &v19);
  if ( v19 )
  {
    v11 = sub_14077B534(v20[0], v19, v10);
    v12 = v11;
    if ( v11 < v13 )
    {
      if ( !a3 )
      {
        v8 = sub_14077B0A4(v7, a2, &BugCheckParameter2);
        if ( v8 < 0 )
          return (unsigned int)v8;
        v9 = 1;
      }
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v15 = (_DWORD *)BugCheckParameter2;
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
      v16 = v15[6 * v12 + 28];
      if ( v16 == 6 )
      {
        v17 = *(_QWORD *)&v15[6 * v12 + 32];
        *a5 = v17;
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
        v15 = (_DWORD *)BugCheckParameter2;
        v8 = 0;
      }
      else if ( v16 == 2 )
      {
        v8 = -1073741275;
      }
      else
      {
        v8 = -1073741802;
      }
      ExReleasePushLockEx((ULONG_PTR)v15, 0LL);
      KeLeaveCriticalRegion();
      if ( v9 )
        sub_14077B394(v15);
    }
  }
  return (unsigned int)v8;
}
