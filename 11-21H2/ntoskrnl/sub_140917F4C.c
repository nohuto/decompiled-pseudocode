/*
 * XREFs of sub_140917F4C @ 0x140917F4C
 * Callers:
 *     sub_1406EA120 @ 0x1406EA120 (sub_1406EA120.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_140917A40 @ 0x140917A40 (sub_140917A40.c)
 *     sub_140AB4138 @ 0x140AB4138 (sub_140AB4138.c)
 *     sub_140AB4178 @ 0x140AB4178 (sub_140AB4178.c)
 */

__int64 sub_140917F4C()
{
  unsigned int v0; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v3; // [rsp+80h] [rbp+10h]
  int v4; // [rsp+88h] [rbp+18h]
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  v0 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( (unsigned __int8)sub_140AB4138() )
  {
    if ( dword_140C54900 )
    {
      do
      {
        v4 = dword_140C0CAD4;
        if ( (unsigned int)dword_140C0CAD4 >= 6 )
          v3 = 0;
        else
          v3 = dword_140C0CAD4 + 1;
      }
      while ( _InterlockedCompareExchange(&dword_140C0CAD4, v3, dword_140C0CAD4) != v4 );
      if ( ((__int64)off_140C02530[23 * v3 + 4] & 1) == 0 && off_140C02530[23 * v3 + 6] )
        sub_140917A40(v3);
      if ( v3 == 6 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_140C063F8;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
        {
          _InterlockedIncrement(&dword_140D01820);
          ZwSetValueKey(KeyHandle, &stru_140C08E00, 0, 4u, &dword_140D01820, 4u);
          ZwClose(KeyHandle);
        }
        v0 = -2147483622;
      }
    }
    else
    {
      v0 = -1073741431;
    }
    sub_140AB4178();
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v0;
}
