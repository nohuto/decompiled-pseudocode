/*
 * XREFs of KeRegisterProcessorChangeCallback @ 0x140858460
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x14025DE40 (ExUnregisterCallback.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403B4DA0 (HalGetProcessorIdByNtNumber.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 */

PVOID __stdcall KeRegisterProcessorChangeCallback(
        PPROCESSOR_CALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext,
        ULONG Flags)
{
  ULONG v5; // ebx
  char v6; // di
  PVOID v7; // rsi
  ULONG v9; // r15d
  __int64 *v10; // r12
  ULONG v11; // edi
  __int64 *v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  PVOID v15; // rsi
  __int64 v16; // rcx
  NTSTATUS v17; // [rsp+20h] [rbp-59h]
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-51h] BYREF
  PVOID v19; // [rsp+30h] [rbp-49h]
  PVOID v20; // [rsp+38h] [rbp-41h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  __int128 v23; // [rsp+80h] [rbp+7h] BYREF
  int v24; // [rsp+90h] [rbp+17h] BYREF

  v19 = CallbackContext;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v24 = 0;
  v5 = 0;
  CallbackObject = 0LL;
  v6 = Flags;
  DestinationString = 0LL;
  v23 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\ProcessorAdd");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v17 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 0);
  if ( v17 < 0 )
    return 0LL;
  ExAcquireFastMutex(&stru_140C2B9A0);
  v7 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)CallbackFunction, CallbackContext);
  v20 = v7;
  ObfDereferenceObject(CallbackObject);
  if ( v7 && (v6 & 1) != 0 )
  {
    v9 = dword_140D06884;
    v10 = qword_140D088C0;
    v11 = 0;
    if ( (_DWORD)dword_140D06884 )
    {
      v12 = qword_140D088C0;
      do
      {
        v13 = *v12;
        *(_QWORD *)((char *)&v23 + 4) = v11;
        WORD6(v23) = *(unsigned __int8 *)(v13 + 208);
        BYTE14(v23) = *(_BYTE *)(v13 + 209);
        HalGetProcessorIdByNtNumber(v11, &v24);
        LODWORD(v23) = 0;
        v17 = 0;
        sub_14042A5E0(v19, &v23);
        v14 = 0;
        ++v11;
        ++v12;
      }
      while ( v11 < v9 );
    }
    else
    {
      v14 = v17;
    }
    if ( v14 < 0 )
    {
      LODWORD(v23) = 2;
      ExUnregisterCallback(v7);
      v14 = v17;
      v7 = 0LL;
      v20 = 0LL;
    }
    else
    {
      LODWORD(v23) = 1;
    }
    DWORD2(v23) = v14;
    if ( v11 )
    {
      v15 = v19;
      do
      {
        v16 = *v10;
        DWORD1(v23) = v5;
        WORD6(v23) = *(unsigned __int8 *)(v16 + 208);
        BYTE14(v23) = *(_BYTE *)(v16 + 209);
        HalGetProcessorIdByNtNumber(v5, &v24);
        sub_14042A5E0(v15, &v23);
        ++v5;
        ++v10;
      }
      while ( v5 < v11 );
      v7 = v20;
    }
  }
  KeReleaseGuardedMutex(&stru_140C2B9A0);
  return v7;
}
