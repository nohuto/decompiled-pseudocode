/*
 * XREFs of sub_140936BF8 @ 0x140936BF8
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 * Callees:
 *     sub_1402A3A60 @ 0x1402A3A60 (sub_1402A3A60.c)
 *     sub_1402A3F70 @ 0x1402A3F70 (sub_1402A3F70.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_1407DE8D0 @ 0x1407DE8D0 (sub_1407DE8D0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140936BF8(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // ebx
  _DWORD *Pool2; // rdi
  int v7; // eax
  PVOID v8; // rbp
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __m128i v11; // [rsp+38h] [rbp-30h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0LL;
  Object = 0LL;
  if ( a3 < 0x10 )
    return (unsigned int)-1073741811;
  v11 = *(__m128i *)a2;
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) > 1u )
    return (unsigned int)-1073741811;
  v11.m128i_i8[8] = 0;
  if ( v11.m128i_i32[2] )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 16LL, 1716547401LL);
    if ( Pool2 )
    {
      v7 = sub_1407DE8D0(*(_QWORD *)a2, 2, 0, 0x66506F49u, &Object);
      v8 = Object;
      v5 = v7;
      if ( v7 >= 0 )
      {
        ObfReferenceObjectWithTag(Object, 0x6F466F49u);
        sub_1403606C4((__int64)v8);
        *(_QWORD *)Pool2 = v8;
        Pool2[2] ^= (Pool2[2] ^ *(unsigned __int8 *)(a2 + 8)) & 1;
        v5 = sub_1402A3A60(a1, &v10);
        if ( v5 >= 0 )
        {
          if ( (int)sub_1402A3F70(v10, 8u, (signed __int64)Pool2) >= 0 )
            return 0;
          v5 = -1073741791;
        }
      }
      if ( *(_QWORD *)Pool2 )
        ObfDereferenceObjectWithTag(v8, 0x6F466F49u);
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
