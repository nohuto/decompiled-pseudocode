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

NTSTATUS __cdecl RtlQueueWorkItem(WORKERCALLBACKFUNC Function, PVOID Context, ULONG Flags)
{
  char v3; // r14
  NTSTATUS v5; // edi
  HANDLE *Heap; // rax
  __int64 v7; // rbx
  HANDLE *v8; // rsi
  NTSTATUS InformationActivationContext; // eax
  PACTIVATION_CONTEXT *v10; // rdi
  PVOID *v11; // r12
  char **v12; // rsi
  int v13; // eax
  PVOID v14; // rdx
  __int64 v15; // rcx
  _ACTIVATION_CONTEXT *v17; // rcx
  void *v18; // rcx
  char v19; // [rsp+40h] [rbp-D8h]
  char v20; // [rsp+41h] [rbp-D7h]
  char v21; // [rsp+42h] [rbp-D6h]
  char v22; // [rsp+43h] [rbp-D5h]
  int v23; // [rsp+44h] [rbp-D4h]
  HANDLE *BaseAddress; // [rsp+48h] [rbp-D0h]
  PACTIVATION_CONTEXT ActivationContext[2]; // [rsp+50h] [rbp-C8h] BYREF
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
  PVOID DllHandle[2]; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-48h]
  struct _TEB *v38; // [rsp+D8h] [rbp-40h]
  struct _TEB *v39; // [rsp+E0h] [rbp-38h]
  struct _TEB *v40; // [rsp+E8h] [rbp-30h]
  HANDLE v42; // [rsp+138h] [rbp+20h] BYREF

  v3 = Flags;
  *(_OWORD *)ActivationContext = 0LL;
  v19 = 0;
  v21 = 0;
  v22 = 0;
  v20 = 0;
  v42 = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  v5 = RtlpTpRevertCapture(&v42);
  v23 = v5;
  if ( v5 < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    Heap = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
    v7 = (__int64)Heap;
    BaseAddress = Heap;
    v8 = Heap;
    if ( Heap )
    {
      v5 = RtlpTpInitializeData(Heap + 5);
      v23 = v5;
      if ( v5 >= 0 )
      {
        v22 = 1;
        v38 = NtCurrentTeb();
        BaseAddress[12] = v38->SubProcessTag;
        v39 = NtCurrentTeb();
        v7 = (__int64)BaseAddress;
        *(_GUID *)(BaseAddress + 13) = v39->ActivityId;
        InformationActivationContext = RtlQueryInformationActivationContext(
                                         1u,
                                         0LL,
                                         0LL,
                                         ActivationContextBasicInformation,
                                         ActivationContext,
                                         0x10uLL,
                                         0LL);
        v5 = InformationActivationContext;
        v23 = InformationActivationContext;
        if ( InformationActivationContext >= 0 )
        {
          v10 = (PACTIVATION_CONTEXT *)(v8 + 9);
LABEL_7:
          if ( ((__int64)ActivationContext[1] & 1) != 0 )
          {
            RtlReleaseActivationContext(ActivationContext[0]);
            ActivationContext[0] = (PACTIVATION_CONTEXT)-1LL;
          }
          *v10 = ActivationContext[0];
          v19 = 1;
          *((_DWORD *)BaseAddress + 22) = 2;
          v11 = BaseAddress + 7;
          BaseAddress[7] = Function;
          v26 = BaseAddress + 8;
          BaseAddress[8] = Context;
          v12 = (char **)(BaseAddress + 4);
          BaseAddress[4] = 0LL;
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
          if ( (v3 & 0xC0) != 0 )
            v13 = 2;
          v33 = v13;
          *BaseAddress = &RtlpTpWorkTaskCallbacks;
          *((_DWORD *)BaseAddress + 2) = 0;
          v5 = TpReserveTaskPost(0LL, BaseAddress, &v27);
          v23 = v5;
          if ( v5 >= 0 )
          {
            v20 = 1;
            if ( (unsigned __int64)*v11 < *((_QWORD *)&xmmword_180199520 + 1)
              || (unsigned __int64)*v11 >= *((_QWORD *)&xmmword_180199520 + 1)
                                         + (unsigned __int64)(unsigned int)qword_180199530 )
            {
              RtlpxLookupFunctionTable(*v11, (__int64 *)DllHandle);
            }
            else
            {
              *(_OWORD *)DllHandle = xmmword_180199520;
              v37 = qword_180199530;
            }
            v14 = DllHandle[1];
            BaseAddress[10] = DllHandle[1];
            if ( v14 )
            {
              LdrAddRefDll(0, v14);
              v21 = 1;
              if ( RtlGetCurrentServiceSessionId() )
              {
                v15 = (__int64)NtCurrentPeb()->SharedData + 556;
                v7 = (__int64)BaseAddress;
              }
              else
              {
                v15 = 2147353478LL;
              }
              if ( *(_BYTE *)v15 )
              {
                v40 = NtCurrentTeb();
                v7 = (__int64)BaseAddress;
                RtlpTpETWCallbackEnqueue(
                  (unsigned int)*v12,
                  (_DWORD)BaseAddress,
                  (unsigned int)*v11,
                  *v26,
                  (__int64)v40->SubProcessTag);
              }
              TpPostTask(v7, *v12, 1, (__int64)&v27);
              if ( !_InterlockedDecrement((volatile signed __int32 *)BaseAddress + 22) )
                RtlpTpWorkUnposted(BaseAddress, *v12);
              v7 = 0LL;
              BaseAddress = 0LL;
              v5 = 0;
              v23 = 0;
            }
          }
          goto LABEL_29;
        }
        if ( InformationActivationContext == -1072365557 )
        {
          v10 = (PACTIVATION_CONTEXT *)(BaseAddress + 9);
          BaseAddress[9] = (HANDLE)-1LL;
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
      v17 = *(_ACTIVATION_CONTEXT **)(v7 + 72);
      if ( v17 != (_ACTIVATION_CONTEXT *)-1LL )
        RtlReleaseActivationContext(v17);
    }
    if ( v20 )
      TpUnreserveTaskPost(*(_QWORD *)(v7 + 32), &v27);
    if ( v21 )
      LdrUnloadDll(*(PVOID *)(v7 + 80));
    if ( v22 )
    {
      v18 = *(void **)(v7 + 40);
      if ( v18 )
        NtClose(v18);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v5 = v23;
  }
  RtlpTpResumeImpersonation(v42);
  return v5;
}
