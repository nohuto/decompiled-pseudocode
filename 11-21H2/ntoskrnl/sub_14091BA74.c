/*
 * XREFs of sub_14091BA74 @ 0x14091BA74
 * Callers:
 *     CallbackRoutine @ 0x140741CF0 (CallbackRoutine.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenEnlistment @ 0x14041DBC0 (ZwOpenEnlistment.c)
 *     ZwRecoverEnlistment @ 0x14041E5C0 (ZwRecoverEnlistment.c)
 *     sub_14067F2D4 @ 0x14067F2D4 (sub_14067F2D4.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 */

__int64 __fastcall sub_14091BA74(_QWORD *a1, __int64 a2, GUID *a3)
{
  __int64 result; // rax
  int v6; // edi
  void *v7; // r8
  UNICODE_STRING v8; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE EnlistmentHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID EnlistmentKey; // [rsp+B8h] [rbp+38h] BYREF

  EnlistmentKey = 0LL;
  EnlistmentHandle = 0LL;
  v8 = 0LL;
  UnicodeString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  result = sub_1407454A8(&a3->Data1, (__int64)&v8, 1);
  if ( (int)result >= 0 )
  {
    v6 = sub_14067F2D4(a1, 0LL, (__int64)&a3[1], 1, (__int64)&EnlistmentKey);
    if ( v6 >= 0 )
    {
      v7 = (void *)a1[6];
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 576;
      v6 = ZwOpenEnlistment(&EnlistmentHandle, 0xF001Fu, v7, a3, &ObjectAttributes);
      if ( v6 >= 0 )
      {
        v6 = ZwRecoverEnlistment(EnlistmentHandle, EnlistmentKey);
        ZwClose(EnlistmentHandle);
      }
    }
    RtlFreeUnicodeString(&UnicodeString);
    RtlFreeUnicodeString(&v8);
    return (unsigned int)v6;
  }
  return result;
}
