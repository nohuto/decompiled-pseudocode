/*
 * XREFs of sub_140B1DE58 @ 0x140B1DE58
 * Callers:
 *     sub_140B1DD34 @ 0x140B1DD34 (sub_140B1DD34.c)
 *     sub_140B4BE3C @ 0x140B4BE3C (sub_140B4BE3C.c)
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     MmAllocateMappingAddress @ 0x1407F9D30 (MmAllocateMappingAddress.c)
 */

__int64 __fastcall sub_140B1DE58(__int64 a1)
{
  __int64 v1; // rbx
  PVOID MappingAddress; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = sub_1403B1F04(a1, 48LL);
  if ( v1 )
  {
    MappingAddress = MmAllocateMappingAddress(0x200000uLL, 0x446C6148u);
    *(_QWORD *)(v1 + 16) = MappingAddress;
    if ( MappingAddress )
    {
      *(_DWORD *)(v1 + 24) = 0;
      result = v1;
      *(_DWORD *)(v1 + 28) = 0;
      *(_QWORD *)(v1 + 32) = 0LL;
      return result;
    }
    sub_1403B1B5C(v3, v1);
  }
  return 0LL;
}
