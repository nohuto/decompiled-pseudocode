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

NTSTATUS __cdecl RtlQueueWorkItem(WORKERCALLBACKFUNC Function, PVOID Context, ULONG Flags)
{
  char v3; // si
  NTSTATUS v6; // edi
  HANDLE *Heap; // rax
  __int64 v8; // rbx
  NTSTATUS InformationActivationContext; // eax
  PVOID *v10; // r12
  char **v11; // r14
  int v12; // eax
  PVOID v13; // rdx
  __int64 v14; // rcx
  _ACTIVATION_CONTEXT *v16; // rcx
  void *v17; // rcx
  char v18; // [rsp+40h] [rbp-C8h]
  char v19; // [rsp+41h] [rbp-C7h]
  char v20; // [rsp+42h] [rbp-C6h]
  char v21; // [rsp+43h] [rbp-C5h]
  int v22; // [rsp+44h] [rbp-C4h]
  HANDLE *BaseAddress; // [rsp+48h] [rbp-C0h]
  PACTIVATION_CONTEXT ActivationContext[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-98h]
  __int64 v28; // [rsp+78h] [rbp-90h]
  __int128 v29; // [rsp+80h] [rbp-88h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  int v31; // [rsp+98h] [rbp-70h]
  int v32; // [rsp+9Ch] [rbp-6Ch]
  int v33; // [rsp+A0h] [rbp-68h]
  PVOID DllHandle[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-48h]
  struct _TEB *v36; // [rsp+C8h] [rbp-40h]
  struct _TEB *v37; // [rsp+D0h] [rbp-38h]
  struct _TEB *v38; // [rsp+D8h] [rbp-30h]
  HANDLE v39; // [rsp+128h] [rbp+20h] BYREF

  v3 = Flags;
  *(_OWORD *)ActivationContext = 0LL;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v39 = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  v6 = RtlpTpRevertCapture(&v39);
  v22 = v6;
  if ( v6 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    Heap = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
    v8 = (__int64)Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      v6 = RtlpTpInitializeData(Heap + 5);
      v22 = v6;
      if ( v6 >= 0 )
      {
        v21 = 1;
        v36 = NtCurrentTeb();
        BaseAddress[12] = v36->SubProcessTag;
        v37 = NtCurrentTeb();
        v8 = (__int64)BaseAddress;
        *(_GUID *)(BaseAddress + 13) = v37->ActivityId;
        InformationActivationContext = RtlQueryInformationActivationContext(
                                         1u,
                                         0LL,
                                         0LL,
                                         ActivationContextBasicInformation,
                                         ActivationContext,
                                         0x10uLL,
                                         0LL);
        v6 = InformationActivationContext;
        v22 = InformationActivationContext;
        if ( InformationActivationContext >= 0 )
        {
LABEL_6:
          if ( ((__int64)ActivationContext[1] & 1) != 0 )
          {
            RtlReleaseActivationContext(ActivationContext[0]);
            ActivationContext[0] = (PACTIVATION_CONTEXT)-1LL;
          }
          BaseAddress[9] = ActivationContext[0];
          v18 = 1;
          *((_DWORD *)BaseAddress + 22) = 2;
          v10 = BaseAddress + 7;
          BaseAddress[7] = Function;
          BaseAddress[8] = Context;
          v11 = (char **)(BaseAddress + 4);
          BaseAddress[4] = 0LL;
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
          if ( (v3 & 0xC0) != 0 )
            v12 = 2;
          v31 = v12;
          *BaseAddress = &RtlpTpWorkTaskCallbacks;
          *((_DWORD *)BaseAddress + 2) = 0;
          v6 = TpReserveTaskPost(0LL, BaseAddress, &v25);
          v22 = v6;
          if ( v6 >= 0 )
          {
            v19 = 1;
            if ( (unsigned __int64)*v10 < *((_QWORD *)&xmmword_18018F510 + 1)
              || (unsigned __int64)*v10 >= *((_QWORD *)&xmmword_18018F510 + 1)
                                         + (unsigned __int64)(unsigned int)qword_18018F520 )
            {
              RtlpxLookupFunctionTable(*v10, (__int64 *)DllHandle);
            }
            else
            {
              *(_OWORD *)DllHandle = xmmword_18018F510;
              v35 = qword_18018F520;
            }
            v13 = DllHandle[1];
            BaseAddress[10] = DllHandle[1];
            if ( v13 )
            {
              LdrAddRefDll(0, v13);
              v20 = 1;
              if ( RtlGetCurrentServiceSessionId() )
              {
                v14 = (__int64)NtCurrentPeb()->SharedData + 556;
                v8 = (__int64)BaseAddress;
              }
              else
              {
                v14 = 2147353478LL;
              }
              if ( *(_BYTE *)v14 )
              {
                v38 = NtCurrentTeb();
                v8 = (__int64)BaseAddress;
                RtlpTpETWCallbackEnqueue(
                  (unsigned int)*v11,
                  (_DWORD)BaseAddress,
                  (unsigned int)*v10,
                  (unsigned int)BaseAddress[8],
                  (__int64)v38->SubProcessTag);
              }
              TpPostTask(v8, *v11, 1, (__int64)&v25);
              if ( !_InterlockedDecrement((volatile signed __int32 *)BaseAddress + 22) )
                RtlpTpWorkUnposted(BaseAddress, *v11);
              v8 = 0LL;
              BaseAddress = 0LL;
              v6 = 0;
              v22 = 0;
            }
          }
          goto LABEL_28;
        }
        if ( InformationActivationContext == -1072365557 )
        {
          BaseAddress[9] = (HANDLE)-1LL;
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
      v16 = *(_ACTIVATION_CONTEXT **)(v8 + 72);
      if ( v16 != (_ACTIVATION_CONTEXT *)-1LL )
        RtlReleaseActivationContext(v16);
    }
    if ( v19 )
      TpUnreserveTaskPost(*(_QWORD *)(v8 + 32), &v25);
    if ( v20 )
      LdrUnloadDll(*(PVOID *)(v8 + 80));
    if ( v21 )
    {
      v17 = *(void **)(v8 + 40);
      if ( v17 )
        NtClose(v17);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v6 = v22;
  }
  RtlpTpResumeImpersonation(v39);
  return v6;
}
