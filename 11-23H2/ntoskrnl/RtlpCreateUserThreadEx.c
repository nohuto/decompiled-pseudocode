/*
 * XREFs of RtlpCreateUserThreadEx @ 0x14076B8DC
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140303FBC (ExpWorkerFactoryCreateThread.c)
 *     RtlCreateUserThread @ 0x1409B8F60 (RtlCreateUserThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwCreateThreadEx @ 0x14041C9D0 (ZwCreateThreadEx.c)
 */

NTSTATUS __fastcall RtlpCreateUserThreadEx(
        HANDLE ProcessHandle,
        void *a2,
        int a3,
        unsigned int a4,
        SIZE_T MaximumStackSize,
        SIZE_T StackSize,
        int a7,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        HANDLE *a10,
        _OWORD *a11)
{
  SIZE_T ZeroBits; // rsi
  char v13; // r9
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // r8d
  ULONG CreateFlags; // ecx
  NTSTATUS result; // eax
  HANDLE ThreadHandle; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  __int128 v22; // [rsp+98h] [rbp-68h] BYREF
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-28h]
  __int128 v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+F0h] [rbp-10h]

  v24 = 0LL;
  v26 = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ThreadHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  ZeroBits = a4;
  v13 = a3;
  v25 = 0LL;
  v22 = 0LL;
  if ( (a3 & 0xFFFFFF88) != 0 )
    return -1073741811;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.SecurityDescriptor = a2;
  v14 = a3 & 1 | 2;
  AttributeList.Attributes[0].Attribute = 65539LL;
  AttributeList.Attributes[0].Size = 16LL;
  AttributeList.TotalLength = 40LL;
  if ( (a3 & 2) == 0 )
    v14 = a3 & 1;
  v15 = v14 | 4;
  if ( (a3 & 4) == 0 )
    v15 = v14;
  v16 = v15 | 0x10;
  if ( (a3 & 0x10) == 0 )
    v16 = v15;
  v17 = v16 | 0x20;
  if ( (v13 & 0x20) == 0 )
    v17 = v16;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  CreateFlags = v17 | 0x40;
  AttributeList.Attributes[0].ReturnLength = 0LL;
  AttributeList.Attributes[0].Value = (ULONG_PTR)&v22;
  if ( (v13 & 0x40) == 0 )
    CreateFlags = v17;
  result = ZwCreateThreadEx(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             ProcessHandle,
             StartRoutine,
             Argument,
             CreateFlags,
             ZeroBits,
             StackSize,
             MaximumStackSize,
             &AttributeList);
  if ( result >= 0 )
  {
    if ( a10 )
      *a10 = ThreadHandle;
    else
      ZwClose(ThreadHandle);
    if ( a11 )
      *a11 = v22;
    return 0;
  }
  return result;
}
