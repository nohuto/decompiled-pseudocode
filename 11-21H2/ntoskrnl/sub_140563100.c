/*
 * XREFs of sub_140563100 @ 0x140563100
 * Callers:
 *     sub_140563158 @ 0x140563158 (sub_140563158.c)
 *     sub_14056322C @ 0x14056322C (sub_14056322C.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_140A68338 @ 0x140A68338 (sub_140A68338.c)
 */

__int64 __fastcall sub_140563100(__int64 a1, unsigned int a2)
{
  char *v2; // rdi
  unsigned __int64 v3; // rsi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v5; // r8
  __int64 result; // rax

  v2 = (char *)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v3 = a1 + a2;
  while ( (unsigned __int64)v2 < v3 )
  {
    PhysicalAddress = MmGetPhysicalAddress(v2);
    LOBYTE(v5) = 1;
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_140A68338)(
               (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
               4096LL,
               v5);
    if ( (int)result < 0 )
      return result;
    v2 += 4096;
  }
  return 0LL;
}
