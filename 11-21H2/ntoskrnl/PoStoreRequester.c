/*
 * XREFs of PoStoreRequester @ 0x14036AC64
 * Callers:
 *     PoStoreDiagnosticContext @ 0x14036AAF4 (PoStoreDiagnosticContext.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x14036ABA8 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopDiagTracePowerRequestCreate @ 0x1407EFFBC (PopDiagTracePowerRequestCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036B86C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     RtlStringCbCopyUnicodeString @ 0x14036BF44 (RtlStringCbCopyUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 */

__int64 __fastcall PoStoreRequester(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v7; // rsi
  char v8; // r8
  unsigned __int16 *v9; // r12
  char *v10; // r14
  char v11; // di
  unsigned __int16 *v12; // rcx
  __int64 v13; // r8
  char *v14; // rdx
  char *i; // rax
  char *v16; // rax
  unsigned __int64 v17; // rbp
  unsigned __int16 *DeviceNode; // rcx
  __int64 v20; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRefWithTag; // rax
  struct _DEVICE_OBJECT *v22; // rbp
  const UNICODE_STRING *p_DriverName; // r8
  ULONG v24; // ecx
  __int64 v25; // rcx
  NTSTATUS DeviceProperty; // eax
  size_t v27; // rdx
  char v28; // [rsp+70h] [rbp+8h]
  ULONG ResultLength; // [rsp+78h] [rbp+10h] BYREF

  v4 = *a3;
  v28 = 0;
  ResultLength = 0;
  v7 = 40LL;
  v8 = 0;
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
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1088LL);
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 16);
    }
    v12 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 8) + 1472LL);
    v13 = *v12;
    v14 = (char *)*((_QWORD *)v12 + 1);
    ResultLength = *v12;
    if ( a4 )
    {
      for ( i = &v14[2 * ((unsigned __int64)(unsigned int)v13 >> 1)]; i != v14 && *(_WORD *)i != 92; i -= 2 )
        ;
      if ( i != v14 )
      {
        v16 = i + 2;
        v13 = (unsigned int)((_DWORD)v14 - (_DWORD)v16 + v13);
        v14 = v16;
        ResultLength = v13;
      }
    }
    v17 = (unsigned int)v13;
    v7 = v13 + 42;
    if ( !v11 || v4 < v7 )
    {
      *a3 = v7;
      return 3221225507LL;
    }
    v11 = 1;
    memmove(v10, v14, (unsigned int)v13);
    *(_WORD *)&v10[2 * (v17 >> 1)] = 0;
    *(_QWORD *)(a2 + 16) = &v10[-a2];
    goto LABEL_20;
  }
  v20 = *(_QWORD *)(a1 + 8);
  if ( v20 )
  {
    DeviceAttachmentBaseRefWithTag = (struct _DEVICE_OBJECT *)IoGetDeviceAttachmentBaseRefWithTag(v20, 1732538192LL);
    v22 = DeviceAttachmentBaseRefWithTag;
    if ( !DeviceAttachmentBaseRefWithTag )
    {
LABEL_20:
      v8 = 0;
      goto LABEL_23;
    }
    if ( !DeviceAttachmentBaseRefWithTag->DeviceObjectExtension->DeviceNode )
      goto LABEL_29;
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
LABEL_29:
      p_DriverName = &v22->DriverObject->DriverName;
      v24 = p_DriverName->Length + 2;
      ResultLength = v24;
      if ( v11 && v4 >= (unsigned __int64)v24 + 40 )
      {
        v11 = 1;
        RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v10, v24, p_DriverName);
      }
      else
      {
        v11 = 0;
      }
    }
    v25 = ResultLength;
    v7 = ResultLength + 40LL;
    if ( v11 )
    {
      v28 = 1;
      *(_QWORD *)(a2 + 16) = &v10[-a2];
      v10 += v25;
    }
    DeviceNode = (unsigned __int16 *)v22->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      v9 = DeviceNode + 20;
      v27 = (unsigned int)DeviceNode[20] + 2;
      v7 += v27;
      ResultLength = DeviceNode[20] + 2;
      if ( v11 && v4 >= v7 )
      {
        v11 = 1;
        RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v10, v27, (PCUNICODE_STRING)(DeviceNode + 20));
        *(_QWORD *)(a2 + 24) = &v10[-a2];
      }
      else
      {
        v11 = 0;
      }
    }
    ObfDereferenceObjectWithTag(v22, 0x67446F50u);
    v8 = v28;
  }
LABEL_23:
  *a3 = v7;
  if ( !v11 )
    return 3221225507LL;
  if ( !*(_DWORD *)(a2 + 8) )
  {
    if ( !v8 )
      *(_QWORD *)(a2 + 16) = 0LL;
    if ( !v9 )
      *(_QWORD *)(a2 + 24) = 0LL;
  }
  return 0LL;
}
