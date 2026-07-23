/*
 * XREFs of sub_140807A78 @ 0x140807A78
 * Callers:
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403B1A48 @ 0x1403B1A48 (sub_1403B1A48.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140807A78(__int64 a1)
{
  _DWORD *Pool2; // rdi
  int v3; // ebx
  unsigned int v4; // esi
  char *v5; // rax
  char *v6; // r15
  __int64 v7; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+40h] BYREF

  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  Pool2 = 0LL;
  v3 = sub_1403B1A48(&KeyHandle, L"Control\\Winresume");
  if ( v3 < 0 )
    return (unsigned int)v3;
  RtlInitUnicodeString(&DestinationString, L"ResumeContext");
  v3 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  if ( v3 == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, ResultLength, 2020885330LL);
    if ( !Pool2 )
    {
LABEL_15:
      v3 = -1073741801;
      goto LABEL_10;
    }
    v3 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
  }
  if ( v3 >= 0 )
  {
    v4 = (Pool2[2] + 4095) & 0xFFFFF000;
    v5 = (char *)ExAllocatePool2(64LL, v4, 2020885330LL);
    v6 = v5;
    if ( v5 )
    {
      memmove(v5, Pool2 + 3, (unsigned int)Pool2[2]);
      v7 = (unsigned int)Pool2[2];
      if ( v4 > (unsigned int)v7 )
        memset(&v6[v7], 0, v4 - (unsigned int)v7);
      *(_DWORD *)(a1 + 248) = v4 >> 12;
      *(_QWORD *)(a1 + 240) = v6;
      goto LABEL_10;
    }
    goto LABEL_15;
  }
LABEL_10:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x78744352u);
  return (unsigned int)v3;
}
