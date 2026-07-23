/*
 * XREFs of sub_140574558 @ 0x140574558
 * Callers:
 *     sub_14045AFC6 @ 0x14045AFC6 (sub_14045AFC6.c)
 * Callees:
 *     sub_14056AAA4 @ 0x14056AAA4 (sub_14056AAA4.c)
 *     sub_1405740C4 @ 0x1405740C4 (sub_1405740C4.c)
 */

__int64 __fastcall sub_140574558(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rdx
  int v12; // ebx
  int v13; // edx
  char v14; // cl
  unsigned __int64 v15; // rax

  if ( !a4 )
    return 0LL;
  v9 = sub_1405740C4(a2, (_QWORD *)a3, a4, a5, a6);
  if ( (dword_140D069C8 & 1) != 0 )
    v10 = (dword_140D069C8 & 4) == 0;
  else
    v10 = (((dword_140D05058 & 0x10) != 0) & _bittest(&dword_140D068EC, 0xCu)) == 0;
  if ( v10 )
  {
    v14 = *(_BYTE *)(a3 + 209);
    _BitScanForward64(&v15, __ROR8__(v9, v14));
    v13 = dword_140D105E0[64 * *(unsigned __int8 *)(a3 + 208) + (((unsigned __int8)v15 + v14) & 0x3F)];
  }
  else
  {
    v11 = *(unsigned __int8 *)(a3 + 209);
    v12 = *(unsigned __int8 *)(a3 + 208);
    v13 = dword_140D105E0[64 * v12 + (unsigned int)sub_14056AAA4(v9, (*(_QWORD *)(a1 + 72) >> dword_140D06D54) + v11)];
  }
  return qword_140D088C0[v13];
}
