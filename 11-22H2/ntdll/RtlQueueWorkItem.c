/*
 * XREFs of RtlQueueWorkItem @ 0x18004CB70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180020CE0 (RtlpxLookupFunctionTable.c)
 *     LdrAddRefDll @ 0x18002D410 (LdrAddRefDll.c)
 *     LdrUnloadDll @ 0x18002D5B0 (LdrUnloadDll.c)
 *     RtlQueryInformationActivationContext @ 0x180033680 (RtlQueryInformationActivationContext.c)
 *     RtlReleaseActivationContext @ 0x180033EF0 (RtlReleaseActivationContext.c)
 *     TpPostTask @ 0x18003545C (TpPostTask.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpTpRevertCapture @ 0x18004D9D0 (RtlpTpRevertCapture.c)
 *     RtlpTpInitializeData @ 0x18004DA50 (RtlpTpInitializeData.c)
 *     RtlpTpResumeImpersonation @ 0x18004DC7C (RtlpTpResumeImpersonation.c)
 *     TpReserveTaskPost @ 0x18004FA10 (TpReserveTaskPost.c)
 *     RtlpTpWorkUnposted @ 0x18004FAA0 (RtlpTpWorkUnposted.c)
 *     TpUnreserveTaskPost @ 0x18004FB90 (TpUnreserveTaskPost.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     RtlpTpETWCallbackEnqueue @ 0x180125FC4 (RtlpTpETWCallbackEnqueue.c)
 */

__int64 __fastcall RtlQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // edi
  __int64 Heap; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  int InformationActivationContext; // eax
  _QWORD *v10; // rdi
  unsigned __int64 *v11; // r12
  __int64 *v12; // rsi
  int v13; // eax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  volatile signed __int32 *v17; // rcx
  void *v18; // rcx
  char v19; // [rsp+40h] [rbp-D8h]
  char v20; // [rsp+41h] [rbp-D7h]
  char v21; // [rsp+42h] [rbp-D6h]
  char v22; // [rsp+43h] [rbp-D5h]
  int v23; // [rsp+44h] [rbp-D4h]
  __int64 v24; // [rsp+48h] [rbp-D0h]
  __int128 v25; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD *v26; // [rsp+60h] [rbp-B8h]
  int v27; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+78h] [rbp-A0h]
  __int64 v29; // [rsp+80h] [rbp-98h]
  __int64 v30; // [rsp+88h] [rbp-90h]
  __int128 v31; // [rsp+90h] [rbp-88h]
  __int64 v32; // [rsp+A0h] [rbp-78h]
  int v33; // [rsp+A8h] [rbp-70h]
  int v34; // [rsp+ACh] [rbp-6Ch]
  int v35; // [rsp+B0h] [rbp-68h]
  __int128 v36; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-48h]
  struct _TEB *v38; // [rsp+D8h] [rbp-40h]
  struct _TEB *v39; // [rsp+E0h] [rbp-38h]
  struct _TEB *v40; // [rsp+E8h] [rbp-30h]
  __int64 v42; // [rsp+138h] [rbp+20h] BYREF

  v25 = 0LL;
  v19 = 0;
  v21 = 0;
  v22 = 0;
  v20 = 0;
  v42 = 0LL;
  v24 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  v5 = RtlpTpRevertCapture(&v42, a3 & 0x100);
  v23 = v5;
  if ( v5 < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 120LL);
    v7 = (_QWORD *)Heap;
    v24 = Heap;
    v8 = Heap;
    if ( Heap )
    {
      v5 = RtlpTpInitializeData(Heap + 40, a3, v42);
      v23 = v5;
      if ( v5 >= 0 )
      {
        v22 = 1;
        v38 = NtCurrentTeb();
        *(_QWORD *)(v24 + 96) = v38->SubProcessTag;
        v39 = NtCurrentTeb();
        v7 = (_QWORD *)v24;
        *(_GUID *)(v24 + 104) = v39->ActivityId;
        InformationActivationContext = RtlQueryInformationActivationContext(1, 0LL, 0LL, 1, (__int64)&v25, 0x10uLL, 0LL);
        v5 = InformationActivationContext;
        v23 = InformationActivationContext;
        if ( InformationActivationContext >= 0 )
        {
          v10 = (_QWORD *)(v8 + 72);
LABEL_7:
          if ( (BYTE8(v25) & 1) != 0 )
          {
            RtlReleaseActivationContext((volatile signed __int32 *)v25);
            *(_QWORD *)&v25 = -1LL;
          }
          *v10 = v25;
          v19 = 1;
          *(_DWORD *)(v24 + 88) = 2;
          v11 = (unsigned __int64 *)(v24 + 56);
          *(_QWORD *)(v24 + 56) = a1;
          v26 = (_QWORD *)(v24 + 64);
          *(_QWORD *)(v24 + 64) = a2;
          v12 = (__int64 *)(v24 + 32);
          *(_QWORD *)(v24 + 32) = 0LL;
          v27 = 3;
          v28 = 0LL;
          v29 = 0LL;
          v30 = 0LL;
          v31 = 0LL;
          v32 = 0LL;
          v33 = 0;
          v34 = 1;
          v35 = 72;
          v13 = 0;
          if ( (a3 & 0xC0) != 0 )
            v13 = 2;
          v33 = v13;
          *(_QWORD *)v24 = RtlpTpWorkTaskCallbacks;
          *(_DWORD *)(v24 + 8) = 0;
          v5 = TpReserveTaskPost(0LL, v24, &v27);
          v23 = v5;
          if ( v5 >= 0 )
          {
            v20 = 1;
            if ( *v11 < *((_QWORD *)&xmmword_180199520 + 1)
              || *v11 >= *((_QWORD *)&xmmword_180199520 + 1) + (unsigned __int64)(unsigned int)qword_180199530 )
            {
              RtlpxLookupFunctionTable(*v11, (__int64 *)&v36);
            }
            else
            {
              v36 = xmmword_180199520;
              v37 = qword_180199530;
            }
            v14 = *((_QWORD *)&v36 + 1);
            *(_QWORD *)(v24 + 80) = *((_QWORD *)&v36 + 1);
            if ( v14 )
            {
              LdrAddRefDll(0, v14);
              v21 = 1;
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
              {
                v15 = (__int64)NtCurrentPeb()->SharedData + 556;
                v7 = (_QWORD *)v24;
              }
              else
              {
                v15 = 2147353478LL;
              }
              if ( *(_BYTE *)v15 )
              {
                v40 = NtCurrentTeb();
                v7 = (_QWORD *)v24;
                RtlpTpETWCallbackEnqueue(*v12, v24, *v11, *v26, (__int64)v40->SubProcessTag);
              }
              TpPostTask((__int64)v7, *v12, 1, (__int64)&v27);
              if ( !_InterlockedDecrement((volatile signed __int32 *)(v24 + 88)) )
                RtlpTpWorkUnposted(v24, *v12);
              v7 = 0LL;
              v24 = 0LL;
              v5 = 0;
              v23 = 0;
            }
          }
          goto LABEL_29;
        }
        if ( InformationActivationContext == -1072365557 )
        {
          v10 = (_QWORD *)(v24 + 72);
          *(_QWORD *)(v24 + 72) = -1LL;
          goto LABEL_7;
        }
      }
    }
    else
    {
      v5 = -1073741801;
      v23 = -1073741801;
    }
  }
LABEL_29:
  if ( v7 )
  {
    if ( v19 )
    {
      v17 = (volatile signed __int32 *)v7[9];
      if ( v17 != (volatile signed __int32 *)-1LL )
        RtlReleaseActivationContext(v17);
    }
    if ( v20 )
      TpUnreserveTaskPost(v7[4], &v27);
    if ( v21 )
      LdrUnloadDll(v7[10]);
    if ( v22 )
    {
      v18 = (void *)v7[5];
      if ( v18 )
        NtClose(v18);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v24);
    v5 = v23;
  }
  RtlpTpResumeImpersonation(v42);
  return (unsigned int)v5;
}
