/*
 * XREFs of sub_14083AAB8 @ 0x14083AAB8
 * Callers:
 *     sub_14083A794 @ 0x14083A794 (sub_14083A794.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14083AF88 @ 0x14083AF88 (sub_14083AF88.c)
 *     sub_14083B060 @ 0x14083B060 (sub_14083B060.c)
 *     sub_14083B12C @ 0x14083B12C (sub_14083B12C.c)
 *     sub_14083B170 @ 0x14083B170 (sub_14083B170.c)
 *     sub_14083B1AC @ 0x14083B1AC (sub_14083B1AC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14083AAB8(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v3; // edi
  void *v5; // rcx
  void *v6; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-71h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-69h] BYREF
  __int128 v9; // [rsp+58h] [rbp-61h] BYREF
  __int64 v10; // [rsp+68h] [rbp-51h]
  __int64 v11; // [rsp+70h] [rbp-49h]
  __int64 v12; // [rsp+78h] [rbp-41h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-39h] BYREF
  __int128 v14; // [rsp+B0h] [rbp-9h]
  __int128 v15; // [rsp+C0h] [rbp+7h]

  KeyHandle = 0LL;
  Handle = 0LL;
  v9 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v14 = 0LL;
  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  sub_14083B170(a1 + 56);
  sub_14083B170(a1 + 72);
  v3 = sub_14083B12C(a1 + 56);
  if ( v3 >= 0 )
  {
    v3 = sub_14083B12C(a1 + 72);
    if ( v3 >= 0 )
    {
      LODWORD(v9) = 7733366;
      *((_QWORD *)&v9 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v3 >= 0 )
      {
        LODWORD(v9) = 1966110;
        *((_QWORD *)&v9 + 1) = L"AllocationOrder";
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v3 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
        if ( v3 >= 0 )
          v3 = sub_14083B060(Handle);
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  v5 = *(void **)(a1 + 64);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_DWORD *)(a1 + 56) = 0;
  }
  v6 = *(void **)(a1 + 80);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_DWORD *)(a1 + 72) = 0;
  }
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
