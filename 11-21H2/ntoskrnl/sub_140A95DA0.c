/*
 * XREFs of sub_140A95DA0 @ 0x140A95DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A7F778 @ 0x140A7F778 (sub_140A7F778.c)
 */

__int64 __fastcall sub_140A95DA0(char a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( sub_140A7F778(a2) )
    return 257LL;
  LOBYTE(v4) = a2;
  LOBYTE(v5) = a1;
  return sub_14042A5E0(v5, v4);
}
