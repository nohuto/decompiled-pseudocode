/*
 * XREFs of NdisOpenProtocolConfiguration @ 0x1C001E870
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C001D060 (NdisOpenConfigurationEx.c)
 *     ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002E298 (-ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0162AFC (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C01636F4 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0026ED8 (WPP_RECORDER_SF_Z.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

unsigned int *__fastcall NdisOpenProtocolConfiguration(NTSTATUS *a1, _QWORD *a2, _UNICODE_STRING *a3)
{
  _QWORD *v4; // r15
  __int64 MaximumLength; // rbx
  char *Pool2; // rax
  char *v8; // rdi
  NTSTATUS v9; // eax
  unsigned int *result; // rax
  _QWORD v11[2]; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  v11[0] = 6815846LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  v11[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services";
  v4 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      42,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      (__int64)a3);
  }
  MaximumLength = a3->MaximumLength;
  Pool2 = (char *)ExAllocatePool2(64LL, MaximumLength + 178, 1668301902);
  v8 = Pool2;
  if ( Pool2 )
  {
    *a1 = 0;
    memset(Pool2, 0, MaximumLength + 178);
    memmove(v8 + 176, a3->Buffer, a3->Length);
    *((_QWORD *)v8 + 2) = v8 + 40;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_WORD *)v8 + 20) = 266;
    *(_WORD *)(*((_QWORD *)v8 + 2) + 2LL) = 40;
    *(_DWORD *)(*((_QWORD *)v8 + 2) + 16LL) |= 2u;
    *((_QWORD *)v8 + 8) = ndisSaveParameters;
    *((_DWORD *)v8 + 18) = 20;
    *((_DWORD *)v8 + 24) = 0;
    *((_QWORD *)v8 + 15) = 0LL;
    *((_DWORD *)v8 + 32) = 0;
    *((_QWORD *)v8 + 17) = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v11;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    *a1 = v9;
    if ( v9 >= 0 )
    {
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = a3;
      if ( ZwOpenKey((PHANDLE)v8 + 4, 0xBu, &ObjectAttributes) < 0 )
        *((_QWORD *)v8 + 4) = 0LL;
      *v4 = v8;
      *a1 = 0;
    }
  }
  else
  {
    *a1 = -1073741670;
    *v4 = 0LL;
  }
  if ( *a1 < 0 && v8 )
    ExFreePoolWithTag(v8, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  result = &WPP_RECORDER_INITIALIZED;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return (unsigned int *)WPP_RECORDER_SF_(
                             *((_QWORD *)WPP_GLOBAL_Control + 8),
                             4u,
                             0xDu,
                             0x2Bu,
                             (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids);
  return result;
}
