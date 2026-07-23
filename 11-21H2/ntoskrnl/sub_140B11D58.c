/*
 * XREFs of sub_140B11D58 @ 0x140B11D58
 * Callers:
 *     sub_140B0EFD8 @ 0x140B0EFD8 (sub_140B0EFD8.c)
 *     sub_140B10D98 @ 0x140B10D98 (sub_140B10D98.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 *     sub_140B127A0 @ 0x140B127A0 (sub_140B127A0.c)
 * Callees:
 *     sub_1402D1EB4 @ 0x1402D1EB4 (sub_1402D1EB4.c)
 *     sub_1402D2774 @ 0x1402D2774 (sub_1402D2774.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A7BE34 @ 0x140A7BE34 (sub_140A7BE34.c)
 *     sub_140A7C528 @ 0x140A7C528 (sub_140A7C528.c)
 *     sub_140B11EBC @ 0x140B11EBC (sub_140B11EBC.c)
 *     sub_140B1236C @ 0x140B1236C (sub_140B1236C.c)
 *     sub_140B123CC @ 0x140B123CC (sub_140B123CC.c)
 */

__int64 __fastcall sub_140B11D58(
        unsigned __int16 *a1,
        __int128 *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int128 v20; // xmm0
  int v21; // esi
  int v22; // ebx
  _QWORD v24[14]; // [rsp+38h] [rbp-51h] BYREF

  memset(v24, 0, 0x68uLL);
  v14 = 0LL;
  a8 = 0;
  if ( a7 )
  {
    if ( a4 )
    {
      v15 = *(_OWORD *)(a4 + 72);
      v16 = *(_OWORD *)(a4 + 176);
      HIDWORD(v24[0]) = *(_DWORD *)(a4 + 224) & 1;
      LODWORD(v24[11]) = *(_DWORD *)(a4 + 208);
      LODWORD(v24[12]) = *(_DWORD *)(a4 + 216);
      v24[9] = *(_QWORD *)(a4 + 192);
      v17 = *(_DWORD *)(a4 + 212);
      *(_OWORD *)&v24[1] = v15;
      HIDWORD(v24[11]) = v17;
      v18 = *a2;
      HIDWORD(v24[12]) = *(_DWORD *)(a4 + 220);
      v19 = *(_QWORD *)(a4 + 200);
      *(_OWORD *)&v24[3] = v18;
      v24[10] = v19;
      v20 = *(_OWORD *)(a4 + 160);
      *(_OWORD *)&v24[7] = v16;
      *(_OWORD *)&v24[5] = v20;
    }
    else
    {
      *(_OWORD *)&v24[1] = *(_OWORD *)a1;
    }
    sub_140B123CC(v24, &a8);
    v14 = a8;
  }
  LOBYTE(v13) = 1;
  if ( (unsigned __int8)sub_140B1236C(v14, v13) || !a7 )
  {
    v21 = sub_140A7BE34();
    sub_1402D2774(&stru_140011FB8, a1);
    v22 = sub_140B11EBC((_DWORD)a1, (_DWORD)a2, a3, a4, a6, a9);
    sub_1402D1EB4(&stru_140011FA8, a1, v22);
    if ( v22 >= 0 )
      sub_140A7C528(v21, a5);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v22;
}
