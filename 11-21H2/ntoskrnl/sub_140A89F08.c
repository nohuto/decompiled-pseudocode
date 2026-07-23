/*
 * XREFs of sub_140A89F08 @ 0x140A89F08
 * Callers:
 *     sub_140A7C224 @ 0x140A7C224 (sub_140A7C224.c)
 *     sub_140A81780 @ 0x140A81780 (sub_140A81780.c)
 *     sub_140A9A468 @ 0x140A9A468 (sub_140A9A468.c)
 *     sub_140A9A8F8 @ 0x140A9A8F8 (sub_140A9A8F8.c)
 *     sub_140A9ACE0 @ 0x140A9ACE0 (sub_140A9ACE0.c)
 *     sub_140A9AEC0 @ 0x140A9AEC0 (sub_140A9AEC0.c)
 *     sub_140B536A4 @ 0x140B536A4 (sub_140B536A4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A89F08(int a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v4[20]; // [rsp+28h] [rbp-28h]
  __int64 v5; // [rsp+3Ch] [rbp-14h]

  result = 0LL;
  v3[1] = 0;
  v5 = 0LL;
  *(_OWORD *)&v4[4] = 0LL;
  if ( qword_140D57668 )
  {
    if ( a1 )
    {
      result = (unsigned int)(a1 - 1);
      if ( (unsigned int)result > 1 )
        return result;
      v3[0] = a1;
      *(_QWORD *)v4 = a2 + 88;
      *(_QWORD *)&v4[8] = *(_QWORD *)(a2 + 48);
      *(_DWORD *)&v4[16] = *(_DWORD *)(a2 + 64);
      LODWORD(v5) = *(_DWORD *)(a2 + 156);
      HIDWORD(v5) = *(_DWORD *)(a2 + 120);
    }
    else
    {
      v3[0] = 0;
      *(_DWORD *)v4 = a2;
    }
    return sub_14042A5E0(v3, a2);
  }
  return result;
}
