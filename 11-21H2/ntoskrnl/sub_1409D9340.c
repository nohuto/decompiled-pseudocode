/*
 * XREFs of sub_1409D9340 @ 0x1409D9340
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140629E84 @ 0x140629E84 (sub_140629E84.c)
 *     sub_1409D9E18 @ 0x1409D9E18 (sub_1409D9E18.c)
 *     sub_1409D9FC0 @ 0x1409D9FC0 (sub_1409D9FC0.c)
 *     sub_1409DA014 @ 0x1409DA014 (sub_1409DA014.c)
 *     sub_1409DA570 @ 0x1409DA570 (sub_1409DA570.c)
 *     sub_1409DA6D4 @ 0x1409DA6D4 (sub_1409DA6D4.c)
 */

__int64 __fastcall sub_1409D9340(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _RTL_BALANCED_NODE *v5; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // edi
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v15; // rbp
  ULONG_PTR ParentValue; // rdx
  _RTL_BALANCED_NODE *v17; // r15
  unsigned __int64 v18; // r12

  v5 = 0LL;
  v10 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( !byte_140D05002 )
    byte_140D05002 = 1;
  v11 = *(_QWORD *)(v10 + 2288);
  if ( !v11 )
  {
    v12 = sub_1409DA570(a4);
    if ( v12 < 0 )
      return (unsigned int)v12;
    v11 = *(_QWORD *)(v10 + 2288);
  }
  if ( a5 )
    v5 = (_RTL_BALANCED_NODE *)sub_1409D9FC0(v11);
  if ( (unsigned int)sub_1409DA6D4(a1, a2, a3, a4) )
  {
    v12 = -1073741811;
  }
  else
  {
    v13 = *(_QWORD *)(v11 + 72);
    if ( v13 == -1 || v13 == a4 )
    {
      if ( !v5 )
      {
        v5 = (_RTL_BALANCED_NODE *)sub_1409D9E18(1LL);
        if ( !v5 )
          return (unsigned int)-1073741670;
      }
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v15 = (volatile signed __int64 *)(v11 + 88);
      ExAcquirePushLockExclusiveEx(v11 + 88, 0LL);
      ParentValue = v5[1].ParentValue;
      v17 = (_RTL_BALANCED_NODE *)(a2 >> 12);
      v5[1].Children[0] = v17;
      v5[1].Children[1] = (_RTL_BALANCED_NODE *)((char *)v17 + a3 - 1);
      v18 = a1 >> 12;
      *(_QWORD *)(ParentValue + 48) = v18;
      *(_QWORD *)(ParentValue + 56) = v18 + a3 - 1;
      v12 = sub_140629E84((PEX_SPIN_LOCK)v11, v5, a4);
      if ( v12 >= 0 )
      {
        v5 = 0LL;
        v12 = 0;
      }
      if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15);
      sub_1402AFC00((ULONG_PTR)v15);
      KeLeaveCriticalRegion();
    }
    else
    {
      v12 = -1073740007;
    }
  }
  if ( v5 )
    sub_1409DA014(v5);
  return (unsigned int)v12;
}
