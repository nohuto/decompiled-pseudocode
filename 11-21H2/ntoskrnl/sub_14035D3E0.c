/*
 * XREFs of sub_14035D3E0 @ 0x14035D3E0
 * Callers:
 *     FsRtlAcquireEofLock @ 0x14035D230 (FsRtlAcquireEofLock.c)
 *     FsRtlGetIoAtEof @ 0x14035D610 (FsRtlGetIoAtEof.c)
 * Callees:
 *     sub_140280754 @ 0x140280754 (sub_140280754.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     FsRtlReleaseHeaderMutex @ 0x1402AE130 (FsRtlReleaseHeaderMutex.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     sub_1403438F0 @ 0x1403438F0 (sub_1403438F0.c)
 *     FsRtlAcquireHeaderMutex @ 0x140347B70 (FsRtlAcquireHeaderMutex.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 */

char __fastcall sub_14035D3E0(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  KSPIN_LOCK *v6; // r14
  int v7; // esi
  int v8; // eax
  int v9; // r8d
  KPRIORITY PriorityThread; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 **v15; // rax
  KPRIORITY v17; // ecx
  KPRIORITY v18; // eax
  int v19; // ecx
  int v20; // eax
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  __int64 **v22; // [rsp+38h] [rbp-38h]
  __int16 Object; // [rsp+40h] [rbp-30h] BYREF
  char v24; // [rsp+42h] [rbp-2Eh]
  char v25; // [rsp+43h] [rbp-2Dh]
  int v26; // [rsp+44h] [rbp-2Ch]
  _QWORD v27[4]; // [rsp+48h] [rbp-28h] BYREF
  KPRIORITY v28; // [rsp+68h] [rbp-8h]
  int v29; // [rsp+6Ch] [rbp-4h]

  v21 = 0LL;
  v22 = 0LL;
  v25 = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = *(KSPIN_LOCK **)a1;
  v7 = sub_14033D760((__int64)CurrentThread);
  if ( v7 >= 2 )
    v7 = 2;
  if ( v7 > 1 && !*(_BYTE *)(a1 + 36) )
  {
    v8 = sub_14033D760((__int64)v6);
    if ( v8 < v9 )
    {
      sub_1402ACD80((__int64)v6, 0, 0, 0LL);
      sub_140280754(v6, v7, 0);
      *(_BYTE *)(a1 + 36) = 1;
    }
  }
  PriorityThread = KeQueryPriorityThread(CurrentThread);
  if ( PriorityThread >= 15 )
    PriorityThread = 15;
  if ( PriorityThread > *(_DWORD *)(a1 + 32) )
  {
    *(_DWORD *)(a1 + 32) = PriorityThread;
    if ( PriorityThread > KeQueryPriorityThread((PKTHREAD)v6) )
      sub_1403438F0((__int64)v6, (unsigned int)PriorityThread, v11, v12);
  }
  v13 = *(_QWORD *)(a1 + 16);
  v14 = a1 + 8;
  while ( v13 != v14 )
  {
    v17 = *(_DWORD *)(v13 + 56);
    if ( v17 >= PriorityThread && *(_DWORD *)(v13 + 60) >= v7 )
      break;
    v18 = PriorityThread;
    if ( PriorityThread <= v17 )
      v18 = *(_DWORD *)(v13 + 56);
    v19 = *(_DWORD *)(v13 + 60);
    *(_DWORD *)(v13 + 56) = v18;
    v20 = v7;
    if ( v7 <= v19 )
      v20 = v19;
    *(_DWORD *)(v13 + 60) = v20;
    v13 = *(_QWORD *)(v13 + 8);
  }
  v26 = 0;
  v27[1] = v27;
  v27[0] = v27;
  v15 = *(__int64 ***)(a1 + 16);
  Object = 1;
  v24 = 6;
  v27[3] = CurrentThread;
  v28 = PriorityThread;
  v29 = v7;
  v27[2] = a3;
  if ( *v15 != (__int64 *)v14 )
    __fastfail(3u);
  v22 = v15;
  v21 = a1 + 8;
  *v15 = &v21;
  *(_QWORD *)(a1 + 16) = &v21;
  FsRtlReleaseHeaderMutex(a1, a2);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  FsRtlAcquireHeaderMutex(a1, a2);
  if ( a3 >= 0 && a3 <= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
    return 0;
  if ( v7 < 2 && v29 >= 2 && !*(_BYTE *)(a1 + 36) )
  {
    sub_1402ACD80((__int64)CurrentThread, 0, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 1;
  }
  return 1;
}
