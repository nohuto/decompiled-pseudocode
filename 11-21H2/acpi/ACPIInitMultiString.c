/*
 * XREFs of ACPIInitMultiString @ 0x1C00AEEA0
 * Callers:
 *     ACPIDockIrpQueryID @ 0x1C00AACA0 (ACPIDockIrpQueryID.c)
 * Callees:
 *     <none>
 */

__int64 ACPIInitMultiString(struct _UNICODE_STRING *a1, ...)
{
  const char **v1; // rdi
  int v2; // ebx
  const char *v3; // rax
  unsigned int v4; // ebx
  wchar_t *Buffer; // rcx
  PCSZ *v7; // rbx
  struct _UNICODE_STRING v8; // [rsp+28h] [rbp-30h] BYREF
  struct _STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF
  PUNICODE_STRING v10; // [rsp+80h] [rbp+28h]
  const char *v11; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v11 = va_arg(va1, const char *);
  v10 = a1;
  va_copy((va_list)v1, va);
  DestinationString = 0LL;
  v2 = 0;
  v8 = 0LL;
  v3 = v11;
  if ( v11 )
  {
    do
    {
      RtlInitAnsiString(&DestinationString, v3);
      v2 += RtlxAnsiStringToUnicodeSize(&DestinationString);
      v3 = *++v1;
    }
    while ( *v1 );
    a1 = v10;
  }
  if ( v2 )
  {
    v4 = v2 + 2;
    a1->MaximumLength = v4;
    v10->Buffer = (wchar_t *)ExAllocatePool2(256LL, v4, 1399874369LL);
    Buffer = v10->Buffer;
    if ( !Buffer )
      return 3221225626LL;
    v8.MaximumLength = v4;
    va_copy((va_list)v7, va);
    while ( 1 )
    {
      v8.Buffer = Buffer;
      if ( !*v7 )
        break;
      RtlInitAnsiString(&DestinationString, *v7);
      RtlAnsiStringToUnicodeString(&v8, &DestinationString, 0);
      ++v7;
      Buffer = &v8.Buffer[((unsigned __int64)v8.Length >> 1) + 1];
      v8.MaximumLength += -2 - v8.Length;
      v8.Length = 0;
    }
    *Buffer = 0;
    v10->Length = v10->MaximumLength;
  }
  else
  {
    RtlInitUnicodeString(a1, 0LL);
  }
  return 0LL;
}
