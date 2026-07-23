/*
 * XREFs of CcPerfLogWorkItemEnqueue @ 0x140395734
 * Callers:
 *     CcPostWorkQueueRegular @ 0x140298944 (CcPostWorkQueueRegular.c)
 *     CcWorkerThread @ 0x140298BD0 (CcWorkerThread.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1402995A0 (CcPostWorkQueueCachemapUninit.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402C0E94 (CcPostWorkQueueAsyncRead.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403D47F0 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcPostWorkQueueSpecial @ 0x140537204 (CcPostWorkQueueSpecial.c)
 *     CcAsyncLazywriteWorker @ 0x140539D8C (CcAsyncLazywriteWorker.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x14053A684 (CcPostWorkQueueAsyncLazywrite.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402A1760 (CcReferenceSharedCacheMapFileObject.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2790 (ObFastDereferenceObjectDeferDelete.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall CcPerfLogWorkItemEnqueue(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v5; // rdx
  char v7; // bl
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int8 CurrentIrql; // al
  __int64 v13; // r8
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h]
  __int128 *v18; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+54h] [rbp-Ch]

  v5 = *(_QWORD *)(a2 + 152);
  v17 = 0LL;
  v16 = 0LL;
  if ( a1 == v5 + 72 )
  {
    v7 = 1;
    goto LABEL_6;
  }
  if ( a1 == v5 + 120 )
  {
    v7 = 7;
  }
  else if ( a1 == v5 + 88 )
  {
    v7 = 2;
  }
  else
  {
    if ( a1 == v5 + 104 )
      goto LABEL_5;
    if ( a1 == *(_QWORD *)(a2 + 136) + 848LL )
    {
      v7 = 4;
      goto LABEL_6;
    }
    if ( a1 == v5 + 312 || a1 == v5 + 424 )
    {
LABEL_5:
      v7 = 3;
    }
    else
    {
      v13 = *(_QWORD *)(v5 + 256);
      if ( a1 == v13 || a1 == v13 + 16 || a1 == v13 + 32 )
        v7 = 5;
      else
        v7 = a1 == 0 ? 6 : 0;
    }
  }
LABEL_6:
  v8 = *(_DWORD *)(a2 + 128);
  switch ( v8 )
  {
    case 2:
    case 7:
      BYTE1(v17) = 2;
      if ( a4 )
      {
        if ( v8 == 2 )
          v10 = *(_QWORD *)(a2 + 16);
        else
          v10 = *(_QWORD *)(a2 + 24);
        v9 = *(_QWORD *)(v10 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
        goto LABEL_14;
      }
      if ( v8 == 2 )
        v14 = *(_QWORD *)(a2 + 16);
      else
        v14 = *(_QWORD *)(a2 + 24);
      v15 = CcReferenceSharedCacheMapFileObject(v14);
      *((_QWORD *)&v16 + 1) = *(_QWORD *)(v15 + 24);
      ObFastDereferenceObjectDeferDelete((signed __int64 *)(v14 + 96), v15, 0x63536343u);
      break;
    case 1:
      BYTE1(v17) = 1;
      v9 = *(_QWORD *)(a2 + 16);
LABEL_14:
      *((_QWORD *)&v16 + 1) = *(_QWORD *)(v9 + 24);
      break;
    case 3:
      BYTE1(v17) = 3;
      break;
    case 4:
      BYTE1(v17) = 4;
      break;
  }
  LOBYTE(v17) = v7;
  *(_QWORD *)&v16 = a2;
  BYTE2(v17) = a3;
  CurrentIrql = KeGetCurrentIrql();
  v20 = 0;
  v19 = 24;
  v18 = &v16;
  if ( CurrentIrql >= 2u )
    return EtwTraceKernelEvent((int)&v18, 1, 0x80020000, 5632, 4194562);
  else
    return EtwTraceKernelEvent((int)&v18, 1, 0x80020000, 5632, 4200706);
}
