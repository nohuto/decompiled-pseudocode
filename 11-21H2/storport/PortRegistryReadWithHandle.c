/*
 * XREFs of PortRegistryReadWithHandle @ 0x1C00877A4
 * Callers:
 *     PortRegistryReadDeviceKey @ 0x1C0086BBC (PortRegistryReadDeviceKey.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0024340 (memset.c)
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
  PVOID SystemRoutineAddress; // rax
  __int64 v15; // [rsp+40h] [rbp-99h] BYREF
  int v16; // [rsp+48h] [rbp-91h]
  int v17; // [rsp+4Ch] [rbp-8Dh]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-89h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-79h] BYREF
  _QWORD v20[14]; // [rsp+90h] [rbp-49h] BYREF
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
  memset(v20, 0, sizeof(v20));
  LODWORD(v20[4]) = 0;
  v20[5] = 0LL;
  LODWORD(v20[6]) = 0;
  v20[0] = PortpRegQueryRoutine;
  v20[2] = *(_QWORD *)(a3 + 8);
  v20[3] = &v15;
  LODWORD(v20[1]) = 20;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v10 = ((__int64 (__fastcall *)(__int64, void *, _QWORD *, __int64, _QWORD))SystemRoutineAddress)(
          0x40000000LL,
          v9,
          v20,
          v8,
          0LL);
  *v11 = v15;
  *v12 = v16;
  if ( a2 )
    ZwClose(KeyHandle);
  return (unsigned int)v10;
}
