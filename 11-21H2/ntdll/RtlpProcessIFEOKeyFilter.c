/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x18007C5D8
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007C3A8 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlPrefixUnicodeString @ 0x180041530 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x1800415D0 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     NtEnumerateKey @ 0x1800A46B0 (NtEnumerateKey.c)
 */

NTSTATUS __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, ACCESS_MASK a2, _UNICODE_STRING *a3)
{
  wchar_t *v3; // r13
  int v5; // ebx
  void *v6; // rsi
  NTSTATUS result; // eax
  _BYTE *v9; // rcx
  ULONG v10; // eax
  NTSTATUS inited; // edi
  NTSTATUS v12; // eax
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v15; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Length; // [rsp+34h] [rbp-CCh]
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING String2; // [rsp+58h] [rbp-A8h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+68h] [rbp-98h]
  _BYTE *v23; // [rsp+70h] [rbp-90h]
  _UNICODE_STRING v24; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v27; // [rsp+C4h] [rbp-3Ch]
  int v28; // [rsp+C8h] [rbp-38h]
  int v29; // [rsp+CCh] [rbp-34h]

  DesiredAccess = a2;
  v3 = (wchar_t *)KeyValueInformation;
  v5 = 0;
  KeyHandle = 0LL;
  v6 = 0LL;
  Length = 544;
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
  if ( v27 != 4 || v28 != 4 || !v29 )
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
    v9 = KeyValueInformation;
    v19 = 0;
    v23 = KeyValueInformation;
    v10 = 0;
    while ( 1 )
    {
      inited = NtEnumerateKey(*a1, v10, KeyBasicInformation, v9, Length, &ResultLength);
      if ( inited >= 0 )
      {
        DestinationString.Length = *((_WORD *)v23 + 6);
        DestinationString.MaximumLength = *((_WORD *)v23 + 6);
        DestinationString.Buffer = (wchar_t *)(v23 + 16);
        ObjectAttributes.RootDirectory = *a1;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        inited = NtOpenKey(&KeyHandle, DesiredAccess, &ObjectAttributes);
        if ( inited >= 0 )
          break;
      }
LABEL_24:
      v10 = ++v19;
      if ( inited < 0 )
        goto LABEL_26;
      v9 = v23;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, L"FilterFullPath");
    if ( inited < 0 )
    {
      NtClose(KeyHandle);
      goto LABEL_26;
    }
    while ( 1 )
    {
      do
      {
        v12 = NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v3, Length, &ResultLength);
        inited = v12;
        if ( v12 != -2147483643 && v12 != -1073741789 )
          break;
        if ( v6 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( !ProcessHeap )
        {
          v6 = 0LL;
LABEL_44:
          inited = -1073741801;
LABEL_19:
          if ( inited < 0 )
          {
            NtClose(KeyHandle);
            v15 = 0;
            if ( inited != -1073741772 )
              v15 = inited;
            inited = v15;
            goto LABEL_24;
          }
          if ( *((_DWORD *)v3 + 1) != 1
            || *((_DWORD *)v3 + 2) > 0xFFFEu
            || (v24.Length = v3[4] - 2,
                v24.MaximumLength = v24.Length,
                v24.Buffer = v3 + 6,
                RtlCompareUnicodeString(&String2, &v24, 1u)) )
          {
            NtClose(KeyHandle);
            goto LABEL_24;
          }
LABEL_26:
          if ( v6 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
          if ( inited >= 0 )
          {
            NtClose(*a1);
            *a1 = KeyHandle;
          }
          if ( inited != -2147483622 )
            return inited;
          return v5;
        }
        Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
        v6 = Heap;
        if ( !Heap )
          goto LABEL_44;
        v23 = Heap;
        v3 = (wchar_t *)Heap;
        Length = ResultLength;
      }
      while ( inited == -2147483643 );
      if ( inited != -1073741789 )
        goto LABEL_19;
    }
  }
  return result;
}
