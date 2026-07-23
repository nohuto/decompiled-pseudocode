/*
 * XREFs of sub_140963CD0 @ 0x140963CD0
 * Callers:
 *     sub_1407ED53C @ 0x1407ED53C (sub_1407ED53C.c)
 * Callees:
 *     sub_14075B988 @ 0x14075B988 (sub_14075B988.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_14079422C @ 0x14079422C (sub_14079422C.c)
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 *     sub_140842904 @ 0x140842904 (sub_140842904.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 */

__int64 __fastcall sub_140963CD0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // r14
  unsigned int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rbx
  unsigned int v17; // eax
  unsigned int v18; // ebp
  __int64 v19; // r15

  v4 = a2;
  v6 = -1073741823;
  if ( !(_DWORD)a2 )
    return v6;
  v7 = sub_140792CCC(a1, a2, 24577);
  if ( !v7 )
    return v6;
  v8 = sub_140842A24(a1, v7);
  if ( !v8 )
    return v6;
  v9 = sub_140792CCC(a1, v4, 16408);
  if ( !v9 )
    return v6;
  v10 = sub_1407ECF5C(a1, v9, 0);
  switch ( v10 )
  {
    case 1:
      v11 = sub_140792CCC(a1, v4, 24606);
      v12 = sub_140842A24(a1, v11);
      if ( v12 )
      {
        *(_QWORD *)a3 = v8;
        v13 = -1LL;
        *(_DWORD *)(a3 + 8) = 1;
        do
          ++v13;
        while ( *(_WORD *)(v12 + 2 * v13) );
        v14 = 2 * v13 + 2;
        *(_QWORD *)(a3 + 16) = v12;
        goto LABEL_18;
      }
      return v6;
    case 4:
      v15 = sub_140792CCC(a1, v4, 16409);
      *(_QWORD *)a3 = v8;
      *(_DWORD *)(a3 + 8) = 4;
      *(_DWORD *)(a3 + 12) = 4;
      v16 = a3 + 24;
      *(_DWORD *)(a3 + 24) = sub_1407ECF5C(a1, v15, 0);
LABEL_14:
      *(_QWORD *)(a3 + 16) = v16;
      return 0;
    case 11:
      v17 = sub_140792CCC(a1, v4, 20487);
      *(_QWORD *)a3 = v8;
      *(_DWORD *)(a3 + 8) = 11;
      *(_DWORD *)(a3 + 12) = 8;
      v16 = a3 + 32;
      *(_QWORD *)(a3 + 32) = sub_140842904(a1, v17, 0LL);
      goto LABEL_14;
  }
  if ( v10 != 3 )
    return (unsigned int)-1073741811;
  v18 = sub_140792CCC(a1, v4, 36869);
  v19 = sub_14075B988(a1, v18);
  if ( v19 )
  {
    *(_QWORD *)a3 = v8;
    *(_DWORD *)(a3 + 8) = 3;
    v14 = sub_14079422C(a1, v18);
    *(_QWORD *)(a3 + 16) = v19;
LABEL_18:
    *(_DWORD *)(a3 + 12) = v14;
    return 0;
  }
  return v6;
}
