/*
 * XREFs of sub_140B30BB0 @ 0x140B30BB0
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x14041D280 (ZwDeleteKey.c)
 *     ZwOpenKeyEx @ 0x14041DC40 (ZwOpenKeyEx.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140B30BB0(__int64 a1)
{
  __int64 v1; // rdi
  int inited; // ebx
  unsigned __int16 v3; // ax
  _WORD *PoolWithTag; // rax
  __int64 v6; // rax
  HANDLE v7; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING ValueName; // [rsp+98h] [rbp-68h] BYREF
  WCHAR SourceString[256]; // [rsp+B0h] [rbp-50h] BYREF

  Data = 0LL;
  xmmword_140C15C80 = 0LL;
  v1 = *(_QWORD *)(a1 + 240);
  inited = 0;
  DestinationString = 0LL;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  ValueName = 0LL;
  v7 = 0LL;
  KeyHandle = 0LL;
  v3 = *(_WORD *)(v1 + 2840);
  if ( !v3 )
    return (unsigned int)inited;
  if ( v3 >= 0x80u )
    return (unsigned int)-1073741811;
  DWORD2(xmmword_140C15C80) = *(_DWORD *)(v1 + 2840);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, WORD5(xmmword_140C15C80), 0x5067664Du);
  Data = PoolWithTag;
  if ( PoolWithTag )
  {
    inited = sub_1402E0978(PoolWithTag, WORD5(xmmword_140C15C80), *(_QWORD *)(v1 + 2848));
    if ( inited < 0 )
      goto LABEL_22;
    inited = sub_1402E1280(
               SourceString,
               0x200uLL,
               L"%s%s",
               L"\\registry\\machine\\",
               L"System\\CurrentControlSet\\Control\\ManufacturingMode\\");
    if ( inited < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( inited < 0 )
      goto LABEL_22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( inited < 0 )
      goto LABEL_22;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)&xmmword_140C15C80 + 8);
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes);
    if ( inited < 0 )
      goto LABEL_22;
    ZwClose(Handle);
    LODWORD(xmmword_140C15C80) = xmmword_140C15C80 | 1;
    RtlInitUnicodeStringEx(&ValueName, L"LastProfile");
    inited = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, Data, WORD5(xmmword_140C15C80));
    if ( inited < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, L"Current");
    if ( inited < 0 )
      goto LABEL_22;
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 832;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKeyEx(&v7, 0xF003Fu, &ObjectAttributes, 8u) >= 0 )
    {
      inited = ZwDeleteKey(v7);
      if ( inited < 0 )
        goto LABEL_22;
      ZwClose(v7);
      v7 = 0LL;
    }
    inited = ZwCreateKey(&v7, 0xF003Fu, &ObjectAttributes, 0, 0LL, 3u, 0LL);
    if ( inited >= 0 )
    {
      inited = sub_1402E1280(
                 SourceString,
                 0x200uLL,
                 L"%s%s%wZ",
                 L"\\registry\\machine\\",
                 L"System\\CurrentControlSet\\Control\\ManufacturingMode\\",
                 (char *)&xmmword_140C15C80 + 8);
      if ( inited >= 0 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( SourceString[v6] );
        inited = ZwSetValueKey(v7, &stru_140D3CB80, 0, 6u, SourceString, 2 * v6);
      }
    }
    goto LABEL_22;
  }
  inited = -1073741670;
LABEL_22:
  if ( v7 )
    ZwClose(v7);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
