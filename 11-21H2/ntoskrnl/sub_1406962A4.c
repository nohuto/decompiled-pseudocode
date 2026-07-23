/*
 * XREFs of sub_1406962A4 @ 0x1406962A4
 * Callers:
 *     sub_140205CA8 @ 0x140205CA8 (sub_140205CA8.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 * Callees:
 *     sub_14021FA0C @ 0x14021FA0C (sub_14021FA0C.c)
 *     sub_14021FA9C @ 0x14021FA9C (sub_14021FA9C.c)
 *     RtlCreateHashTable @ 0x14021FAF0 (RtlCreateHashTable.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140696468 @ 0x140696468 (sub_140696468.c)
 *     sub_140696944 @ 0x140696944 (sub_140696944.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406962A4(_QWORD *a1, _DWORD *a2, unsigned int a3, HANDLE *a4)
{
  void *v4; // rsi
  char v6; // r12
  __int64 Pool2; // rax
  int v11; // ebp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v13; // rdi
  bool v14; // dl
  __int64 v15; // rcx
  char v16; // cl
  void *v17; // rax
  char v18; // bl
  bool v20; // zf
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF
  char v22; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  v21[0] = 0LL;
  v6 = 0;
  v22 = 0;
  if ( a3 )
  {
    Pool2 = ExAllocatePool2(256LL, 8LL * a3, 1665688915LL);
    v4 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v11 = sub_14021FA0C(a3, a4, Pool2);
    if ( v11 < 0 )
      goto LABEL_22;
    v6 = 1;
    v11 = sub_140696944(a1, a2, a3, v4);
    if ( v11 < 0 )
      goto LABEL_21;
  }
  CurrentThread = KeGetCurrentThread();
  v13 = a1[27] + 88LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(v13, 0LL);
  if ( !*(_QWORD *)(v13 + 8) && !RtlCreateHashTable((PRTL_DYNAMIC_HASH_TABLE *)(v13 + 8), 0, 0) )
  {
    v11 = -1073741670;
    goto LABEL_27;
  }
  v11 = sub_140696468(v13, a2, &v22, v21);
  if ( v11 )
  {
LABEL_27:
    v20 = (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2;
LABEL_28:
    if ( v20 )
      ExfTryToWakePushLock(v13);
    goto LABEL_18;
  }
  v14 = 0;
  if ( *a2 )
  {
    if ( *a2 != 1 )
      goto LABEL_13;
    v14 = v22 == 0;
    v15 = v21[0];
    a1[144] = v21[0];
  }
  else
  {
    v15 = v21[0];
    if ( a3 )
      v14 = *(_DWORD *)(v21[0] + 56LL) == 0;
    a1[136] = v21[0];
  }
  if ( v14 )
  {
    *(_DWORD *)(v15 + 56) = a3;
    *(_QWORD *)(v15 + 64) = v4;
  }
LABEL_13:
  v16 = 0;
  if ( !v14 )
    v16 = v6;
  v17 = 0LL;
  v6 = v16;
  if ( !v14 )
    v17 = v4;
  v4 = v17;
  v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v18 & 2) != 0 )
  {
    v20 = (v18 & 4) == 0;
    goto LABEL_28;
  }
LABEL_18:
  sub_1402AFC00(v13);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v4 )
  {
    if ( !v6 )
    {
LABEL_22:
      ExFreePoolWithTag(v4, 0);
      return (unsigned int)v11;
    }
LABEL_21:
    sub_14021FA9C(a3, (HANDLE *)v4);
    goto LABEL_22;
  }
  return (unsigned int)v11;
}
