/*
 * XREFs of ExCreateCallback @ 0x1407DC600
 * Callers:
 *     HvlPhase2Initialize @ 0x1403B4E80 (HvlPhase2Initialize.c)
 *     DifExCreateCallbackWrapper @ 0x1405D8690 (DifExCreateCallbackWrapper.c)
 *     KeRegisterProcessorChangeCallback @ 0x140822990 (KeRegisterProcessorChangeCallback.c)
 *     HaliInitPowerManagement @ 0x140834D70 (HaliInitPowerManagement.c)
 *     HalpMiscInitializeKsr @ 0x140854DE0 (HalpMiscInitializeKsr.c)
 *     IoRegisterBootDriverCallback @ 0x140863C80 (IoRegisterBootDriverCallback.c)
 *     ExInitLicenseCallback @ 0x140865C9C (ExInitLicenseCallback.c)
 *     KiFilterFiberContext @ 0x140B17C30 (KiFilterFiberContext.c)
 *     PiCslInitialize @ 0x140B3BC84 (PiCslInitialize.c)
 *     EtwpInitialize @ 0x140B47A50 (EtwpInitialize.c)
 *     SshpAlpcInitialize @ 0x140B66D04 (SshpAlpcInitialize.c)
 *     ExpInitializeCallbacks @ 0x140B6B870 (ExpInitializeCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x140B6FC1C (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140B711D4 (PopUmpoInitializeMonitorChannel.c)
 *     IopInitializeSessionNotifications @ 0x140B750E8 (IopInitializeSessionNotifications.c)
 *     PopSetupKsrCallbacks @ 0x140B75B90 (PopSetupKsrCallbacks.c)
 *     PiKsrNotifyInitialize @ 0x140B95390 (PiKsrNotifyInitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExpUnlockCallbackListExclusive @ 0x140364F40 (ExpUnlockCallbackListExclusive.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ObOpenObjectByName @ 0x14068C9D0 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ExCreateCallback(
        PCALLBACK_OBJECT *CallbackObject,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN Create,
        BOOLEAN AllowMultipleCallbacks)
{
  struct _KTHREAD *CurrentThread; // rdi
  __m128i v5; // xmm1
  __int128 v8; // xmm0
  __int128 v10; // xmm0
  NTSTATUS inserted; // ebx
  char *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  PVOID *Object; // [rsp+20h] [rbp-39h]
  PVOID v17; // [rsp+50h] [rbp-9h] BYREF
  __int128 v18; // [rsp+58h] [rbp-1h] BYREF
  __m128i v19; // [rsp+68h] [rbp+Fh]
  __int128 v20; // [rsp+78h] [rbp+1Fh]
  HANDLE Handle; // [rsp+C8h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = *(__m128i *)&ObjectAttributes->ObjectName;
  v8 = *(_OWORD *)&ObjectAttributes->Length;
  Handle = 0LL;
  v19 = v5;
  v17 = 0LL;
  v18 = v8;
  v10 = *(_OWORD *)&ObjectAttributes->SecurityDescriptor;
  v19.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v5, 8)) | 0x200;
  v20 = v10;
  if ( v5.m128i_i64[0] )
  {
    inserted = ObOpenObjectByName((__int64)&v18, (__int64)ExCallbackObjectType, 0, 0LL, 0, 0LL, (__int64)&Handle);
    if ( inserted >= 0 )
    {
LABEL_3:
      v17 = 0LL;
      inserted = ObReferenceObjectByHandle(Handle, 0, ExCallbackObjectType, 0, &v17, 0LL);
      ZwClose(Handle);
      if ( inserted >= 0 )
        *CallbackObject = (PCALLBACK_OBJECT)v17;
      return inserted;
    }
  }
  else
  {
    inserted = -1073741823;
  }
  if ( Create )
  {
    inserted = ObCreateObjectEx(0, ExCallbackObjectType, (__int64)&v18, 0, (__int64)Object, 56, 0, 0, &v17, 0LL);
    if ( inserted >= 0 )
    {
      v13 = (char *)v17;
      *(_DWORD *)v17 = 1819042115;
      v13[32] = AllowMultipleCallbacks;
      *((_QWORD *)v13 + 3) = v13 + 16;
      *((_QWORD *)v13 + 2) = v13 + 16;
      *((_QWORD *)v13 + 1) = 0LL;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
      v14 = (_QWORD *)qword_140C2D6E8;
      v15 = v13 + 40;
      if ( *(__int64 **)qword_140C2D6E8 != &ExpCallbackListHead )
        __fastfail(3u);
      *v15 = &ExpCallbackListHead;
      *((_QWORD *)v13 + 6) = v14;
      *v14 = v15;
      qword_140C2D6E8 = (__int64)(v13 + 40);
      ExpUnlockCallbackListExclusive((__int64)CurrentThread);
      inserted = ObInsertObjectEx(v13, 0LL, 1, 0, 0, 0LL, &Handle);
      if ( inserted >= 0 )
        goto LABEL_3;
    }
  }
  return inserted;
}
