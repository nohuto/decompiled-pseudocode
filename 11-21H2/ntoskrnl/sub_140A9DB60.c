/*
 * XREFs of sub_140A9DB60 @ 0x140A9DB60
 * Callers:
 *     sub_140A9E0D0 @ 0x140A9E0D0 (sub_140A9E0D0.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1402DE820 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140601F88 @ 0x140601F88 (sub_140601F88.c)
 *     sub_140601FCC @ 0x140601FCC (sub_140601FCC.c)
 *     sub_140602068 @ 0x140602068 (sub_140602068.c)
 *     sub_14060207C @ 0x14060207C (sub_14060207C.c)
 *     sub_1406020E8 @ 0x1406020E8 (sub_1406020E8.c)
 */

unsigned __int64 sub_140A9DB60()
{
  PVOID v0; // rax
  unsigned __int64 result; // rax
  PVOID v2; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( (dword_140C1AA7C & 0x1000) != 0 )
    dword_140C1AA7C &= ~0x1000u;
  if ( dword_140D57580 )
  {
    byte_140C1A914 = 0;
    sub_140602068((__int64)&v3);
    sub_14060207C((__int64)&v3);
    sub_140601F88((__int64)&stru_140D58C80, (__int64)&v3);
    while ( 1 )
    {
      v0 = RtlEnumerateGenericTableAvl(&stru_140D58C80, 1u);
      if ( !v0 )
        break;
      RtlDeleteElementGenericTableAvl(&stru_140D58C80, v0);
    }
    dword_140D57580 = 0;
    dword_140D576B4 = 0;
    dword_140D576B0 = 0;
    sub_1406020E8((__int64)&stru_140D58C80, (__int64)&v3);
    sub_140601FCC((__int64)&v3);
    memset(&stru_140D58C80, 0, 0xC0uLL);
  }
  result = (unsigned int)dword_140D5757C;
  if ( dword_140D5757C )
  {
    sub_140602068((__int64)&v3);
    sub_14060207C((__int64)&v3);
    sub_140601F88((__int64)&stru_140D58BC0, (__int64)&v3);
    while ( 1 )
    {
      v2 = RtlEnumerateGenericTableAvl(&stru_140D58BC0, 1u);
      if ( !v2 )
        break;
      RtlDeleteElementGenericTableAvl(&stru_140D58BC0, v2);
    }
    dword_140C1A910 = 0;
    dword_140D5757C = 0;
    dword_140D576AC = 0;
    sub_1406020E8((__int64)&stru_140D58BC0, (__int64)&v3);
    sub_140601FCC((__int64)&v3);
    return (unsigned __int64)memset(&stru_140D58BC0, 0, 0xC0uLL);
  }
  return result;
}
