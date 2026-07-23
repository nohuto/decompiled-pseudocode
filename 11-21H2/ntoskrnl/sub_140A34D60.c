/*
 * XREFs of sub_140A34D60 @ 0x140A34D60
 * Callers:
 *     sub_140830634 @ 0x140830634 (sub_140830634.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140830280 @ 0x140830280 (sub_140830280.c)
 *     sub_140830CF4 @ 0x140830CF4 (sub_140830CF4.c)
 *     RtlCultureNameToLCID @ 0x140830F20 (RtlCultureNameToLCID.c)
 *     sub_140A35494 @ 0x140A35494 (sub_140A35494.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A34D60(HANDLE KeyHandle, __int64 a2, _BYTE *a3, __int16 *a4)
{
  unsigned int v8; // esi
  int v9; // eax
  unsigned int v10; // r13d
  PVOID PoolWithTag; // rax
  void *v12; // rdi
  int v13; // ebx
  void *v14; // rcx
  unsigned __int16 v15; // cx
  __int16 v17[2]; // [rsp+30h] [rbp-20h] BYREF
  SIZE_T NumberOfBytes; // [rsp+34h] [rbp-1Ch] BYREF
  DWORD Lcid; // [rsp+3Ch] [rbp-14h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 v21; // [rsp+88h] [rbp+38h] BYREF

  Lcid = 0;
  v21 = 0;
  v17[0] = -1;
  DestinationString = 0LL;
  if ( !a2 || !KeyHandle )
    return (unsigned int)-1073741811;
  v8 = 1;
  NumberOfBytes = 0x100000000LL;
  RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
  v9 = sub_140830280(KeyHandle, &DestinationString, (_DWORD *)&NumberOfBytes + 1, 0LL, (ULONG *)&NumberOfBytes);
  if ( !(_DWORD)NumberOfBytes || v9 == -1073741772 )
    return (unsigned int)-1073741823;
  v10 = NumberOfBytes;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x72746C6Du);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, v10);
  v13 = sub_140830280(KeyHandle, &DestinationString, (_DWORD *)&NumberOfBytes + 1, v12, (ULONG *)&NumberOfBytes);
  v14 = v12;
  if ( v13 >= 0 )
  {
    if ( HIDWORD(NumberOfBytes) == 1 )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v12);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
      {
        v15 = Lcid;
        if ( ((Lcid - 4096) & 0xFFFFFBFF) == 0 )
        {
          v13 = sub_140830CF4(a2, DestinationString.Buffer, 0LL, (__int16 *)&v21);
          v14 = v12;
          if ( v13 < 0 )
            goto LABEL_19;
          v15 = v21;
          v8 = 3;
        }
        v13 = sub_140A35494(a2, v8, v15, v17);
        v14 = v12;
        if ( v13 >= 0 )
        {
          if ( a3 )
            *a3 = 2;
          if ( a4 )
            *a4 = v17[0];
        }
        goto LABEL_19;
      }
      v13 = -1073741823;
      v14 = v12;
    }
    else
    {
      v13 = -1073741823;
    }
  }
LABEL_19:
  ExFreePoolWithTag(v14, 0);
  return (unsigned int)v13;
}
