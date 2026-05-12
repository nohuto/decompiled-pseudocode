/*
 * XREFs of PortRegistryReadWithHandle @ 0x1C00A1A20
 * Callers:
 *     PortRegistryReadDeviceKey @ 0x1C00A0728 (PortRegistryReadDeviceKey.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

__int64 __fastcall PortRegistryReadWithHandle(
        void *a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  __int64 v8; // r15
  void *v9; // rsi
  NTSTATUS v10; // esi
  _QWORD *v11; // rdi
  _DWORD *v12; // rbx
  __int64 (__fastcall *SystemRoutineAddress)(__int64, void *, __int64 (__fastcall **)(__int64, int, const void *, unsigned int, int, __int64), __int64, _QWORD); // rax
  __int64 v15; // [rsp+40h] [rbp-99h] BYREF
  int v16; // [rsp+48h] [rbp-91h]
  int v17; // [rsp+4Ch] [rbp-8Dh]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-89h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-79h] BYREF
  __int64 (__fastcall *v20)(__int64, int, const void *, unsigned int, int, __int64); // [rsp+90h] [rbp-49h] BYREF
  int v21; // [rsp+98h] [rbp-41h]
  __int64 v22; // [rsp+A0h] [rbp-39h]
  __int64 *v23; // [rsp+A8h] [rbp-31h]
  int v24; // [rsp+B0h] [rbp-29h]
  __int64 v25; // [rsp+B8h] [rbp-21h]
  int v26; // [rsp+C0h] [rbp-19h]
  void *KeyHandle; // [rsp+138h] [rbp+5Fh] BYREF

  KeyHandle = 0LL;
  v17 = 0;
  v8 = a4;
  v9 = a1;
  if ( a2 )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.ObjectName = a2;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.Attributes = 576;
    v10 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v10 < 0 )
      return (unsigned int)v10;
    v9 = KeyHandle;
  }
  else
  {
    KeyHandle = a1;
  }
  v11 = a5;
  v12 = a6;
  v15 = *a5;
  v16 = *a6;
  memset_0(&v20, 0, 0x70uLL);
  v24 = 0;
  v25 = 0LL;
  v26 = 0;
  v20 = PortpRegQueryRoutine;
  v22 = *(_QWORD *)(a3 + 8);
  v23 = &v15;
  v21 = 20;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, void *, __int64 (__fastcall **)(__int64, int, const void *, unsigned int, int, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, void *, __int64 (__fastcall **)(__int64, int, const void *, unsigned int, int, __int64), __int64, _QWORD))RtlQueryRegistryValues;
  v10 = SystemRoutineAddress(0x40000000LL, v9, &v20, v8, 0LL);
  *v11 = v15;
  *v12 = v16;
  if ( a2 )
    ZwClose(KeyHandle);
  return (unsigned int)v10;
}
