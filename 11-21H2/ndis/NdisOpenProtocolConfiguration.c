/*
 * XREFs of NdisOpenProtocolConfiguration @ 0x1C001D660
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C001B190 (NdisOpenConfigurationEx.c)
 *     ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002FB94 (-ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C015339C (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C0154974 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1C00107A4 (WPP_RECORDER_SF_Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

unsigned int *__fastcall NdisOpenProtocolConfiguration(NTSTATUS *a1, _QWORD *a2, _UNICODE_STRING *a3)
{
  __int64 MaximumLength; // rbx
  char *Pool2; // rax
  char *v8; // rdi
  NTSTATUS v9; // eax
  unsigned int *result; // rax
  _QWORD v11[2]; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  v11[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services";
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v11[0] = 6815846LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x2Au,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      &a3->Length);
  MaximumLength = a3->MaximumLength;
  Pool2 = (char *)ExAllocatePool2(64LL, MaximumLength + 178, 1668301902);
  v8 = Pool2;
  if ( Pool2 )
  {
    *a1 = 0;
    memset(Pool2, 0, MaximumLength + 178);
    memmove(v8 + 176, a3->Buffer, a3->Length);
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 2) = v8 + 40;
    *((_WORD *)v8 + 20) = 266;
    *(_WORD *)(*((_QWORD *)v8 + 2) + 2LL) = 40;
    *(_DWORD *)(*((_QWORD *)v8 + 2) + 16LL) |= 2u;
    *((_DWORD *)v8 + 24) = 0;
    *((_QWORD *)v8 + 15) = 0LL;
    *((_DWORD *)v8 + 32) = 0;
    *((_QWORD *)v8 + 17) = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    *((_QWORD *)v8 + 8) = ndisSaveParameters;
    *((_DWORD *)v8 + 18) = 20;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v11;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    *a1 = v9;
    if ( v9 < 0 )
    {
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = a3;
      if ( ZwOpenKey((PHANDLE)v8 + 4, 0xBu, &ObjectAttributes) < 0 )
        *((_QWORD *)v8 + 4) = 0LL;
      *a2 = v8;
      *a1 = 0;
    }
  }
  else
  {
    *a1 = -1073741670;
    *a2 = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  result = &WPP_RECORDER_INITIALIZED;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return (unsigned int *)WPP_RECORDER_SF_(
                             *((_QWORD *)WPP_GLOBAL_Control + 8),
                             4u,
                             0xDu,
                             0x2Bu,
                             (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids);
  return result;
}
