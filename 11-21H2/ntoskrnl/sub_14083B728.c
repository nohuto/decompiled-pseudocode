/*
 * XREFs of sub_14083B728 @ 0x14083B728
 * Callers:
 *     sub_14083B480 @ 0x14083B480 (sub_14083B480.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x14041E460 (ZwQuerySystemEnvironmentValueEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

int __fastcall sub_14083B728(void **a1)
{
  int result; // eax
  void *v3; // rcx
  NTSTATUS v4; // eax
  char v5; // bl
  int Value; // [rsp+30h] [rbp-40h] BYREF
  ULONG ValueLength; // [rsp+34h] [rbp-3Ch] BYREF
  PVOID Object; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  GUID VendorGuid; // [rsp+50h] [rbp-20h] BYREF

  Value = 0;
  ValueLength = 4;
  VendorGuid.Data1 = 2012912317;
  *(_DWORD *)&VendorGuid.Data2 = 1295123289;
  DestinationString = 0LL;
  *(_DWORD *)VendorGuid.Data4 = -198680387;
  *(_DWORD *)&VendorGuid.Data4[4] = 1266192359;
  RtlInitUnicodeString(&DestinationString, L"Kernel_Lsa_Ppl_Config");
  result = ZwQuerySystemEnvironmentValueEx(&DestinationString, &VendorGuid, &Value, &ValueLength, 0LL);
  if ( Value == 4 )
  {
    v3 = *a1;
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(v3, 0x2000000u, 0LL, 0, &Object, 0LL);
    if ( v4 >= 0 )
    {
      v5 = *((_BYTE *)Object + 2170);
      result = ObfDereferenceObject(Object);
      if ( v5 == 65 )
        return result;
      v4 = -1073741790;
    }
    KeBugCheckEx(0x29u, v4, (ULONG_PTR)"minkernel\\ntos\\se\\rmmain.c", 0x295uLL, 0LL);
  }
  return result;
}
