/*
 * XREFs of sub_1406FC2F0 @ 0x1406FC2F0
 * Callers:
 *     sub_1406825AC @ 0x1406825AC (sub_1406825AC.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1406FC290 @ 0x1406FC290 (sub_1406FC290.c)
 *     sub_1406FC2F0 @ 0x1406FC2F0 (sub_1406FC2F0.c)
 *     sub_1406FC590 @ 0x1406FC590 (sub_1406FC590.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     sub_14097ECFC @ 0x14097ECFC (sub_14097ECFC.c)
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 *     sub_140980B94 @ 0x140980B94 (sub_140980B94.c)
 * Callees:
 *     sub_140287930 @ 0x140287930 (sub_140287930.c)
 *     sub_140287C30 @ 0x140287C30 (sub_140287C30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406FC2F0 @ 0x1406FC2F0 (sub_1406FC2F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406FC2F0(_QWORD *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v10; // rax
  unsigned __int64 *v11; // rcx
  unsigned __int64 *v12; // rdi
  bool v13; // zf
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 **v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v18; // [rsp+78h] [rbp+10h]
  unsigned __int64 v19; // [rsp+88h] [rbp+20h]

  if ( (a2 & 1) != 0 )
  {
    v19 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v6 = 0LL;
  }
  else
  {
    v6 = a2;
    if ( !sub_140287930((__int64)a1) || (*(_DWORD *)(v8 + 56) & 0x20) != 0 || (*(_DWORD *)(v7 + 2172) & 0x10) != 0 )
      return;
    v19 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v10 = *a1;
  v17 = *a1;
  v11 = (unsigned __int64 *)(*a1 + 72LL);
  v18 = v11;
  if ( (a3 & 1) == 0 )
  {
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx(v6 + 2352, 0LL);
    v10 = v17;
    v11 = v18;
  }
  if ( (a3 & 2) == 0 )
  {
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx(v10 + 40, 0LL);
    v11 = v18;
  }
  v12 = (unsigned __int64 *)*v11;
  if ( *v11 )
  {
    do
    {
      if ( a2 > v12[3] )
      {
        v12 = (unsigned __int64 *)v12[1];
      }
      else
      {
        if ( a2 >= v12[3] )
          break;
        v12 = (unsigned __int64 *)*v12;
      }
    }
    while ( v12 );
  }
  v13 = v12[4]-- == 1;
  if ( v13 )
  {
    RtlAvlRemoveNode(v11, v12);
    v14 = -sub_140287C30(a1);
    if ( v6 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 2344), v14);
      v15 = v12[5];
      if ( *(unsigned __int64 **)(v15 + 8) != v12 + 5 || (v16 = (unsigned __int64 **)v12[6], *v16 != v12 + 5) )
        __fastfail(3u);
      *v16 = (unsigned __int64 *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      if ( (a3 & 4) == 0 && (*(_DWORD *)(v6 + 2172) & 8) != 0 )
        sub_1406FC2F0(a1, *(_QWORD *)(v6 + 1296) | 1LL, 3LL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 1528), v14);
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( (a3 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v17 + 40);
    sub_1402AFC00(v17 + 40);
    v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v13 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 2352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 2352);
    sub_1402AFC00(v6 + 2352);
    v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v13 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
  }
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
}
