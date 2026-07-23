/*
 * XREFs of sub_140AFF540 @ 0x140AFF540
 * Callers:
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E50B4 @ 0x1406E50B4 (sub_1406E50B4.c)
 *     sub_1406EBC44 @ 0x1406EBC44 (sub_1406EBC44.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 *     sub_1408258B8 @ 0x1408258B8 (sub_1408258B8.c)
 *     sub_1409B4AD0 @ 0x1409B4AD0 (sub_1409B4AD0.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char sub_140AFF540()
{
  PVOID PoolWithTag; // rax
  unsigned int v2; // ecx
  PVOID v3; // rcx
  _QWORD v4[16]; // [rsp+20h] [rbp-29h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x270uLL, 0x476C6953u);
  qword_140D32AA8 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x270uLL);
  if ( (int)sub_1406EBC44(qword_140D32AA8) < 0 || (int)sub_1408258B8((ULONG *)&dword_140D05060) < 0 )
    return 0;
  if ( (int)sub_1408258B8((ULONG *)&dword_140D05144) < 0 )
  {
    v2 = dword_140D05060;
LABEL_13:
    sub_1409B4AD0(v2);
    return 0;
  }
  if ( (int)sub_1408258B8((ULONG *)&dword_140D05140) < 0 )
  {
    sub_1409B4AD0(dword_140D05060);
    v2 = dword_140D05144;
    goto LABEL_13;
  }
  qword_140C1BE70 = 0LL;
  qword_140C1BE68 = (__int64)&qword_140C1BE60;
  qword_140C1BE60 = (__int64)&qword_140C1BE60;
  memset(v4, 0, 0x78uLL);
  BYTE2(v4[0]) |= 0x84u;
  LOWORD(v4[0]) = 120;
  HIDWORD(v4[1]) = 0x20000;
  v4[2] = 0x2000000020000LL;
  HIDWORD(v4[4]) = 1;
  v4[3] = 0xF0000000F0000LL;
  v4[9] = sub_1407F8AC0;
  if ( (int)ObCreateObjectType((const UNICODE_STRING *)L"$&", (__int64)v4, 0LL, (__int64)&PsSiloContextPagedType) >= 0 )
  {
    HIDWORD(v4[4]) = 512;
    if ( (int)ObCreateObjectType((const UNICODE_STRING *)L"*,", (__int64)v4, 0LL, (__int64)&PsSiloContextNonPagedType) < 0 )
    {
      v3 = PsSiloContextPagedType;
    }
    else
    {
      if ( (int)sub_1406E50B4(&qword_140D32A90) >= 0 )
        return 1;
      ObfDereferenceObjectWithTag(PsSiloContextPagedType, 0x746C6644u);
      v3 = PsSiloContextNonPagedType;
    }
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  }
  return 0;
}
