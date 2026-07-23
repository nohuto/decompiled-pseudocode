/*
 * XREFs of sub_14081F804 @ 0x14081F804
 * Callers:
 *     IoReportHalResourceUsage @ 0x140AF7620 (IoReportHalResourceUsage.c)
 * Callees:
 *     HalTranslateBusAddress @ 0x1403B5160 (HalTranslateBusAddress.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14081F804(void *Src, size_t Size, char a3, _QWORD *a4, _DWORD *a5)
{
  size_t v8; // rdi
  __int64 result; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rbx
  PHYSICAL_ADDRESS v12; // rcx
  ULONG AddressSpace; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER TranslatedAddress; // [rsp+38h] [rbp-30h] BYREF

  TranslatedAddress.QuadPart = 0LL;
  AddressSpace = 0;
  v8 = (unsigned int)Size;
  if ( !qword_140D01468 || (qword_140D01468[6] & 0x1000) != 0 )
  {
    *a4 = 0LL;
    result = 0LL;
LABEL_3:
    *a5 = 0;
    return result;
  }
  *a5 = Size + 36;
  if ( (int)Size + 36 < (unsigned int)Size
    || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(Size + 36), 0x736C6448u),
        *a4 = PoolWithTag,
        (v11 = PoolWithTag) == 0LL) )
  {
    result = 3221225626LL;
    goto LABEL_3;
  }
  memmove(PoolWithTag, Src, v8);
  v12.QuadPart = qword_140D01468[8];
  if ( a3 )
  {
    AddressSpace = 1;
    HalTranslateBusAddress(Internal, 0, v12, &AddressSpace, &TranslatedAddress);
    v11 = (_DWORD *)*a4;
  }
  else
  {
    TranslatedAddress.QuadPart = qword_140D01468[8];
  }
  ++*v11;
  *(_QWORD *)((char *)v11 + v8) = 1LL;
  *(_DWORD *)((char *)v11 + v8 + 12) = 1;
  *(_DWORD *)((char *)v11 + v8 + 8) = 0;
  *(_DWORD *)((char *)v11 + v8 + 16) = 66049;
  *(LARGE_INTEGER *)((char *)v11 + v8 + 20) = TranslatedAddress;
  result = 0LL;
  *(_DWORD *)((char *)v11 + v8 + 28) = 8;
  return result;
}
