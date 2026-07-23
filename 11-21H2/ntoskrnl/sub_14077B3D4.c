/*
 * XREFs of sub_14077B3D4 @ 0x14077B3D4
 * Callers:
 *     sub_14077AF18 @ 0x14077AF18 (sub_14077AF18.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     sub_14077B4E4 @ 0x14077B4E4 (sub_14077B4E4.c)
 *     sub_14077B534 @ 0x14077B534 (sub_14077B534.c)
 *     sub_14077B594 @ 0x14077B594 (sub_14077B594.c)
 */

__int64 __fastcall sub_14077B3D4(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v10; // r14d
  int v11; // ebx
  char v12; // si
  __int64 v13; // r9
  unsigned int v14; // eax
  __int64 v15; // rbp
  unsigned int v16; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v18; // rdi
  unsigned int *v19; // rcx
  unsigned int v21; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v22[4]; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v22[0] = 0LL;
  v21 = 0;
  v10 = a1;
  v11 = -1073741802;
  v12 = 0;
  sub_14077B4E4(a1, v22, &v21);
  if ( v21 )
  {
    v14 = sub_14077B534(v22[0], v21, v13);
    v15 = v14;
    if ( v14 < v16 )
    {
      if ( !a3 )
      {
        v11 = sub_14077B0A4(v10, a2, (__int64 *)&BugCheckParameter2);
        if ( v11 < 0 )
          return (unsigned int)v11;
        v12 = 1;
      }
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v18 = (unsigned int *)BugCheckParameter2;
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
      v19 = &v18[4 * v15 + 28 + 2 * v15];
      if ( *v19 <= 1 )
        v11 = -1073741802;
      else
        v11 = sub_14077B594(v19, a5, a6, a7, a8);
      ExReleasePushLockEx((ULONG_PTR)v18, 0LL);
      KeLeaveCriticalRegion();
      if ( v12 )
        sub_14077B394(v18);
    }
  }
  return (unsigned int)v11;
}
