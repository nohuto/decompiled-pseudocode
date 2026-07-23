/*
 * XREFs of NtMapUserPhysicalPages @ 0x140A42B30
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MiFreePhysicalPageChain @ 0x14064A6C0 (MiFreePhysicalPageChain.c)
 *     MiGetAweNode @ 0x14064ADF4 (MiGetAweNode.c)
 *     MiGetAwePageSize @ 0x14064AE68 (MiGetAwePageSize.c)
 *     MiGetAweViewPageSize @ 0x14064AF08 (MiGetAweViewPageSize.c)
 *     MiLockAwePagesShared @ 0x14064B564 (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x14064B5C0 (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x14064C398 (MiUnlockAweVadsShared.c)
 *     MiWriteAwePtes @ 0x14064CB0C (MiWriteAwePtes.c)
 *     MiPageSizeToPteLevel @ 0x14064E7D0 (MiPageSizeToPteLevel.c)
 *     MiCaptureUlongPtrArray @ 0x140A41634 (MiCaptureUlongPtrArray.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140A42068 (MiReferenceIncomingPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtMapUserPhysicalPages(PVOID VirtualAddress, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v6; // rsi
  __int64 v7; // r14
  _QWORD *Pool; // rdi
  NTSTATUS v9; // ebx
  _QWORD *AweNode; // rax
  __int64 v11; // rbx
  unsigned __int64 AweViewPageSize; // r9
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r11
  unsigned __int64 v16; // r8
  unsigned __int64 PteAddress; // rax
  int v19; // r10d
  bool i; // zf
  int v21; // r10d
  unsigned __int64 v22; // r15
  ULONG_PTR v23; // rsi
  __int64 *v24; // rsi
  __int64 v25; // rbp
  ULONG_PTR v26; // [rsp+40h] [rbp-1068h]
  __int64 v27[3]; // [rsp+48h] [rbp-1060h] BYREF
  _BYTE P[4096]; // [rsp+60h] [rbp-1048h] BYREF

  *(_OWORD *)v27 = 0LL;
  if ( NumberOfPages - 1 > 0xFFFFFFFFFFFFELL )
    return -1073741584;
  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL;
  v7 = 0LL;
  Pool = 0LL;
  if ( !UserPfnArray )
    goto LABEL_6;
  if ( NumberOfPages > 0x200 )
  {
    Pool = MiAllocatePool(64, 8 * NumberOfPages, 0x77526D4Du);
    if ( !Pool )
      return -1073741670;
  }
  else
  {
    Pool = P;
  }
  v9 = MiCaptureUlongPtrArray(Pool, (unsigned int *)UserPfnArray, NumberOfPages);
  if ( v9 >= 0 )
  {
LABEL_6:
    v26 = MiLockAweVadsShared((__int64)CurrentThread);
    AweNode = MiGetAweNode(v6);
    v7 = (__int64)AweNode;
    if ( AweNode )
    {
      v11 = AweNode[4];
      AweViewPageSize = MiGetAweViewPageSize((__int64)AweNode);
      if ( !AweViewPageSize )
        AweViewPageSize = MiGetAwePageSize(v11);
      MiPageSizeToPteLevel(AweViewPageSize);
      if ( v14 == 1 || (((v13 << 12) - 1) & v6) == 0 )
      {
        v16 = ((v14 * NumberOfPages) << 12) + v6 - 1;
        if ( v16 <= v6 )
        {
          v9 = -1073741584;
          goto LABEL_26;
        }
        if ( v6 >= (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) << 12
          && v16 <= (((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF) )
        {
          PteAddress = MiGetPteAddress(v6);
          for ( i = v19 == 0; ; i = v21 == 1 )
          {
            v22 = PteAddress;
            if ( i )
              break;
            PteAddress = MiGetPteAddress(PteAddress);
          }
          v23 = MiLockAwePagesShared(v11, (__int64)CurrentThread);
          if ( !Pool
            || (v9 = MiReferenceIncomingPhysicalPages(v11, (__int64)Pool, NumberOfPages, 0LL, v27, v7, v22), v9 >= 0) )
          {
            v27[1] = MiWriteAwePtes(v7, (__int64)Pool, NumberOfPages, 0LL, v22, 1);
            v9 = 0;
          }
          if ( v23 )
            MiUnlockAweVadsShared((__int64)CurrentThread, v23);
          goto LABEL_26;
        }
      }
    }
    v9 = -1073741585;
LABEL_26:
    if ( v26 )
      MiUnlockAweVadsShared((__int64)CurrentThread, v26);
  }
  v24 = v27;
  v25 = 2LL;
  do
  {
    if ( *v24 )
      MiFreePhysicalPageChain(*(_QWORD *)(v7 + 32), (_QWORD *)*v24);
    ++v24;
    --v25;
  }
  while ( v25 );
  if ( UserPfnArray )
  {
    if ( Pool != (_QWORD *)P )
      ExFreePoolWithTag(Pool, 0);
  }
  return v9;
}
