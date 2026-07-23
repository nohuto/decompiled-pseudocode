/*
 * XREFs of sub_14069760C @ 0x14069760C
 * Callers:
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 * Callees:
 *     sub_1402088DC @ 0x1402088DC (sub_1402088DC.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_140561D38 @ 0x140561D38 (sub_140561D38.c)
 *     sub_1406979BC @ 0x1406979BC (sub_1406979BC.c)
 *     sub_140698128 @ 0x140698128 (sub_140698128.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14069760C(__int64 a1, void *a2)
{
  int v2; // ebx
  int v5; // edi
  unsigned int *v7; // rcx
  _DWORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  const WCHAR *v9; // [rsp+28h] [rbp-58h]
  _OWORD v10[2]; // [rsp+30h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF

  v2 = 0;
  ObjectAttributes.RootDirectory = a2;
  v8[1] = 0;
  v13 = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  v9 = L"Status";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v8;
  memset(v10, 0, sizeof(v10));
  v5 = 0;
  v8[0] = 917516;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v2 = sub_140698128(a1, a2, v10);
    if ( v2 >= 0 && (int)sub_140561D38((__int64)v10, KeyHandle, (__int64)L"Blocked", &v13) >= 0 )
    {
      if ( sub_1402088DC(v13) )
        v5 = *(unsigned int *)((char *)v7 + v7[2]);
      ExFreePoolWithTag(v7, 0);
      if ( v5 )
        v2 = -1073740948;
    }
  }
  sub_1406979BC(v10);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
