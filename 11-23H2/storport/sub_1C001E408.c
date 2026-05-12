/*
 * XREFs of sub_1C001E408 @ 0x1C001E408
 * Callers:
 *     sub_1C00212CC @ 0x1C00212CC (sub_1C00212CC.c)
 *     sub_1C00213DC @ 0x1C00213DC (sub_1C00213DC.c)
 *     sub_1C00789EC @ 0x1C00789EC (sub_1C00789EC.c)
 *     sub_1C0078B00 @ 0x1C0078B00 (sub_1C0078B00.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

__int64 sub_1C001E408(void *a1, ULONG a2, void **a3, const wchar_t *a4, ...)
{
  int v7; // eax
  NTSTATUS v8; // ebx
  ULONG Disposition; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Dest[64]; // [rsp+A0h] [rbp-60h] BYREF
  va_list Args; // [rsp+180h] [rbp+80h] BYREF

  va_start(Args, a4);
  KeyHandle = 0LL;
  Disposition = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  v7 = vsnwprintf(Dest, 0x3EuLL, a4, Args);
  if ( v7 < 0 || (unsigned __int64)v7 >= 0x3E )
    Dest[62] = 0;
  Dest[63] = 0;
  RtlInitUnicodeString(&DestinationString, Dest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, a2, &Disposition);
  if ( v8 >= 0 )
  {
    if ( Disposition == 2 )
      v8 = 0x40000000;
    if ( a3 )
      *a3 = KeyHandle;
    else
      ZwClose(KeyHandle);
  }
  return (unsigned int)v8;
}
