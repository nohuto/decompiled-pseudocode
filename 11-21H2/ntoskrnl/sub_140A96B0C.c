/*
 * XREFs of sub_140A96B0C @ 0x140A96B0C
 * Callers:
 *     sub_140A7F778 @ 0x140A7F778 (sub_140A7F778.c)
 *     sub_140A8A310 @ 0x140A8A310 (sub_140A8A310.c)
 *     sub_140A8A380 @ 0x140A8A380 (sub_140A8A380.c)
 *     sub_140A8A3D0 @ 0x140A8A3D0 (sub_140A8A3D0.c)
 *     sub_140A8A6C0 @ 0x140A8A6C0 (sub_140A8A6C0.c)
 *     sub_140A8A770 @ 0x140A8A770 (sub_140A8A770.c)
 *     sub_140A96A2C @ 0x140A96A2C (sub_140A96A2C.c)
 *     sub_140A9F2C0 @ 0x140A9F2C0 (sub_140A9F2C0.c)
 *     sub_140A9F440 @ 0x140A9F440 (sub_140A9F440.c)
 *     sub_140A9F580 @ 0x140A9F580 (sub_140A9F580.c)
 *     sub_140A9F6A0 @ 0x140A9F6A0 (sub_140A9F6A0.c)
 *     sub_140A9F7A0 @ 0x140A9F7A0 (sub_140A9F7A0.c)
 *     sub_140A9F7F0 @ 0x140A9F7F0 (sub_140A9F7F0.c)
 *     sub_140A9F900 @ 0x140A9F900 (sub_140A9F900.c)
 *     sub_140A9F970 @ 0x140A9F970 (sub_140A9F970.c)
 *     sub_140A9FA80 @ 0x140A9FA80 (sub_140A9FA80.c)
 *     sub_140A9FBB0 @ 0x140A9FBB0 (sub_140A9FBB0.c)
 *     sub_140A9FE70 @ 0x140A9FE70 (sub_140A9FE70.c)
 *     sub_140AA00D0 @ 0x140AA00D0 (sub_140AA00D0.c)
 *     sub_140AA02D0 @ 0x140AA02D0 (sub_140AA02D0.c)
 *     sub_140AA03C0 @ 0x140AA03C0 (sub_140AA03C0.c)
 * Callees:
 *     sub_140A819C8 @ 0x140A819C8 (sub_140A819C8.c)
 *     sub_140A96C48 @ 0x140A96C48 (sub_140A96C48.c)
 *     sub_140A974B4 @ 0x140A974B4 (sub_140A974B4.c)
 *     sub_140A975C4 @ 0x140A975C4 (sub_140A975C4.c)
 */

__int64 __fastcall sub_140A96B0C(int a1)
{
  ULONG v3; // edi
  unsigned int v4; // esi

  if ( !dword_140D57600 )
  {
    ++dword_140D57818;
    return 0LL;
  }
  if ( dword_140D575FC )
  {
    ++dword_140D57844;
    return 0LL;
  }
  if ( (dword_140C29FC0 & 4) != 0 )
  {
    v3 = dword_140C0C83C;
    v4 = dword_140C0D8C0;
    if ( !dword_140C0C83C
      || dword_140C0C83C > (unsigned int)dword_140C0D8C0
      || !(unsigned int)sub_140A96C48()
      || !a1 && dword_140C1ACDC && !dword_140C1ACD8
      || !(unsigned int)sub_140A975C4() )
    {
      return 0LL;
    }
    if ( sub_140A819C8(0, v4) >= v3 )
    {
      ++dword_140D57834;
      if ( v3 != 600 || v4 != 10000 || (MEMORY[0xFFFFF78000000320] & 0x7FFFu) >= 0x400 )
        return 0LL;
      ++dword_140D57838;
    }
    else
    {
      ++dword_140D57830;
    }
    sub_140A974B4(a1 != 0 ? 3 : 1);
  }
  else
  {
    if ( dword_140C1B1E8 != 1 || !*((_BYTE *)KeGetCurrentThread() + 1390) )
      return 0LL;
    sub_140A974B4(a1 != 0 ? 3 : 1);
    ++dword_140D57820;
  }
  return 1LL;
}
