/*
 * XREFs of sub_1402D2478 @ 0x1402D2478
 * Callers:
 *     sub_140749C4C @ 0x140749C4C (sub_140749C4C.c)
 * Callees:
 *     sub_1402D2238 @ 0x1402D2238 (sub_1402D2238.c)
 *     sub_1402D2F74 @ 0x1402D2F74 (sub_1402D2F74.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402D2478(__int64 a1, int a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rdi
  int v7; // r8d
  _QWORD v9[9]; // [rsp+30h] [rbp-58h] BYREF

  v5 = a1;
  if ( a1 )
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v6 = 0LL;
  sub_1402D2238(v6, 1);
  *(_DWORD *)(v6 + 156) = 1;
  memset(v9, 0, sizeof(v9));
  v9[1] = *(_QWORD *)(v6 + 416);
  v9[2] = *(_QWORD *)(v6 + 424);
  LOWORD(v9[0]) = 27;
  return sub_1402D2F74(v5, (unsigned int)v9, v7, a2, a3);
}
