/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x180076A60
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007689C (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x180014AC0 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x180014C80 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     NtEnumerateKey @ 0x18009F430 (NtEnumerateKey.c)
 */

NTSTATUS __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, ACCESS_MASK a2, _UNICODE_STRING *a3)
{
  wchar_t *v3; // r14
  int v5; // ebx
  ULONG Length; // edi
  void *v7; // rsi
  NTSTATUS result; // eax
  _BYTE *v10; // rax
  ULONG v11; // r13d
  NTSTATUS inited; // edi
  ULONG v13; // ecx
  NTSTATUS v14; // eax
  PVOID Heap; // rax
  void *ProcessHeap; // rcx
  NTSTATUS v17; // eax
  HANDLE *v18; // rsi
  ULONG v19; // [rsp+30h] [rbp-D0h]
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE *v21; // [rsp+38h] [rbp-C8h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING String2; // [rsp+58h] [rbp-A8h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+68h] [rbp-98h]
  HANDLE *v26; // [rsp+70h] [rbp-90h]
  _UNICODE_STRING v27; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v30; // [rsp+C4h] [rbp-3Ch]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]

  DesiredAccess = a2;
  v3 = (wchar_t *)KeyValueInformation;
  v26 = a1;
  v5 = 0;
  Length = 544;
  KeyHandle = 0LL;
  v19 = 544;
  v7 = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, L"UseFilter");
  if ( result < 0 )
    return result;
  result = NtQueryValueKey(
             *a1,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x220u,
             &ResultLength);
  if ( result < 0 )
  {
    if ( result == -1073741772 || result == -1073741789 || result == -2147483643 )
      return v5;
    return result;
  }
  if ( v30 != 4 || v31 != 4 || !v32 )
    return 0;
  String2 = *a3;
  result = RtlInitUnicodeStringEx(&DestinationString, L"\\??\\");
  if ( result >= 0 )
  {
    if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
    {
      String2.Length -= 8;
      String2.MaximumLength -= 8;
      String2.Buffer += 4;
    }
    v10 = KeyValueInformation;
    v11 = 0;
    v21 = KeyValueInformation;
    while ( 1 )
    {
      inited = NtEnumerateKey(*v26, v11, KeyBasicInformation, v10, Length, &ResultLength);
      if ( inited >= 0 )
      {
        DestinationString.Length = *((_WORD *)v21 + 6);
        DestinationString.MaximumLength = *((_WORD *)v21 + 6);
        DestinationString.Buffer = (wchar_t *)(v21 + 16);
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.RootDirectory = *v26;
        ObjectAttributes.ObjectName = &DestinationString;
        inited = NtOpenKey(&KeyHandle, DesiredAccess, &ObjectAttributes);
        if ( inited >= 0 )
          break;
      }
LABEL_27:
      ++v11;
      if ( inited < 0 )
        goto LABEL_29;
LABEL_28:
      v10 = v21;
      Length = v19;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, L"FilterFullPath");
    if ( inited < 0 )
    {
      NtClose(KeyHandle);
      goto LABEL_29;
    }
    v13 = v19;
    while ( 1 )
    {
      v14 = NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v3, v13, &ResultLength);
      inited = v14;
      if ( v14 == -2147483643 || v14 == -1073741789 )
      {
        if ( v7 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( !ProcessHeap )
        {
          v7 = 0LL;
LABEL_45:
          inited = -1073741801;
LABEL_22:
          if ( inited < 0 )
          {
            NtClose(KeyHandle);
            v17 = 0;
            if ( inited != -1073741772 )
              v17 = inited;
            inited = v17;
            goto LABEL_27;
          }
          if ( *((_DWORD *)v3 + 1) != 1
            || *((_DWORD *)v3 + 2) > 0xFFFEu
            || (v27.Length = v3[4] - 2,
                v27.MaximumLength = v27.Length,
                v27.Buffer = v3 + 6,
                RtlCompareUnicodeString(&String2, &v27, 1u)) )
          {
            NtClose(KeyHandle);
            ++v11;
            goto LABEL_28;
          }
LABEL_29:
          if ( v7 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
          if ( inited >= 0 )
          {
            v18 = v26;
            NtClose(*v26);
            *v18 = KeyHandle;
          }
          if ( inited != -2147483622 )
            return inited;
          return v5;
        }
        Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
        v7 = Heap;
        if ( !Heap )
          goto LABEL_45;
        v13 = ResultLength;
        v3 = (wchar_t *)Heap;
        v19 = ResultLength;
        v21 = Heap;
      }
      else
      {
        Heap = v21;
        v13 = v19;
      }
      if ( inited != -2147483643 )
      {
        v19 = v13;
        v21 = Heap;
        if ( inited != -1073741789 )
          goto LABEL_22;
      }
    }
  }
  return result;
}
