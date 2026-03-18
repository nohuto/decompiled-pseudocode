/*
 * XREFs of OpenCacheKeyEx @ 0x1C0019FB0
 * Callers:
 *     FastGetProfileDwordEx @ 0x1C00169B0 (FastGetProfileDwordEx.c)
 *     FastGetProfileStringW @ 0x1C0019800 (FastGetProfileStringW.c)
 *     Initialize @ 0x1C00572BC (Initialize.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C005773C (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C005F1A8 (-UserInitialize@@YAJXZ.c)
 *     InitScancodeMap @ 0x1C005FBD0 (InitScancodeMap.c)
 *     CheckDesktopPolicy @ 0x1C005FFC0 (CheckDesktopPolicy.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0060150 (xxxUpdatePerUserAccessPackSettings.c)
 *     FastGetProfileValue @ 0x1C0060B60 (FastGetProfileValue.c)
 *     InitializeWin32KSyscallFilter @ 0x1C00969C0 (InitializeWin32KSyscallFilter.c)
 *     W32kEtwEnableCallback @ 0x1C00B53AC (W32kEtwEnableCallback.c)
 *     FastWriteProfileStringW @ 0x1C00C3EB0 (FastWriteProfileStringW.c)
 *     CheckDesktopPolicyChange @ 0x1C0149030 (CheckDesktopPolicyChange.c)
 *     FastGetProfileKeysW @ 0x1C01491C0 (FastGetProfileKeysW.c)
 *     FastWriteProfileValue @ 0x1C0149810 (FastWriteProfileValue.c)
 *     Win32UserInitialize @ 0x1C02E231C (Win32UserInitialize.c)
 *     InitCreateUserSubsystem @ 0x1C02E32B8 (InitCreateUserSubsystem.c)
 * Callees:
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C0018F18 (-InitPreviousUserString@@YAXXZ.c)
 *     ApiSetEditionOpenProfileKey @ 0x1C0019C1C (ApiSetEditionOpenProfileKey.c)
 *     AccessCheckObject @ 0x1C00B2F00 (AccessCheckObject.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C14FC (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

void *__fastcall OpenCacheKeyEx(const UNICODE_STRING *a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  ACCESS_MASK v7; // r12d
  const UNICODE_STRING *v8; // rbx
  PVOID v9; // r13
  int v10; // r14d
  const UNICODE_STRING *v11; // rdx
  int v12; // eax
  NTSTATUS v13; // eax
  int v14; // ebx
  NTSTATUS v16; // eax
  __int64 v17; // r8
  PVOID v18; // r13
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  const UNICODE_STRING *v22; // [rsp+50h] [rbp-B0h]
  __int64 CurrentProcess; // [rsp+58h] [rbp-A8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR Source[32]; // [rsp+90h] [rbp-70h] BYREF
  char v26; // [rsp+D0h] [rbp-30h] BYREF

  v4 = (unsigned int)a2;
  v5 = 0LL;
  v22 = a1;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  KeyHandle = 0LL;
  v7 = a3;
  v8 = a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  v9 = (PVOID)CurrentProcess;
  if ( (unsigned int)ApiSetEditionOpenProfileKey(v4, v7, (__int64)a4, (__int64 *)&KeyHandle) )
    return KeyHandle;
  if ( v7 == 131097 && ((_DWORD)v4 == 4 || (_DWORD)v4 == 23) )
  {
    v10 = *a4;
    while ( 1 )
    {
LABEL_8:
      *(_DWORD *)&Destination.Length = 0x2000000;
      Destination.Buffer = (PWSTR)&v26;
      if ( (v10 & 4) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
        RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
        v12 = -5;
      }
      else
      {
        if ( *off_1C024AE00[dword_1C024AA50[4 * v4]] == 77 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
        }
        else
        {
          if ( v8 )
          {
            v11 = v8;
          }
          else
          {
            InitPreviousUserString();
            v11 = &PreviousUserString;
          }
          RtlAppendUnicodeStringToString(&Destination, v11);
        }
        if ( (v10 & 2) != 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
          v12 = -3;
        }
        else if ( (v10 & 8) != 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"Remote\\");
          RtlStringCchPrintfW(Source, 0x20uLL, L"%ld\\", (unsigned int)gSessionId);
          RtlAppendUnicodeToString(&Destination, Source);
          v12 = -9;
        }
        else
        {
          if ( a4 && (*a4 & 0x10) != 0 )
            goto LABEL_42;
          v12 = -2;
        }
      }
      v10 &= v12;
      RtlAppendUnicodeToString(&Destination, off_1C024AE00[dword_1C024AA50[4 * v4]] + 1);
      RtlAppendUnicodeToString(&Destination, (&off_1C024AA58)[2 * v4]);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v13 = ZwOpenKey(&KeyHandle, v7, &ObjectAttributes);
      v14 = v13;
      if ( v7 != 131097 && v9 != gpepCSRSS && v9 != (PVOID)gpepInit )
      {
        if ( v13 < 0 )
          goto LABEL_20;
        Object = 0LL;
        v16 = ObReferenceObjectByHandle(KeyHandle, v7, 0LL, 0, &Object, 0LL);
        v18 = Object;
        if ( v16 < 0 )
        {
          ZwClose(KeyHandle);
          v14 = -1073741790;
          goto LABEL_20;
        }
        LOBYTE(v17) = 1;
        if ( !(unsigned int)AccessCheckObject(Object, v7, v17, &KeyMapping) )
        {
          ZwClose(KeyHandle);
          v14 = -1073741790;
        }
        ObfDereferenceObject(v18);
      }
      if ( v14 >= 0 )
        goto LABEL_22;
LABEL_20:
      if ( !v10 )
      {
LABEL_22:
        if ( a4 )
          *a4 = v10;
        if ( v14 >= 0 )
          return KeyHandle;
        return (void *)v5;
      }
      v8 = v22;
      v9 = (PVOID)CurrentProcess;
    }
  }
  if ( !a4 || (*a4 & 0x10) == 0 )
  {
    v10 = 1;
    goto LABEL_8;
  }
LABEL_42:
  *a4 = 0;
  return 0LL;
}
