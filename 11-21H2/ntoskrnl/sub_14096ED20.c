/*
 * XREFs of sub_14096ED20 @ 0x14096ED20
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403D83A0 (KeAllocateProcessorProfileStructures.c)
 *     sub_1403DEDD0 @ 0x1403DEDD0 (sub_1403DEDD0.c)
 *     sub_14054B14C @ 0x14054B14C (sub_14054B14C.c)
 *     sub_14063A6C0 @ 0x14063A6C0 (sub_14063A6C0.c)
 *     sub_1406D16F8 @ 0x1406D16F8 (sub_1406D16F8.c)
 *     sub_140931100 @ 0x140931100 (sub_140931100.c)
 *     sub_14093C2FC @ 0x14093C2FC (sub_14093C2FC.c)
 *     sub_14093CFC8 @ 0x14093CFC8 (sub_14093CFC8.c)
 *     sub_14093D590 @ 0x14093D590 (sub_14093D590.c)
 *     sub_14093DA18 @ 0x14093DA18 (sub_14093DA18.c)
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_1409783E8 @ 0x1409783E8 (sub_1409783E8.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_140228AA0 @ 0x140228AA0 (sub_140228AA0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

void __fastcall sub_14096ED20(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // r13
  __int64 v5; // r14
  __int64 v6; // r12
  BOOL v7; // r15d
  _OWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-10h]
  __int64 v11; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int64 v12; // [rsp+B0h] [rbp+50h]
  _QWORD *v13; // [rsp+B8h] [rbp+58h]

  v10 = 0LL;
  v2 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v12 = v2;
  v8[0] = v2;
  v9 = v2;
  v8[1] = 0LL;
  v3 = (_QWORD *)sub_140313C70(a1);
  v13 = v3;
  v4 = &v3[v2];
  do
  {
    v11 = sub_140317A10((unsigned __int64)v3);
    v5 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v6 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v7 = 0;
    if ( sub_140317A80((unsigned __int64)v3) )
      v7 = sub_140229550() != 0;
    *v3 = 0LL;
    if ( v7 )
      sub_1402294F0((__int64)v3, 0LL);
    if ( sub_140277C50(v5) )
    {
      --*(_QWORD *)&v8[0];
      *(_QWORD *)&v9 = v9 - 1;
      sub_140228660(v5, 1);
    }
    else if ( (unsigned int)sub_140228660(v5, 1) == 3 )
    {
      ++*((_QWORD *)&v8[0] + 1);
    }
    sub_140228660(v6, 0);
    ++v3;
  }
  while ( v3 < v4 );
  sub_1402BB6D0((__int64)&qword_140C534C0, v13, v12);
  sub_140228AA0((unsigned __int64 *)v8, 1, 0);
}
