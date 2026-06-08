/*
 * XREFs of HwDebugInitializeRegistryDebugRegisters @ 0x1C002AE6C
 * Callers:
 *     HwDebugDiagnosticRegistryHandler @ 0x1C0002A80 (HwDebugDiagnosticRegistryHandler.c)
 *     ProcLibGlobalInit @ 0x1C00462E4 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     HwDebugSetKeyNotification @ 0x1C002B464 (HwDebugSetKeyNotification.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x1C0041EF4 (HwDebugInitializeRegistryDebugRegister.c)
 */

__int64 __fastcall HwDebugInitializeRegistryDebugRegisters(int a1)
{
  __int64 v1; // r15
  const WCHAR *v2; // rdx
  unsigned int v3; // esi
  unsigned __int8 *Pool2; // r14
  NTSTATUS v5; // ebx
  unsigned __int16 v7; // r9
  ULONG i; // edi
  unsigned __int8 *v9; // rdi
  __int64 v10; // r12
  _QWORD *v11; // r15
  unsigned int j; // esi
  void *v13; // rcx
  void *KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  _OWORD KeyInformation[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+27h]

  v1 = a1;
  *((_DWORD *)&ObjectAttributes.Attributes + 1) = 0;
  v2 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor\\HwDebugRegisters";
  ResultLength = 0;
  KeyHandle = 0LL;
  v3 = 0;
  *((_DWORD *)&ObjectAttributes.Length + 1) = 0;
  Pool2 = 0LL;
  v19 = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  DestinationString = 0LL;
  if ( a1 )
    v2 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack\\HwDebugRegisters";
  RtlInitUnicodeString(&DestinationString, v2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( (_DWORD)v1 == 1 )
  {
    v5 = HwDebugSetKeyNotification(&ObjectAttributes);
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_9;
      v7 = 12;
      goto LABEL_15;
    }
  }
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 < 0 )
    goto LABEL_9;
  v5 = ZwQueryKey(KeyHandle, KeyCachedInformation, KeyInformation, (ULONG)40, &ResultLength);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v7 = 13;
LABEL_15:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      v7,
      (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids,
      v5);
    goto LABEL_9;
  }
  if ( HIDWORD(KeyInformation[0]) )
  {
    Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, (unsigned int)(40 * HIDWORD(KeyInformation[0])), 1919119952LL);
    if ( Pool2 )
    {
      for ( i = 0; (unsigned int)i < HIDWORD(KeyInformation[0]); ++i )
      {
        v5 = HwDebugInitializeRegistryDebugRegister(KeyHandle, i);
        if ( v5 >= 0 )
          ++v3;
      }
      LOBYTE(Globals[2 * v1 + 283]) = v3;
      if ( v3 )
      {
        Globals[2 * v1 + 284] = (__int64)Pool2;
        Pool2 = 0LL;
      }
    }
    else
    {
      v5 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          0xEu,
          (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids);
    }
  }
  else
  {
    v5 = 0;
  }
LABEL_9:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
  {
    if ( v3 )
    {
      v9 = Pool2 + 16;
      v10 = v3;
      do
      {
        v11 = (_QWORD *)*((_QWORD *)v9 + 1);
        if ( v11 )
        {
          for ( j = 0; j < *v9; ++j )
          {
            v13 = (void *)v11[2 * j];
            if ( v13 )
              ExFreePoolWithTag(v13, (ULONG)1919119952);
          }
          ExFreePoolWithTag(v11, (ULONG)1919119952);
        }
        v9 += 40;
        --v10;
      }
      while ( v10 );
    }
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  }
  return (unsigned int)v5;
}
