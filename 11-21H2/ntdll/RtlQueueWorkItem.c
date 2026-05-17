/*
 * XREFs of RtlQueueWorkItem @ 0x180070160
 * Callers:
 *     <none>
 * Callees:
 *     TpPostTask @ 0x18001B374 (TpPostTask.c)
 *     RtlQueryInformationActivationContext @ 0x18001BC10 (RtlQueryInformationActivationContext.c)
 *     RtlReleaseActivationContext @ 0x18001C640 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrAddRefDll @ 0x180035130 (LdrAddRefDll.c)
 *     LdrUnloadDll @ 0x180038270 (LdrUnloadDll.c)
 *     RtlpxLookupFunctionTable @ 0x18003A100 (RtlpxLookupFunctionTable.c)
 *     RtlpTpResumeImpersonation @ 0x1800707A0 (RtlpTpResumeImpersonation.c)
 *     RtlpTpInitializeData @ 0x1800707E4 (RtlpTpInitializeData.c)
 *     RtlpTpRevertCapture @ 0x180070858 (RtlpTpRevertCapture.c)
 *     TpReserveTaskPost @ 0x1800708D8 (TpReserveTaskPost.c)
 *     RtlpTpWorkUnposted @ 0x180071130 (RtlpTpWorkUnposted.c)
 *     TpUnreserveTaskPost @ 0x180071220 (TpUnreserveTaskPost.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     RtlpTpETWCallbackEnqueue @ 0x180124584 (RtlpTpETWCallbackEnqueue.c)
 */

__int64 __fastcall RtlQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // edi
  __int64 Heap; // rax
  _QWORD *v8; // rbx
  int InformationActivationContext; // eax
  unsigned __int64 *v10; // r12
  __int64 *v11; // r14
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  volatile signed __int32 *v16; // rcx
  void *v17; // rcx
  char v18; // [rsp+40h] [rbp-C8h]
  char v19; // [rsp+41h] [rbp-C7h]
  char v20; // [rsp+42h] [rbp-C6h]
  char v21; // [rsp+43h] [rbp-C5h]
  int v22; // [rsp+44h] [rbp-C4h]
  __int64 v23; // [rsp+48h] [rbp-C0h]
  __int128 v24; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-98h]
  __int64 v28; // [rsp+78h] [rbp-90h]
  __int128 v29; // [rsp+80h] [rbp-88h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  int v31; // [rsp+98h] [rbp-70h]
  int v32; // [rsp+9Ch] [rbp-6Ch]
  int v33; // [rsp+A0h] [rbp-68h]
  __int128 v34; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-48h]
  struct _TEB *v36; // [rsp+C8h] [rbp-40h]
  struct _TEB *v37; // [rsp+D0h] [rbp-38h]
  struct _TEB *v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+128h] [rbp+20h] BYREF

  v24 = 0LL;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v39 = 0LL;
  v23 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  v6 = RtlpTpRevertCapture(&v39, a3 & 0x100);
  v22 = v6;
  if ( v6 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 120LL);
    v8 = (_QWORD *)Heap;
    v23 = Heap;
    if ( Heap )
    {
      v6 = RtlpTpInitializeData(Heap + 40, a3, v39);
      v22 = v6;
      if ( v6 >= 0 )
      {
        v21 = 1;
        v36 = NtCurrentTeb();
        *(_QWORD *)(v23 + 96) = v36->SubProcessTag;
        v37 = NtCurrentTeb();
        v8 = (_QWORD *)v23;
        *(_GUID *)(v23 + 104) = v37->ActivityId;
        InformationActivationContext = RtlQueryInformationActivationContext(1, 0LL, 0LL, 1, (__int64)&v24, 0x10uLL, 0LL);
        v6 = InformationActivationContext;
        v22 = InformationActivationContext;
        if ( InformationActivationContext >= 0 )
        {
LABEL_6:
          if ( (BYTE8(v24) & 1) != 0 )
          {
            RtlReleaseActivationContext((volatile signed __int32 *)v24);
            *(_QWORD *)&v24 = -1LL;
          }
          *(_QWORD *)(v23 + 72) = v24;
          v18 = 1;
          *(_DWORD *)(v23 + 88) = 2;
          v10 = (unsigned __int64 *)(v23 + 56);
          *(_QWORD *)(v23 + 56) = a1;
          *(_QWORD *)(v23 + 64) = a2;
          v11 = (__int64 *)(v23 + 32);
          *(_QWORD *)(v23 + 32) = 0LL;
          v25 = 3;
          v26 = 0LL;
          v27 = 0LL;
          v28 = 0LL;
          v29 = 0LL;
          v30 = 0LL;
          v31 = 0;
          v32 = 1;
          v33 = 72;
          v12 = 0;
          if ( (a3 & 0xC0) != 0 )
            v12 = 2;
          v31 = v12;
          *(_QWORD *)v23 = RtlpTpWorkTaskCallbacks;
          *(_DWORD *)(v23 + 8) = 0;
          v6 = TpReserveTaskPost(0LL, v23, &v25);
          v22 = v6;
          if ( v6 >= 0 )
          {
            v19 = 1;
            if ( *v10 < *((_QWORD *)&xmmword_18018F510 + 1)
              || *v10 >= *((_QWORD *)&xmmword_18018F510 + 1) + (unsigned __int64)(unsigned int)qword_18018F520 )
            {
              RtlpxLookupFunctionTable(*v10, (__int64 *)&v34);
            }
            else
            {
              v34 = xmmword_18018F510;
              v35 = qword_18018F520;
            }
            v13 = *((_QWORD *)&v34 + 1);
            *(_QWORD *)(v23 + 80) = *((_QWORD *)&v34 + 1);
            if ( v13 )
            {
              LdrAddRefDll(0, v13);
              v20 = 1;
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
              {
                v14 = (__int64)NtCurrentPeb()->SharedData + 556;
                v8 = (_QWORD *)v23;
              }
              else
              {
                v14 = 2147353478LL;
              }
              if ( *(_BYTE *)v14 )
              {
                v38 = NtCurrentTeb();
                v8 = (_QWORD *)v23;
                RtlpTpETWCallbackEnqueue(*v11, v23, *v10, *(_QWORD *)(v23 + 64), (__int64)v38->SubProcessTag);
              }
              TpPostTask((__int64)v8, *v11, 1uLL, (unsigned __int64)&v25);
              if ( !_InterlockedDecrement((volatile signed __int32 *)(v23 + 88)) )
                RtlpTpWorkUnposted(v23, *v11);
              v8 = 0LL;
              v23 = 0LL;
              v6 = 0;
              v22 = 0;
            }
          }
          goto LABEL_28;
        }
        if ( InformationActivationContext == -1072365557 )
        {
          *(_QWORD *)(v23 + 72) = -1LL;
          goto LABEL_6;
        }
      }
    }
    else
    {
      v6 = -1073741801;
      v22 = -1073741801;
    }
  }
LABEL_28:
  if ( v8 )
  {
    if ( v18 )
    {
      v16 = (volatile signed __int32 *)v8[9];
      if ( v16 != (volatile signed __int32 *)-1LL )
        RtlReleaseActivationContext(v16);
    }
    if ( v19 )
      TpUnreserveTaskPost(v8[4], &v25);
    if ( v20 )
      LdrUnloadDll(v8[10]);
    if ( v21 )
    {
      v17 = (void *)v8[5];
      if ( v17 )
        NtClose(v17);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v23);
    v6 = v22;
  }
  RtlpTpResumeImpersonation(v39);
  return (unsigned int)v6;
}
