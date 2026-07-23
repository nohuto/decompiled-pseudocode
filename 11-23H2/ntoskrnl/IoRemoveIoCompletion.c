/*
 * XREFs of IoRemoveIoCompletion @ 0x1402A9FF0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9440 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRemoveIoCompletion @ 0x1407295F0 (NtRemoveIoCompletion.c)
 *     NtRemoveIoCompletionEx @ 0x1407AE4A0 (NtRemoveIoCompletionEx.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     IopFreeWaitCompletionPacket @ 0x140250D10 (IopFreeWaitCompletionPacket.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     IopDropIrp @ 0x14028D058 (IopDropIrp.c)
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 *     IopCompleteRequest @ 0x1402AB710 (IopCompleteRequest.c)
 *     IoFreeIrp @ 0x1402AF4A0 (IoFreeIrp.c)
 *     IopInterlockedAdd @ 0x14035EA84 (IopInterlockedAdd.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     IopFreeMiniCompletionPacket @ 0x140728E00 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoRemoveIoCompletion(
        struct _KQUEUE *a1,
        __int64 a2,
        PLIST_ENTRY *EntryArray,
        ULONG Count,
        ULONG *a5,
        KPROCESSOR_MODE a6,
        PLARGE_INTEGER Timeout,
        BOOLEAN a8)
{
  PLIST_ENTRY *v8; // rsi
  __int64 v9; // r12
  struct _KQUEUE *v10; // r13
  ULONG v11; // edi
  __int64 i; // rbx
  ULONG_PTR v13; // rcx
  char v14; // al
  ULONG_PTR v15; // rsi
  int v16; // eax
  unsigned __int64 v17; // r15
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 result; // rax
  __int64 v23; // [rsp+38h] [rbp-E0h]
  __int64 v24; // [rsp+40h] [rbp-D8h]
  __int64 v25; // [rsp+50h] [rbp-C8h] BYREF
  struct _KQUEUE *v26; // [rsp+58h] [rbp-C0h]
  __int128 v27; // [rsp+60h] [rbp-B8h]
  ULONG v28; // [rsp+70h] [rbp-A8h]
  PLIST_ENTRY *v29; // [rsp+78h] [rbp-A0h]
  char v30; // [rsp+80h] [rbp-98h] BYREF
  struct _KQUEUE *v31; // [rsp+88h] [rbp-90h]
  __int64 v32; // [rsp+90h] [rbp-88h]
  PLIST_ENTRY *v33; // [rsp+98h] [rbp-80h]
  ULONG *v34; // [rsp+A0h] [rbp-78h]
  $115DCDF994C6370D29323EAB0E0C9502 v35; // [rsp+A8h] [rbp-70h] BYREF

  v8 = EntryArray;
  v29 = EntryArray;
  v9 = a2;
  v10 = a1;
  v26 = a1;
  v31 = a1;
  v32 = a2;
  v33 = EntryArray;
  v34 = a5;
  v27 = 0LL;
  v11 = KeRemoveQueueEx(a1, a6, a8, Timeout, EntryArray, Count);
  v28 = v11;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v11 )
    {
      result = 0LL;
      goto LABEL_14;
    }
    v13 = (ULONG_PTR)v8[i];
    if ( v13 - 257 <= 1 || v13 == 192 || v13 == 128 )
      break;
    v14 = *(_BYTE *)(v13 + 16);
    if ( v14 )
    {
      if ( v14 == 2 )
      {
        v19 = *(_QWORD *)(v13 + 56);
        v18 = *(_QWORD *)(v13 + 48);
        LODWORD(v27) = *(_DWORD *)(v13 + 72);
        *((_QWORD *)&v27 + 1) = *(_QWORD *)(v13 + 64);
        IopFreeWaitCompletionPacket((_QWORD *)v13, v10);
      }
      else
      {
        v19 = *(_QWORD *)(v13 + 32);
        v18 = *(_QWORD *)(v13 + 24);
        LODWORD(v27) = *(_DWORD *)(v13 + 40);
        *((_QWORD *)&v27 + 1) = *(_QWORD *)(v13 + 48);
        IopFreeMiniCompletionPacket(v13);
      }
    }
    else
    {
      v15 = v13 - 168;
      v23 = *(_QWORD *)(v13 - 168 + 96);
      v24 = *(_QWORD *)(v13 - 168 + 120);
      v27 = *(_OWORD *)(v13 - 168 + 48);
      v16 = *(_DWORD *)(v13 - 168 + 16);
      if ( (v16 & 0x2000) != 0 )
      {
        v25 = 0LL;
        v17 = *(_QWORD *)(v15 + 88) & 0xFFFFFFFFFFFFFFF9uLL;
        memset(&v35, 0, sizeof(v35));
        *(_QWORD *)(v15 + 96) = 0LL;
        if ( (_KPROCESS *)v17 == KeGetCurrentThread()->ApcState.Process )
        {
          IopCompleteRequest(v15 + 120, (unsigned int)&v30, (unsigned int)&v25, v15 + 192, (__int64)&v25);
        }
        else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v17 + 1112)) )
        {
          KiStackAttachProcess((_KPROCESS *)v17, 0, (__int64)&v35);
          IopCompleteRequest(v15 + 120, (unsigned int)&v30, (unsigned int)&v25, v15 + 192, (__int64)&v25);
          KiUnstackDetachProcess(&v35);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v17 + 1112));
        }
        else
        {
          IopDropIrp((PIRP)v15, *(_QWORD *)(v15 + 192));
          LODWORD(v27) = -1073741536;
          *((_QWORD *)&v27 + 1) = 0LL;
        }
        v10 = v26;
      }
      else if ( (v16 & 0x8000) == 0 || !(unsigned int)IopInterlockedAdd(v15 + 88, 0xFFFFFFFFLL) )
      {
        IoFreeIrp((PIRP)v15);
      }
      v9 = a2;
      v18 = v24;
      v19 = v23;
    }
    v20 = 32LL * (unsigned int)i;
    *(_QWORD *)(v20 + v9) = v18;
    *(_QWORD *)(v20 + v9 + 8) = v19;
    *(_OWORD *)(v20 + v9 + 16) = v27;
    v8 = v29;
  }
  v11 = 0;
  result = (unsigned int)v13;
LABEL_14:
  *v34 = v11;
  return result;
}
