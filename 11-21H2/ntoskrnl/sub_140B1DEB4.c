/*
 * XREFs of sub_140B1DEB4 @ 0x140B1DEB4
 * Callers:
 *     sub_140B1D878 @ 0x140B1D878 (sub_140B1D878.c)
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     MmAllocateMappingAddress @ 0x1407F9D30 (MmAllocateMappingAddress.c)
 *     MmFreeMappingAddress @ 0x1407FA560 (MmFreeMappingAddress.c)
 */

__int64 __fastcall sub_140B1DEB4(__int64 a1)
{
  __int64 v1; // rcx
  PMDL v2; // rcx
  PMDL v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // rcx
  PMDL v8; // rdx

  qword_140C5A848 = (PMDL)sub_1403B1F04(a1, 56LL);
  if ( !qword_140C5A848 )
    return 3221225626LL;
  qword_140C5A838 = (PMDL)sub_1403B1F04(v1, 56LL);
  v2 = qword_140C5A838;
  if ( !qword_140C5A838 )
  {
    v8 = qword_140C5A848;
LABEL_10:
    sub_1403B1B5C((__int64)v2, (__int64)v8);
    return 3221225626LL;
  }
  v3 = qword_140C5A848;
  *(_DWORD *)&qword_140C5A848->Size = 56;
  v3->Next = 0LL;
  v3->StartVa = 0LL;
  *(_QWORD *)&v3->ByteCount = 4096LL;
  *(_DWORD *)&v2->Size = 56;
  v2->Next = 0LL;
  v2->StartVa = 0LL;
  *(_QWORD *)&v2->ByteCount = 4096LL;
  v3->MdlFlags |= 2u;
  v2->MdlFlags |= 2u;
  MappingAddress = MmAllocateMappingAddress(0x1000uLL, 0x446C6148u);
  if ( !MappingAddress )
  {
    sub_1403B1B5C(v4, (__int64)qword_140C5A848);
    v8 = qword_140C5A838;
    goto LABEL_10;
  }
  qword_140C5A850 = MmAllocateMappingAddress(0x1000uLL, 0x446C6148u);
  if ( qword_140C5A850 )
  {
    qword_140CFCED8 = 0LL;
    return 0LL;
  }
  sub_1403B1B5C(v5, (__int64)qword_140C5A848);
  sub_1403B1B5C(v7, (__int64)qword_140C5A838);
  MmFreeMappingAddress(MappingAddress, 0x446C6148u);
  return 3221225626LL;
}
