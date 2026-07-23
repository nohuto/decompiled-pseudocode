/*
 * XREFs of sub_1409F6F98 @ 0x1409F6F98
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140762AEC @ 0x140762AEC (sub_140762AEC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409F6F98(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  size_t Length; // rdx
  unsigned int v7; // edi
  PCWSTR SourceString; // [rsp+28h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+20h]

  v10 = 0;
  SourceString = 0LL;
  DestinationString = 0LL;
  result = sub_140762AEC((PVOID *)&SourceString, &v10);
  v5 = result;
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    Length = DestinationString.Length;
    v7 = DestinationString.Length + 24;
    v11 = v7;
    if ( v7 <= *a2 )
    {
      *(_DWORD *)a1 = v10;
      *(_WORD *)(a1 + 8) = Length;
      *(_QWORD *)(a1 + 16) = a1 + 24;
      memmove((void *)(a1 + 24), DestinationString.Buffer, Length);
    }
    else
    {
      v5 = -2147483643;
    }
    if ( SourceString )
      ExFreePoolWithTag((PVOID)SourceString, 0);
    *a2 = v7;
    return v5;
  }
  return result;
}
