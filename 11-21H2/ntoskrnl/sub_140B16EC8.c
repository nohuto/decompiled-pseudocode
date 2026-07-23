/*
 * XREFs of sub_140B16EC8 @ 0x140B16EC8
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 */

__int64 sub_140B16EC8()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  unsigned __int16 v2; // dx
  __int64 i; // r8
  __int16 v4; // ax
  unsigned __int16 v5; // cx
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-48h] BYREF
  __int64 Data; // [rsp+68h] [rbp-18h] BYREF

  result = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Data = 0LL;
  if ( dword_140D686C8 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140B57C60;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( v1 >= 0 )
    {
      v2 = word_140D3CA00;
      for ( i = 3LL; i >= 0; --i )
      {
        v4 = 55;
        v5 = v2 & 0xF;
        if ( v5 <= 9u )
          v4 = 48;
        v2 >>= 4;
        *((_WORD *)&Data + i) = v5 + v4;
      }
      v1 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140B57C80, 0, 1u, &Data, 8u);
      if ( v1 >= 0 )
        v1 = 0;
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
    return (unsigned int)v1;
  }
  return result;
}
