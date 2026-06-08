/*
 * XREFs of HwDebugInitializeRegistryDebugRegisters @ 0x1C0039364
 * Callers:
 *     HwDebugDiagnosticRegistryHandler @ 0x1C000A990 (HwDebugDiagnosticRegistryHandler.c)
 *     ProcLibGlobalInit @ 0x1C004052C (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00025DC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004990 (WPP_RECORDER_SF_d.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x1C0038E44 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugSetKeyNotification @ 0x1C0039648 (HwDebugSetKeyNotification.c)
 */

__int64 __fastcall HwDebugInitializeRegistryDebugRegisters(int a1)
{
  __int64 v1; // r15
  const WCHAR *v2; // rdx
  __int64 v3; // rsi
  unsigned __int8 *Pool2; // r14
  int v5; // ebx
  unsigned __int16 v6; // r9
  ULONG i; // edi
  unsigned __int8 *v8; // rdi
  __int64 v9; // r12
  _QWORD *v10; // r15
  unsigned int j; // esi
  void *v12; // rcx
  void *KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  _OWORD KeyInformation[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+27h]

  v1 = a1;
  *((_DWORD *)&ObjectAttributes.Attributes + 1) = 0;
  v2 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor\\HwDebugRegisters";
  ResultLength = 0;
  KeyHandle = 0LL;
  v3 = 0LL;
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
        goto LABEL_23;
      v6 = 12;
      goto LABEL_7;
    }
  }
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryKey(KeyHandle, KeyCachedInformation, KeyInformation, (ULONG)40, &ResultLength);
    if ( v5 >= 0 )
    {
      if ( HIDWORD(KeyInformation[0]) )
      {
        Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, (unsigned int)(40 * HIDWORD(KeyInformation[0])), 1919119952LL);
        if ( Pool2 )
        {
          for ( i = 0; (unsigned int)i < HIDWORD(KeyInformation[0]); ++i )
          {
            v5 = HwDebugInitializeRegistryDebugRegister(KeyHandle, i, (__int64)&Pool2[40 * v3]);
            if ( v5 >= 0 )
              v3 = (unsigned int)(v3 + 1);
          }
          LOBYTE(Globals[2 * v1 + 289]) = v3;
          if ( (_DWORD)v3 )
          {
            Globals[2 * v1 + 290] = (__int64)Pool2;
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
              (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids);
        }
      }
      else
      {
        v5 = 0;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 13;
LABEL_7:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        v6,
        (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
        v5);
    }
  }
LABEL_23:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
  {
    if ( (_DWORD)v3 )
    {
      v8 = Pool2 + 16;
      v9 = (unsigned int)v3;
      do
      {
        v10 = (_QWORD *)*((_QWORD *)v8 + 1);
        if ( v10 )
        {
          for ( j = 0; j < *v8; ++j )
          {
            v12 = (void *)v10[2 * j];
            if ( v12 )
              ExFreePoolWithTag(v12, (ULONG)1919119952);
          }
          ExFreePoolWithTag(v10, (ULONG)1919119952);
        }
        v8 += 40;
        --v9;
      }
      while ( v9 );
    }
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  }
  return (unsigned int)v5;
}
