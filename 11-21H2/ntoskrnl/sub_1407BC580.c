/*
 * XREFs of sub_1407BC580 @ 0x1407BC580
 * Callers:
 *     sub_1406A78D0 @ 0x1406A78D0 (sub_1406A78D0.c)
 *     sub_1406BC8F0 @ 0x1406BC8F0 (sub_1406BC8F0.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140881F12 @ 0x140881F12 (sub_140881F12.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407BC580(__int64 a1, __int64 a2, _QWORD *a3)
{
  ULONG_PTR v3; // r14
  _QWORD *v4; // r13
  struct _EX_RUNDOWN_REF *v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF **v9; // r12
  struct _KTHREAD *v10; // rax
  struct _EX_RUNDOWN_REF *i; // rbx
  struct _KTHREAD *v12; // rax
  bool v13; // zf
  struct _KTHREAD *v14; // rax
  struct _KTHREAD *v15; // rax
  _QWORD *Pool2; // rax
  _QWORD *v18; // rcx
  __int128 v19; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+30h] [rbp-48h]
  __int128 v21; // [rsp+40h] [rbp-38h]

  v3 = a1 + 184;
  v19 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = (struct _EX_RUNDOWN_REF **)(a1 + 200);
  --*((_WORD *)CurrentThread + 242);
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
  v10 = KeGetCurrentThread();
  --*((_WORD *)v10 + 243);
  ExAcquirePushLockSharedEx(v3, 0LL);
  for ( i = *v9; i != (struct _EX_RUNDOWN_REF *)v9; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( (HIDWORD(i[2].Ptr) & 1) != 0 && (i[2].Count & *(_DWORD *)a2) != 0 && sub_140347810(i + 7) )
    {
      ExReleasePushLockEx(v3, 0LL);
      v12 = KeGetCurrentThread();
      v13 = (*((_WORD *)v12 + 243))++ == 0xFFFF;
      if ( v13 && *((struct _KTHREAD **)v12 + 19) != (struct _KTHREAD *)((char *)v12 + 152) )
        KiCheckForKernelApcDelivery();
      if ( v5 )
      {
        sub_1402AD030(v5);
        v5 = 0LL;
      }
      if ( i[6].Count )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(256LL, 32LL, 1816552015LL);
        v4 = Pool2;
        if ( !Pool2 )
        {
          sub_1402AD030(i + 7);
          if ( (_QWORD *)*a3 == a3 )
          {
            KeLeaveCriticalRegion();
            ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
          }
          else
          {
            *(_QWORD *)&v19 = *(_QWORD *)a2;
            v20 = *(unsigned __int64 *)(a2 + 16);
            *((_QWORD *)&v19 + 1) = *(_QWORD *)(a2 + 8);
            v21 = 0xC000009AuLL;
            sub_140881F12(&v19, a3);
          }
          return 3221225626LL;
        }
        Pool2[2] = i;
        Pool2[3] = 0LL;
        v18 = (_QWORD *)a3[1];
        if ( (_QWORD *)*v18 != a3 )
          __fastfail(3u);
        *Pool2 = a3;
        Pool2[1] = v18;
        *v18 = Pool2;
        a3[1] = Pool2;
      }
      if ( i[5].Count )
      {
        sub_14042A5E0(*(_QWORD *)(i[3].Count + 8), a2);
        if ( i[6].Count )
          v4[3] = *(_QWORD *)(a2 + 24);
        else
          v5 = i + 7;
        *(_QWORD *)(a2 + 24) = 0LL;
      }
      v14 = KeGetCurrentThread();
      --*((_WORD *)v14 + 243);
      ExAcquirePushLockSharedEx(v3, 0LL);
    }
  }
  ExReleasePushLockEx(v3, 0LL);
  v15 = KeGetCurrentThread();
  v13 = (*((_WORD *)v15 + 243))++ == 0xFFFF;
  if ( v13 && *((struct _KTHREAD **)v15 + 19) != (struct _KTHREAD *)((char *)v15 + 152) )
    KiCheckForKernelApcDelivery();
  if ( v5 )
    sub_1402AD030(v5);
  if ( (_QWORD *)*a3 == a3 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
