/*
 * XREFs of sub_140797CE4 @ 0x140797CE4
 * Callers:
 *     sub_140797BD4 @ 0x140797BD4 (sub_140797BD4.c)
 *     sub_140B2F180 @ 0x140B2F180 (sub_140B2F180.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     SeValidSecurityDescriptor @ 0x1406ACC40 (SeValidSecurityDescriptor.c)
 *     RtlQueryRegistryValueWithFallback @ 0x140797E20 (RtlQueryRegistryValueWithFallback.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140797CE4(PUNICODE_STRING ValueName, _QWORD *a2)
{
  void *ValueData; // rdi
  ULONG v3; // ebx
  NTSTATUS v6; // eax
  NTSTATUS v7; // esi
  unsigned int v8; // ebx
  ULONG v10; // ebx
  void *Pool2; // rax
  ULONG Length; // [rsp+68h] [rbp+10h] BYREF
  ULONG ValueType; // [rsp+70h] [rbp+18h] BYREF

  ValueData = 0LL;
  v3 = 512;
  ValueType = 0;
  *a2 = 0LL;
  for ( Length = 512; ; v3 = Length )
  {
    if ( ValueData )
      ExFreePoolWithTag(ValueData, 0);
    ValueData = (void *)ExAllocatePool2(256LL, v3, 1350005829LL);
    if ( !ValueData )
      return (unsigned int)-1073741670;
    v6 = RtlQueryRegistryValueWithFallback(PrimaryHandle, FallbackHandle, ValueName, v3, &ValueType, ValueData, &Length);
    v7 = v6;
    if ( v6 != -2147483643 && v6 != -1073741789 )
      break;
  }
  v8 = v6;
  if ( v6 >= 0 && ValueType == 3 )
  {
    if ( SeValidSecurityDescriptor(Length, ValueData) )
    {
      v10 = Length;
      Pool2 = (void *)ExAllocatePool2(256LL, Length, 1350005829LL);
      *a2 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, ValueData, v10);
        v8 = v7;
      }
      else
      {
        v8 = -1073741670;
      }
    }
    else
    {
      v8 = -1073741703;
    }
  }
  ExFreePoolWithTag(ValueData, 0);
  return v8;
}
