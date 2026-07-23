/*
 * XREFs of sub_140A95B80 @ 0x140A95B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 */

__int64 __fastcall sub_140A95B80(__int64 a1, __int64 a2)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ++dword_140C29FC8;
  if ( (dword_140C29FC0 & 0x1000) != 0 )
    sub_140A8B2AC(retaddr, 164LL);
  sub_14042A5E0(a1, a2);
  return sub_140A97900(a1, retaddr);
}
