/*
 * XREFs of sub_1409CED4C @ 0x1409CED4C
 * Callers:
 *     sub_140799BB0 @ 0x140799BB0 (sub_140799BB0.c)
 * Callees:
 *     RtlInsertEntryHashTable @ 0x140205950 (RtlInsertEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1402069A0 (RtlRemoveEntryHashTable.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 *     sub_1409CECAC @ 0x1409CECAC (sub_1409CECAC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409CED4C(unsigned int **a1, unsigned int **a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // esi
  __int64 v8; // rbp
  signed __int64 v9; // r12
  signed __int64 v10; // rsi
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v11; // rax
  unsigned int *Blink; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *Pool2; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  ULONG_PTR v17; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v18; // rdi
  __int64 v19; // rax
  ULONG_PTR v20; // rdi
  unsigned int v22; // [rsp+60h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(off_140D3B088, 0LL);
  v8 = 0LL;
  if ( !a3 )
    goto LABEL_23;
  v9 = (char *)a1 - (char *)a2;
  v10 = (char *)a2 - (char *)a1;
  while ( 1 )
  {
    *(_DWORD *)((char *)a1 + v10 + 8) = *(_DWORD *)((char *)a1 + v10 + v9 + 8);
    v11 = sub_1409CECAC(*a1);
    if ( v11 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)&v11[1]) <= 1 )
        __fastfail(0xEu);
      Blink = (unsigned int *)v11[1].Linkage.Blink;
      goto LABEL_12;
    }
    v22 = 8 * *((unsigned __int8 *)*a1 + 1) + 96;
    Pool2 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePool2(256LL, v22, 1934845267LL);
    v14 = Pool2;
    if ( !Pool2 )
      break;
    Pool2[1].Linkage.Blink = (struct _LIST_ENTRY *)&Pool2[1].Signature;
    Pool2[1].Linkage.Flink = (struct _LIST_ENTRY *)1;
    RtlCopySid(v22 - 40, &Pool2[1].Signature, *a1);
    v15 = (unsigned int)*((unsigned __int8 *)*a1 + 1) - 1;
    v16 = (*a1)[v15 + 2];
    v17 = v16 + 1;
    if ( (_DWORD)v16 )
      v17 = (*a1)[v15 + 2];
    if ( !RtlInsertEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(off_140D3B088 + 8), v14, v17, 0LL) )
    {
      v4 = -1073741823;
      ExFreePoolWithTag(v14, 0x73536553u);
      goto LABEL_16;
    }
    Blink = (unsigned int *)v14[1].Linkage.Blink;
LABEL_12:
    *(unsigned int **)((char *)a1 + v10) = Blink;
    v8 = (unsigned int)(v8 + 1);
    a1 += 2;
    if ( (unsigned int)v8 >= a3 )
    {
      v4 = 0;
      goto LABEL_23;
    }
  }
  v4 = -1073741801;
LABEL_16:
  if ( (_DWORD)v8 )
  {
    do
    {
      v18 = sub_1409CECAC(*a2);
      v19 = _InterlockedDecrement64((volatile signed __int64 *)&v18[1]);
      if ( v19 <= 0 )
      {
        if ( v19 )
          __fastfail(0xEu);
        if ( RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(off_140D3B088 + 8), v18, 0LL) )
          ExFreePoolWithTag(v18, 0);
      }
      a2 += 2;
      --v8;
    }
    while ( v8 );
  }
LABEL_23:
  v20 = off_140D3B088;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)off_140D3B088, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v20);
  sub_1402AFC00(v20);
  KeLeaveCriticalRegion();
  return v4;
}
