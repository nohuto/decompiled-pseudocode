/*
 * XREFs of sub_140B107D8 @ 0x140B107D8
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     RtlHashUnicodeString @ 0x14078C240 (RtlHashUnicodeString.c)
 *     sub_14082EF44 @ 0x14082EF44 (sub_14082EF44.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140B107D8()
{
  NTSTATUS v0; // eax
  unsigned int Key; // ebx
  unsigned int v2; // ecx
  __int64 *v3; // rdx
  unsigned int v4; // eax
  _QWORD *Pool2; // rax
  __int64 v6; // rdx
  ULONG i; // esi
  NTSTATUS v8; // eax
  UNICODE_STRING *v10; // rax
  UNICODE_STRING *v11; // rdi
  NTSTATUS v12; // eax
  ULONG v13; // ecx
  __int64 v14; // rcx
  UNICODE_STRING **v15; // rax
  ULONG HashValue[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING v18; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD KeyInformation_8[6]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v20[12]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v21; // [rsp+94h] [rbp-74h]
  WCHAR SourceString[264]; // [rsp+98h] [rbp-70h] BYREF

  *(_QWORD *)&v18.Length = 8781956LL;
  KeyHandle = 0LL;
  HashValue[1] = 0;
  HashValue[0] = 0;
  v18.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\DeviceOverrides";
  memset(KeyInformation_8, 0, sizeof(KeyInformation_8));
  v0 = sub_14082EF44(&KeyHandle, 0LL, &v18, 0x20019u);
  Key = v0;
  if ( v0 == -1073741772 )
    goto LABEL_17;
  if ( v0 < 0 )
    goto LABEL_18;
  Key = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation_8, 0x30u, &HashValue[1]);
  if ( (int)(Key + 0x80000000) >= 0 && Key != -2147483643 )
    goto LABEL_18;
  if ( !HIDWORD(KeyInformation_8[2]) )
  {
LABEL_17:
    Key = 0;
    goto LABEL_18;
  }
  v2 = 0;
  v3 = qword_140025788;
  while ( HIDWORD(KeyInformation_8[2]) >= 3 * *(_DWORD *)v3 )
  {
    ++v2;
    v3 = (__int64 *)((char *)v3 + 4);
    if ( v2 >= 3 )
      goto LABEL_8;
  }
  dword_140C54E90 = *(_DWORD *)v3;
LABEL_8:
  v4 = dword_140C54E90;
  if ( !dword_140C54E90 )
  {
    v4 = 257;
    dword_140C54E90 = 257;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 16LL * v4, 0x6E697050u);
  qword_140C54E88 = (__int64)Pool2;
  if ( Pool2 )
  {
    if ( dword_140C54E90 )
    {
      v6 = (unsigned int)dword_140C54E90;
      do
      {
        Pool2[1] = Pool2;
        *Pool2 = Pool2;
        Pool2 += 2;
        --v6;
      }
      while ( v6 );
    }
    for ( i = 0; ; ++i )
    {
      v8 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, v20, 0x218u, &HashValue[1]);
      Key = v8;
      if ( v8 >= 0 )
      {
        if ( v21 <= 0x200 )
        {
          SourceString[(unsigned __int64)v21 >> 1] = 0;
          v10 = (UNICODE_STRING *)ExAllocatePool2(256LL, 0x20uLL, 0x6E697050u);
          v11 = v10;
          if ( !v10 )
            goto LABEL_34;
          if ( !RtlCreateUnicodeString(v10 + 1, SourceString) )
          {
            Key = -1073741670;
            ExFreePoolWithTag(v11, 0);
            goto LABEL_18;
          }
          v12 = RtlHashUnicodeString(v11 + 1, 1u, 0, HashValue);
          v13 = HashValue[0];
          if ( v12 < 0 )
            v13 = 0;
          HashValue[0] = v13;
          v14 = qword_140C54E88 + 16LL * (v13 % dword_140C54E90);
          v15 = *(UNICODE_STRING ***)(v14 + 8);
          if ( *v15 != (UNICODE_STRING *)v14 )
            __fastfail(3u);
          *(_QWORD *)&v11->Length = v14;
          v11->Buffer = (wchar_t *)v15;
          *v15 = v11;
          *(_QWORD *)(v14 + 8) = v11;
        }
      }
      else
      {
        if ( v8 == -2147483622 )
          goto LABEL_17;
        if ( v8 != -2147483643 )
          goto LABEL_18;
      }
    }
  }
  dword_140C54E90 = 0;
LABEL_34:
  Key = -1073741670;
LABEL_18:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return Key;
}
