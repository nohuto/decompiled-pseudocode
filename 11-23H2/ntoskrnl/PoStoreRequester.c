/*
 * XREFs of PoStoreRequester @ 0x14032D1D4
 * Callers:
 *     PoStoreDiagnosticContext @ 0x14032B7E8 (PoStoreDiagnosticContext.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x14032D118 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopDiagTracePowerRequestCreate @ 0x1407A7AF0 (PopDiagTracePowerRequestCreate.c)
 * Callees:
 *     RtlStringCbCopyUnicodeString @ 0x14020956C (RtlStringCbCopyUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140302D18 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     IoGetDeviceProperty @ 0x140792B90 (IoGetDeviceProperty.c)
 */

__int64 __fastcall PoStoreRequester(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // r15
  char v6; // dl
  unsigned __int64 v8; // rsi
  unsigned __int16 *v9; // r12
  char *v10; // r14
  char v11; // di
  __int64 v12; // r8
  char *v13; // rdx
  char *i; // rax
  char *v15; // rax
  unsigned __int64 v16; // rbp
  __int64 v18; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRefWithTag; // rax
  struct _DEVICE_OBJECT *v20; // rbp
  NTSTATUS DeviceProperty; // eax
  const UNICODE_STRING *p_DriverName; // r8
  ULONG v23; // ecx
  __int64 v24; // rcx
  unsigned __int16 *DeviceNode; // rcx
  __int64 v26; // rax
  char v27; // [rsp+70h] [rbp+8h]
  ULONG ResultLength; // [rsp+78h] [rbp+10h] BYREF

  v4 = *a3;
  ResultLength = 0;
  v6 = 0;
  v27 = 0;
  v8 = 40LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 && v4 >= 0x28 )
  {
    v10 = (char *)(a2 + 40);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)a1;
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  if ( *(_DWORD *)a1 )
  {
    if ( v11 )
    {
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 40);
    }
    v12 = *(unsigned __int16 *)(a1 + 16);
    v13 = *(char **)(a1 + 24);
    ResultLength = *(unsigned __int16 *)(a1 + 16);
    if ( a4 )
    {
      for ( i = &v13[2 * ((unsigned __int64)(unsigned int)v12 >> 1)]; i != v13 && *(_WORD *)i != 92; i -= 2 )
        ;
      if ( i != v13 )
      {
        v15 = i + 2;
        v12 = (unsigned int)((_DWORD)v13 - (_DWORD)v15 + v12);
        v13 = v15;
        ResultLength = v12;
      }
    }
    v16 = (unsigned int)v12;
    v8 = v12 + 42;
    if ( !v11 || v4 < v8 )
    {
      *a3 = v8;
      return 3221225507LL;
    }
    v11 = 1;
    memmove(v10, v13, (unsigned int)v12);
    *(_WORD *)&v10[2 * (v16 >> 1)] = 0;
    *(_QWORD *)(a2 + 16) = &v10[-a2];
    goto LABEL_18;
  }
  v18 = *(_QWORD *)(a1 + 8);
  if ( v18 )
  {
    DeviceAttachmentBaseRefWithTag = (struct _DEVICE_OBJECT *)IoGetDeviceAttachmentBaseRefWithTag(v18, 0x67446F50u);
    v20 = DeviceAttachmentBaseRefWithTag;
    if ( !DeviceAttachmentBaseRefWithTag )
    {
LABEL_18:
      v6 = 0;
      goto LABEL_19;
    }
    if ( !DeviceAttachmentBaseRefWithTag->DeviceObjectExtension->DeviceNode )
      goto LABEL_30;
    if ( v11 )
    {
      DeviceProperty = IoGetDeviceProperty(
                         DeviceAttachmentBaseRefWithTag,
                         DevicePropertyDeviceDescription,
                         v4 - 40,
                         v10,
                         &ResultLength);
    }
    else
    {
      DeviceProperty = IoGetDeviceProperty(
                         DeviceAttachmentBaseRefWithTag,
                         DevicePropertyDeviceDescription,
                         0,
                         0LL,
                         &ResultLength);
      if ( DeviceProperty == -1073741789 )
        DeviceProperty = 0;
    }
    if ( DeviceProperty < 0 )
    {
LABEL_30:
      p_DriverName = &v20->DriverObject->DriverName;
      v23 = p_DriverName->Length + 2;
      ResultLength = v23;
      if ( v11 && v4 >= (unsigned __int64)v23 + 40 )
      {
        v11 = 1;
        RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v10, v23, p_DriverName);
      }
      else
      {
        v11 = 0;
      }
    }
    v24 = ResultLength;
    v8 = ResultLength + 40LL;
    if ( v11 )
    {
      v27 = 1;
      *(_QWORD *)(a2 + 16) = &v10[-a2];
      v10 += v24;
    }
    DeviceNode = (unsigned __int16 *)v20->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      v9 = DeviceNode + 20;
      v26 = (unsigned int)DeviceNode[20] + 2;
      v8 += v26;
      ResultLength = DeviceNode[20] + 2;
      if ( v11 && v4 >= v8 )
      {
        v11 = 1;
        RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v10, (unsigned int)v26, (PCUNICODE_STRING)(DeviceNode + 20));
        *(_QWORD *)(a2 + 24) = &v10[-a2];
      }
      else
      {
        v11 = 0;
      }
    }
    ObfDereferenceObjectWithTag(v20, 0x67446F50u);
    v6 = v27;
  }
LABEL_19:
  *a3 = v8;
  if ( !v11 )
    return 3221225507LL;
  if ( !*(_DWORD *)(a2 + 8) )
  {
    if ( !v6 )
      *(_QWORD *)(a2 + 16) = 0LL;
    if ( !v9 )
      *(_QWORD *)(a2 + 24) = 0LL;
  }
  return 0LL;
}
