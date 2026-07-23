/*
 * XREFs of sub_140A96220 @ 0x140A96220
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 *     sub_140A96894 @ 0x140A96894 (sub_140A96894.c)
 */

__int64 __fastcall sub_140A96220(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140C29FCC;
  v4 = retaddr;
  if ( (dword_140C29FC0 & 0x1000) != 0 )
    sub_140A8B2AC(retaddr, 168LL);
  LOBYTE(v4) = *(_BYTE *)(a1 + 93);
  sub_140A96894(v4);
  return sub_14042A5E0(a1, a2);
}
