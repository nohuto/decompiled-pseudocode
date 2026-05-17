/*
 * XREFs of RtlRegisterWait @ 0x18004D620
 * Callers:
 *     <none>
 * Callees:
 *     TpSetWaitEx @ 0x180030740 (TpSetWaitEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpTpRevertCapture @ 0x18004D870 (RtlpTpRevertCapture.c)
 *     RtlpTpInitializeData @ 0x18004D8F0 (RtlpTpInitializeData.c)
 *     TpAllocWait @ 0x18004D980 (TpAllocWait.c)
 *     RtlpTpResumeImpersonation @ 0x18004DB1C (RtlpTpResumeImpersonation.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 */

__int64 __fastcall RtlRegisterWait(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  int v9; // edi
  __int64 Heap; // rax
  __int64 v11; // rbx
  int v12; // eax
  char v14; // [rsp+20h] [rbp-98h]
  int v15; // [rsp+24h] [rbp-94h]
  __int64 v16; // [rsp+28h] [rbp-90h]
  __int64 v17; // [rsp+30h] [rbp-88h] BYREF
  int v18; // [rsp+40h] [rbp-78h] BYREF
  __int64 v19; // [rsp+48h] [rbp-70h]
  __int64 v20; // [rsp+50h] [rbp-68h]
  __int64 v21; // [rsp+58h] [rbp-60h]
  __int128 v22; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall *v23)(); // [rsp+70h] [rbp-48h]
  int v24; // [rsp+78h] [rbp-40h]
  int v25; // [rsp+7Ch] [rbp-3Ch]
  int v26; // [rsp+80h] [rbp-38h]

  v14 = 0;
  v17 = 0LL;
  v16 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFCuLL || !a3 )
    return 3221225485LL;
  *a1 = 0LL;
  v9 = RtlpTpRevertCapture(&v17, a6 & 0x100);
  v15 = v9;
  if ( v9 < 0 )
  {
    v11 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 96LL);
    v11 = Heap;
    v16 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 48) = 0LL;
      v9 = RtlpTpInitializeData(Heap, a6, v17);
      v15 = v9;
      if ( v9 >= 0 )
      {
        v14 = 1;
        *(_QWORD *)(v11 + 16) = 0LL;
        *(_DWORD *)(v11 + 24) = 0;
        *(_QWORD *)(v11 + 32) = a3;
        *(_QWORD *)(v11 + 40) = a4;
        *(_QWORD *)(v11 + 56) = a2;
        if ( a5 == -1 )
        {
          *(_QWORD *)(v11 + 64) = 0LL;
          *(_QWORD *)(v11 + 72) = 0LL;
        }
        else
        {
          *(_QWORD *)(v11 + 64) = a5;
          *(_QWORD *)(v11 + 64) = -10000LL * a5;
          *(_QWORD *)(v11 + 72) = v11 + 64;
        }
        *(_QWORD *)(v11 + 80) = 0LL;
        *(_DWORD *)(v11 + 88) = 0;
        v18 = 3;
        v19 = 0LL;
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0LL;
        v23 = 0LL;
        v24 = 0;
        v25 = 1;
        v26 = 72;
        v12 = 0;
        if ( (a6 & 0xC4) != 0 )
        {
          v12 = 2;
          v24 = 2;
        }
        if ( (a6 & 0x10) != 0 )
          v24 = v12 | 1;
        v23 = RtlpTpWaitFinalizationCallback;
        v9 = TpAllocWait(v11 + 48, RtlpTpWaitCallback, v11, &v18);
        v15 = v9;
        if ( v9 >= 0 )
        {
          RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v11 + 16));
          *a1 = v11;
          TpSetWaitEx(*(_QWORD *)(v11 + 48), a2, *(__int64 **)(v11 + 72), 0LL);
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v11 + 16));
          v11 = 0LL;
          v16 = 0LL;
          v9 = 0;
          v15 = 0;
        }
      }
    }
    else
    {
      v9 = -1073741801;
      v15 = -1073741801;
    }
  }
  if ( v11 )
  {
    if ( v14 )
    {
      if ( *(_QWORD *)v11 )
        NtClose(*(HANDLE *)v11);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16);
    v9 = v15;
  }
  RtlpTpResumeImpersonation(v17);
  return (unsigned int)v9;
}
