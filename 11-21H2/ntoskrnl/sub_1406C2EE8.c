/*
 * XREFs of sub_1406C2EE8 @ 0x1406C2EE8
 * Callers:
 *     sub_1406C2D34 @ 0x1406C2D34 (sub_1406C2D34.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall sub_1406C2EE8(HANDLE *a1, __int64 a2, UNICODE_STRING *a3)
{
  int v3; // ebx
  wchar_t *v4; // r13
  void *v6; // rsi
  NTSTATUS result; // eax
  int v9; // ecx
  bool v10; // zf
  _BYTE *v11; // rcx
  ULONG v12; // eax
  NTSTATUS inited; // edi
  ULONG v14; // ecx
  NTSTATUS v15; // eax
  PVOID PoolWithQuotaTag; // rax
  NTSTATUS v17; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Length; // [rsp+34h] [rbp-CCh]
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v24; // [rsp+68h] [rbp-98h]
  _BYTE *v25; // [rsp+70h] [rbp-90h]
  UNICODE_STRING v26; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v29; // [rsp+C4h] [rbp-3Ch]
  int v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+CCh] [rbp-34h]

  v3 = 0;
  v4 = (wchar_t *)KeyValueInformation;
  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v6 = 0LL;
  Length = 544;
  memset(&ObjectAttributes, 0, 44);
  v26 = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, L"UseFilter");
  if ( result < 0 )
    return result;
  result = ZwQueryValueKey(
             *a1,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x220u,
             &ResultLength);
  if ( result < 0 )
  {
    if ( result == -1073741772 || result == -1073741789 || result == -2147483643 )
      return v3;
    return result;
  }
  if ( v29 != 4 || v30 != 4 || !v31 )
    return 0;
  v9 = 1600;
  v10 = *((_BYTE *)KeGetCurrentThread() + 562) == 1;
  String2 = *a3;
  if ( !v10 )
    v9 = 576;
  v24 = v9;
  result = RtlInitUnicodeStringEx(&DestinationString, L"\\??\\");
  if ( result >= 0 )
  {
    if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
    {
      String2.Length -= 8;
      String2.MaximumLength -= 8;
      String2.Buffer += 4;
    }
    v11 = KeyValueInformation;
    v21 = 0;
    v25 = KeyValueInformation;
    v12 = 0;
LABEL_18:
    inited = ZwEnumerateKey(*a1, v12, KeyBasicInformation, v11, Length, &ResultLength);
    if ( inited < 0 )
      goto LABEL_40;
    DestinationString.Length = *((_WORD *)v25 + 6);
    DestinationString.MaximumLength = *((_WORD *)v25 + 6);
    DestinationString.Buffer = (wchar_t *)(v25 + 16);
    ObjectAttributes.RootDirectory = *a1;
    ObjectAttributes.Attributes = v24;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    if ( inited < 0 )
      goto LABEL_40;
    inited = RtlInitUnicodeStringEx(&DestinationString, L"FilterFullPath");
    if ( inited < 0 )
    {
      ZwClose(KeyHandle);
      goto LABEL_43;
    }
    v14 = Length;
    while ( 1 )
    {
      v15 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v4, v14, &ResultLength);
      inited = v15;
      if ( v15 != -2147483643 && v15 != -1073741789 )
        break;
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
      v6 = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        inited = -1073741801;
LABEL_32:
        if ( inited >= 0 )
        {
          if ( *((_DWORD *)v4 + 1) != 1
            || *((_DWORD *)v4 + 2) > 0xFFFEu
            || (v26.Length = v4[4] - 2,
                v26.MaximumLength = v26.Length,
                v26.Buffer = v4 + 6,
                RtlCompareUnicodeString(&String2, &v26, 1u)) )
          {
            ZwClose(KeyHandle);
            goto LABEL_40;
          }
        }
        else
        {
          ZwClose(KeyHandle);
          v17 = 0;
          if ( inited != -1073741772 )
            v17 = inited;
          inited = v17;
LABEL_40:
          v12 = ++v21;
          if ( inited >= 0 )
          {
            v11 = v25;
            goto LABEL_18;
          }
        }
LABEL_43:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        if ( inited >= 0 )
        {
          ZwClose(*a1);
          *a1 = KeyHandle;
        }
        if ( inited != -2147483622 )
          return inited;
        return v3;
      }
      v14 = ResultLength;
      v25 = PoolWithQuotaTag;
      v4 = (wchar_t *)PoolWithQuotaTag;
      Length = ResultLength;
      if ( inited != -2147483643 )
      {
LABEL_29:
        if ( inited != -1073741789 )
          goto LABEL_32;
      }
    }
    v14 = Length;
    goto LABEL_29;
  }
  return result;
}
