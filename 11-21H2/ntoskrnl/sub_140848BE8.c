/*
 * XREFs of sub_140848BE8 @ 0x140848BE8
 * Callers:
 *     sub_140225D70 @ 0x140225D70 (sub_140225D70.c)
 *     sub_1403DC9D4 @ 0x1403DC9D4 (sub_1403DC9D4.c)
 *     sub_1405D90F0 @ 0x1405D90F0 (sub_1405D90F0.c)
 *     sub_14083113C @ 0x14083113C (sub_14083113C.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_140849690 @ 0x140849690 (sub_140849690.c)
 *     sub_140863A40 @ 0x140863A40 (sub_140863A40.c)
 *     sub_140864980 @ 0x140864980 (sub_140864980.c)
 *     sub_14098EE60 @ 0x14098EE60 (sub_14098EE60.c)
 *     sub_14099D66C @ 0x14099D66C (sub_14099D66C.c)
 * Callees:
 *     sub_140849940 @ 0x140849940 (sub_140849940.c)
 */

__int64 __fastcall sub_140848BE8(char a1)
{
  int v1; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
    v1 = 2048;
  else
    v1 = 4096;
  v3 = v1;
  return sub_140849940(&v3);
}
