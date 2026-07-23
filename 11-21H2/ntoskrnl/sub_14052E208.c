/*
 * XREFs of sub_14052E208 @ 0x14052E208
 * Callers:
 *     sub_14052FEA0 @ 0x14052FEA0 (sub_14052FEA0.c)
 *     sub_140A63CE0 @ 0x140A63CE0 (sub_140A63CE0.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall sub_14052E208(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 *a6)
{
  __int64 result; // rax
  void *v9; // rcx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  LONGLONG v11; // rcx
  unsigned int v12; // edx
  LONGLONG v13; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  a6[1] = 0LL;
  a6[2] = 0LL;
  a6[3] = 0LL;
  *a6 = 0LL;
  if ( a2 )
  {
    v9 = *(void **)(a2 + 48);
    *a6 = 1LL;
    PhysicalAddress = MmGetPhysicalAddress(v9);
    v11 = PhysicalAddress.QuadPart ^ (LOWORD(PhysicalAddress.LowPart) ^ (unsigned __int16)*a6) & 0xFFF;
    result = (*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF;
    if ( (unsigned int)result < 0x200 )
      result = 512LL;
    a6[1] &= 0xFFFFFFFFFFF00000uLL;
    _BitScanReverse(&v12, result);
    v13 = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(((_WORD)v12 + 1) << 9)) & 0xE00;
    *a6 = v13;
    if ( a3 )
      *a6 = v13 | 4;
  }
  return result;
}
