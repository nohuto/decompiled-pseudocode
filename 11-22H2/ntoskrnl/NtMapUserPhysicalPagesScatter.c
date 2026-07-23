/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x140A42BA0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiFreePhysicalPageChain @ 0x14064A1E0 (MiFreePhysicalPageChain.c)
 *     MiGetAweNode @ 0x14064A914 (MiGetAweNode.c)
 *     MiGetAwePageSize @ 0x14064A988 (MiGetAwePageSize.c)
 *     MiLockAwePagesShared @ 0x14064B084 (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x14064B0E0 (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x14064BEB8 (MiUnlockAweVadsShared.c)
 *     MiWriteAwePtes @ 0x14064C62C (MiWriteAwePtes.c)
 *     MiCaptureUlongPtrArray @ 0x140A413F4 (MiCaptureUlongPtrArray.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140A41E28 (MiReferenceIncomingPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtMapUserPhysicalPagesScatter(
        PVOID *VirtualAddresses,
        ULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray)
{
  unsigned __int64 *Pool; // rsi
  struct _KTHREAD *CurrentThread; // r12
  ULONG_PTR v9; // rbx
  unsigned __int64 *v10; // r14
  SIZE_T v11; // rdx
  unsigned __int64 *v12; // r13
  NTSTATUS v13; // edi
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rbx
  _QWORD *AweNode; // rax
  __int64 v17; // r15
  int v18; // ebx
  __int64 AwePageSize; // rax
  __int64 v20; // r8
  int v21; // r11d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r9
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // r13
  ULONG_PTR v27; // rbx
  __int128 *v28; // rbx
  __int64 v29; // rbp
  __int64 v30; // [rsp+40h] [rbp-2078h]
  unsigned __int64 v31; // [rsp+48h] [rbp-2070h]
  __int64 v32; // [rsp+50h] [rbp-2068h]
  ULONG_PTR v33; // [rsp+58h] [rbp-2060h]
  __int128 v34; // [rsp+60h] [rbp-2058h] BYREF
  _BYTE P[4096]; // [rsp+70h] [rbp-2048h] BYREF
  char v36; // [rsp+1070h] [rbp-1048h] BYREF

  memset(P, 0, sizeof(P));
  v34 = 0LL;
  if ( NumberOfPages > 0xFFFFFFFFFFFFFLL )
    return -1073741584;
  v30 = 0LL;
  Pool = (unsigned __int64 *)P;
  CurrentThread = KeGetCurrentThread();
  v9 = NumberOfPages;
  v10 = 0LL;
  if ( NumberOfPages > 0x200 )
  {
    v11 = 16 * NumberOfPages;
    if ( !UserPfnArray )
      v11 = 8 * NumberOfPages;
    Pool = (unsigned __int64 *)MiAllocatePool(64, v11, 0x77526D4Du);
    if ( !Pool )
      return -1073741670;
  }
  v12 = Pool;
  v13 = MiCaptureUlongPtrArray(Pool, (unsigned int *)VirtualAddresses, NumberOfPages);
  if ( v13 < 0 )
    goto LABEL_44;
  if ( !NumberOfPages )
    return 0;
  if ( !UserPfnArray )
    goto LABEL_15;
  v10 = (unsigned __int64 *)&v36;
  if ( NumberOfPages > 0x200 )
    v10 = &Pool[v9];
  v13 = MiCaptureUlongPtrArray(v10, (unsigned int *)UserPfnArray, NumberOfPages);
  if ( v13 < 0 )
  {
LABEL_44:
    v26 = 0LL;
  }
  else
  {
LABEL_15:
    v14 = &Pool[v9];
    v15 = *Pool;
    v13 = 0;
    v31 = (unsigned __int64)v14;
    v33 = MiLockAweVadsShared((__int64)CurrentThread);
    AweNode = MiGetAweNode(v15);
    if ( !AweNode || (AweNode[5] & 3) != 0 )
    {
      v13 = -1073741585;
LABEL_41:
      v26 = v30;
    }
    else
    {
      v17 = AweNode[4];
      v30 = (__int64)AweNode;
      v18 = *(_DWORD *)(AweNode[3] + 48LL) & 0x2200000;
      AwePageSize = MiGetAwePageSize(v17);
      v32 = AwePageSize;
      v21 = -1073741585;
      while ( 1 )
      {
        v22 = *v12;
        if ( AwePageSize == 1 )
        {
          v23 = *v12;
        }
        else
        {
          if ( (((AwePageSize << 12) - 1) & v22) != 0 )
            goto LABEL_40;
          v23 = (AwePageSize << 12) + v22 - 1;
        }
        if ( v22 < (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12
          || v23 > (((*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) << 12) | 0xFFF) )
        {
          v24 = MiGetAweNode(*v12);
          if ( !v24 || (v24[5] & 3) != 0 || v24[4] != v17 )
          {
LABEL_40:
            v13 = v21;
            goto LABEL_41;
          }
          v20 = v24[3];
          v25 = *(_DWORD *)(v20 + 48) & 0x2200000;
          if ( v18 == 35651584 )
          {
            if ( v25 != 35651584 )
              v13 = v21;
          }
          else if ( v25 == 35651584 )
          {
            v13 = v21;
          }
        }
        if ( (unsigned __int64)++v12 >= v31 )
          break;
        AwePageSize = v32;
      }
      v26 = v30;
      v27 = MiLockAwePagesShared(v17, (__int64)CurrentThread);
      if ( !v10
        || (v13 = MiReferenceIncomingPhysicalPages(
                    v17,
                    (__int64)v10,
                    NumberOfPages,
                    (__int64)Pool,
                    (__int64 *)&v34,
                    v30,
                    0LL),
            v13 >= 0) )
      {
        *((_QWORD *)&v34 + 1) = MiWriteAwePtes(v30, (__int64)v10, NumberOfPages, (__int64)Pool, 0LL, 1);
      }
      if ( v27 )
        MiUnlockAweVadsShared((__int64)CurrentThread, v27);
    }
    if ( v33 )
      MiUnlockAweVadsShared((__int64)CurrentThread, v33);
  }
  v28 = &v34;
  v29 = 2LL;
  do
  {
    if ( *(_QWORD *)v28 )
      MiFreePhysicalPageChain(*(_QWORD *)(v26 + 32), *(_QWORD **)v28);
    v28 = (__int128 *)((char *)v28 + 8);
    --v29;
  }
  while ( v29 );
  if ( Pool != (unsigned __int64 *)P )
    ExFreePoolWithTag(Pool, 0);
  return v13;
}
