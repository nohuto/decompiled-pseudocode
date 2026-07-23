/*
 * XREFs of sub_14094F96C @ 0x14094F96C
 * Callers:
 *     sub_14094FC28 @ 0x14094FC28 (sub_14094FC28.c)
 *     sub_14094FCD4 @ 0x14094FCD4 (sub_14094FCD4.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_14095E13C @ 0x14095E13C (sub_14095E13C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14094F96C(__int64 a1)
{
  int v2; // eax
  __int64 Pool2; // rax
  char *v4; // rdi
  char *v5; // rbx
  __int64 *i; // rax
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int v9; // ebx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE v15; // [rsp+A8h] [rbp+38h] BYREF

  v15 = 0LL;
  Handle = 0LL;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ExAcquireFastMutex(&stru_140C44960);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ValueName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\IDConfigDB";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &ValueName;
  *(_DWORD *)&ValueName.Length = 8126586;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ValueName.Buffer = (wchar_t *)L"CurrentDockInfo";
    ObjectAttributes.RootDirectory = KeyHandle;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &ValueName;
    *(_DWORD *)&ValueName.Length = 2097182;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes) >= 0 )
    {
      ValueName.Buffer = L"EjectableDocks";
      *(_DWORD *)&ValueName.Length = 1966108;
      ZwSetValueKey(Handle, &ValueName, 0, 4u, &dword_140C44998, 4u);
      ZwClose(Handle);
    }
    ZwClose(KeyHandle);
  }
  v2 = dword_140C44998;
  if ( !dword_140C44998 )
    v2 = 1;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(8 * v2 + 8), 538996816LL);
  v4 = (char *)Pool2;
  if ( Pool2 )
  {
    v5 = (char *)Pool2;
    for ( i = (__int64 *)qword_140C449A0; i != &qword_140C449A0; i = (__int64 *)*i )
    {
      v7 = i[2];
      if ( v7 )
      {
        *(_QWORD *)v5 = v7;
        v5 += 8;
      }
    }
    KeReleaseGuardedMutex(&stru_140C44960);
    if ( v5 == v4 )
    {
      *(_QWORD *)v5 = 0LL;
      v5 += 8;
    }
    *(_QWORD *)v5 = 0LL;
    v9 = sub_14095E13C(v8, (_DWORD)v4, (v5 - v4) >> 3, (unsigned int)&v15, a1);
    if ( v15 )
      ZwClose(v15);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    KeReleaseGuardedMutex(&stru_140C44960);
    return (unsigned int)-1073741670;
  }
  return v9;
}
