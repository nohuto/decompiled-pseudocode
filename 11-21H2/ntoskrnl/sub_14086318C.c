/*
 * XREFs of sub_14086318C @ 0x14086318C
 * Callers:
 *     sub_140752ECC @ 0x140752ECC (sub_140752ECC.c)
 *     sub_1408630F0 @ 0x1408630F0 (sub_1408630F0.c)
 * Callees:
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 */

_BOOL8 sub_14086318C()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // rdx
  _BOOL8 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( byte_140C24513 && dword_140D3B0A0 )
  {
    v0 = 10000000LL * (unsigned int)dword_140D3B0A0;
    if ( MEMORY[0xFFFFF78000000008] - qword_140C24518 < v0 )
      v1 = MEMORY[0xFFFFF78000000008] - qword_140C24518 - v0;
    else
      v1 = -10000000LL;
    v3[1] = -1LL;
    v3[0] = 0LL;
    return KeSetTimer2((__int64)&unk_140C242C0, v1, 0LL, (__int64)v3);
  }
  return result;
}
