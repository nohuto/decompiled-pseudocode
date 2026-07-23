/*
 * XREFs of sub_1409D7A90 @ 0x1409D7A90
 * Callers:
 *     sub_1409D4AF4 @ 0x1409D4AF4 (sub_1409D4AF4.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     sub_1409D618C @ 0x1409D618C (sub_1409D618C.c)
 *     sub_1409D8B9C @ 0x1409D8B9C (sub_1409D8B9C.c)
 */

int __fastcall sub_1409D7A90(__int64 a1, __int64 a2)
{
  int *v2; // rbx
  unsigned int v5; // edi
  int v6; // eax
  int result; // eax
  __int64 v8; // rdi
  __int64 v9; // rcx
  const wchar_t *v10; // rax
  __int16 v11; // cx
  const wchar_t *v12; // rax
  __int16 v13; // di
  __int128 v14; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+40h] BYREF

  v2 = (int *)&unk_140D32150;
  KeyHandle = 0LL;
  v5 = 0;
  v14 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  do
  {
    v6 = *v2;
    if ( (*v2 & 1) == 0 )
    {
      if ( !v5 )
      {
        result = sub_1409D8B9C(a1, v2 + 2, v2 + 4);
        if ( result < 0 )
          return result;
        v6 = *v2;
      }
      *v2 = v6 | 1;
    }
    ++v5;
    v2 += 6;
  }
  while ( v5 < 2 );
  v8 = 0x7FFFLL;
  v9 = 0x7FFFLL;
  v10 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters";
  while ( *v10 )
  {
    ++v10;
    if ( !--v9 )
      goto LABEL_13;
  }
  v11 = 2 * v9;
  *((_QWORD *)&v14 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters";
  LOWORD(v14) = -2 - v11;
  WORD1(v14) = -v11;
LABEL_13:
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v14;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    ZwClose(KeyHandle);
    v14 = 0LL;
    v12 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters\\CacheInfo";
    while ( *v12 )
    {
      ++v12;
      if ( !--v8 )
        goto LABEL_19;
    }
    v13 = 2 * v8;
    *((_QWORD *)&v14 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\"
                             "StoreParameters\\CacheInfo";
    LOWORD(v14) = -2 - v13;
    WORD1(v14) = -v13;
LABEL_19:
    result = sub_1409D618C(a1 + 512, (unsigned __int16 *)&v14);
    if ( result >= 0 )
    {
      *(_QWORD *)(a1 + 552) = a2;
      return 0;
    }
  }
  return result;
}
