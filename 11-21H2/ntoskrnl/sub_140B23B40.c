/*
 * XREFs of sub_140B23B40 @ 0x140B23B40
 * Callers:
 *     sub_140B23A48 @ 0x140B23A48 (sub_140B23A48.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14084FCD4 @ 0x14084FCD4 (sub_14084FCD4.c)
 *     sub_14084FD68 @ 0x14084FD68 (sub_14084FD68.c)
 *     sub_14084FDCC @ 0x14084FDCC (sub_14084FDCC.c)
 *     sub_14084FF94 @ 0x14084FF94 (sub_14084FF94.c)
 *     sub_1408504E0 @ 0x1408504E0 (sub_1408504E0.c)
 *     sub_14085075C @ 0x14085075C (sub_14085075C.c)
 *     sub_140B23E3C @ 0x140B23E3C (sub_140B23E3C.c)
 */

NTSTATUS __fastcall sub_140B23B40(__int64 a1)
{
  int v1; // edi
  HANDLE *v3; // r14
  NTSTATUS result; // eax
  HANDLE v5; // rcx
  int *v6; // rsi
  __int64 v7; // r8
  HANDLE v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING v10; // [rsp+50h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  ULONG v12; // [rsp+B0h] [rbp+67h] BYREF

  v1 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v10 = 0LL;
  DestinationString = 0LL;
  memset((void *)a1, 0, 0x220uLL);
  *(_QWORD *)(a1 + 56) = a1;
  *(_QWORD *)(a1 + 48) = sub_140989150;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 68) = 0x80000000;
  *(_DWORD *)(a1 + 80) = 16;
  *(_DWORD *)(a1 + 76) = 64;
  *(_DWORD *)(a1 + 84) = 5000;
  *(_DWORD *)(a1 + 88) = 10000;
  *(_DWORD *)(a1 + 92) = 10000;
  sub_140B23E3C(a1);
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchParametersChanged");
  sub_14085075C(&DestinationString, SynchronizationEvent, (PVOID *)a1);
  RtlInitUnicodeString(
    &v10,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\PrefetchParameters");
  v3 = (HANDLE *)(a1 + 8);
  ObjectAttributes.ObjectName = &v10;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey((PHANDLE)(a1 + 8), 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result < 0 )
  {
    *v3 = 0LL;
  }
  else
  {
    sub_14084FDCC(a1);
    sub_14084FF94(a1);
    v5 = *v3;
    v12 = 4;
    v6 = (int *)(a1 + 72);
    if ( sub_1408504E0(v5, L"BootId", 4, (void *)(a1 + 72), &v12) >= 0 )
      v1 = *v6;
    v8 = *v3;
    *v6 = v1 + 1;
    sub_14084FD68(v8, L"BootId", v7, (void *)(a1 + 72), v12);
    return sub_14084FCD4(*v3, (_DWORD *)(a1 + 540));
  }
  return result;
}
