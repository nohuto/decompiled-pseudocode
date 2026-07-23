/*
 * XREFs of sub_14055EDD4 @ 0x14055EDD4
 * Callers:
 *     sub_1403B839C @ 0x1403B839C (sub_1403B839C.c)
 *     sub_14055EBF8 @ 0x14055EBF8 (sub_14055EBF8.c)
 * Callees:
 *     sub_14055EBC8 @ 0x14055EBC8 (sub_14055EBC8.c)
 *     sub_1405F3DFC @ 0x1405F3DFC (sub_1405F3DFC.c)
 *     sub_1407E21D4 @ 0x1407E21D4 (sub_1407E21D4.c)
 *     sub_14082E8D4 @ 0x14082E8D4 (sub_14082E8D4.c)
 *     sub_1409C5C24 @ 0x1409C5C24 (sub_1409C5C24.c)
 *     sub_1409C5D4C @ 0x1409C5D4C (sub_1409C5D4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_14055EDD4()
{
  __int64 v0; // rdx
  int v1; // ebx
  __int64 v2; // r8
  __int64 Pool2; // rax
  __int64 v4; // rcx
  void *v5; // rdi
  int v6; // r9d
  int v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0;
  v8 = 0;
  dword_140C4F018 = 1;
  v1 = sub_14082E8D4(&qword_140C4F008, L"XTS-AES", L"Microsoft Primitive Provider", 1LL);
  if ( v1 < 0 )
    goto LABEL_10;
  Pool2 = ExAllocatePool2(64LL, 64LL, 1886217299LL);
  v5 = (void *)Pool2;
  if ( !Pool2 )
  {
    v1 = -1073741670;
LABEL_10:
    sub_14055EBC8(1, v0, v2);
    return (unsigned int)v1;
  }
  v1 = sub_1405F3DFC(v4, Pool2, 64LL);
  if ( v1 < 0 )
  {
    ExFreePoolWithTag(v5, 0);
    goto LABEL_10;
  }
  v1 = sub_1409C5C24(qword_140C4F008, (unsigned int)&hKey, 0, 0, (__int64)v5, 64);
  ExFreePoolWithTag(v5, 0);
  if ( v1 < 0 )
    goto LABEL_10;
  v1 = sub_1407E21D4((_DWORD)hKey, (unsigned int)L"KeyLength", (unsigned int)&v8, v6, (__int64)&v9);
  if ( v1 < 0 )
    goto LABEL_10;
  if ( v8 == 512 )
  {
    dword_140C4F004 = 4096;
    v1 = sub_1409C5D4C(hKey, L"MessageBlockLength", &dword_140C4F004, 4LL);
    if ( v1 < 0 )
      goto LABEL_10;
  }
  return (unsigned int)v1;
}
