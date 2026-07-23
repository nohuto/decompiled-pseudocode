/*
 * XREFs of sub_14080C354 @ 0x14080C354
 * Callers:
 *     sub_1406EB4B0 @ 0x1406EB4B0 (sub_1406EB4B0.c)
 *     sub_14076146C @ 0x14076146C (sub_14076146C.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140581D58 @ 0x140581D58 (sub_140581D58.c)
 *     sub_14080C400 @ 0x14080C400 (sub_14080C400.c)
 *     sub_14080C468 @ 0x14080C468 (sub_14080C468.c)
 *     sub_1409682E4 @ 0x1409682E4 (sub_1409682E4.c)
 */

__int64 __fastcall sub_14080C354(__int64 a1)
{
  unsigned int v2; // edx
  int v3; // ecx
  int v4; // ecx
  unsigned int v5; // esi
  int v6; // ebx
  __int64 v8; // rax
  _QWORD v9[14]; // [rsp+30h] [rbp-78h] BYREF

  memset(v9, 0, 0x68uLL);
  v2 = *(_DWORD *)(a1 + 64);
  v3 = *(_DWORD *)(a1 + 196);
  v9[0] = a1;
  v4 = v3 & 0x40;
  LODWORD(v9[3]) = (v2 >> 12) + ((v2 & 0xFFF) != 0);
  v5 = v4 != 0 ? 2 : 0;
  if ( !v4
    || ((unsigned int)sub_14027B080(*(_QWORD *)(a1 + 48)) != 1
      ? (v8 = (__int64)sub_14026DFC0(1))
      : (v8 = sub_14027B520()),
        (v6 = sub_1409682E4(v9, v8), v6 >= 0)
     && (v6 = sub_140581D58((__int64)v9, 0, LODWORD(v9[3]) - 1, 7, 0LL), v6 >= 0)) )
  {
    v6 = sub_14080C468(*(_QWORD *)(a1 + 112), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), v5);
    if ( v6 >= 0 )
      v6 = 0;
  }
  sub_14080C400(v9);
  return (unsigned int)v6;
}
