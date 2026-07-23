/*
 * XREFs of sub_14077AF18 @ 0x14077AF18
 * Callers:
 *     sub_14077A4D4 @ 0x14077A4D4 (sub_14077A4D4.c)
 *     sub_14077AA70 @ 0x14077AA70 (sub_14077AA70.c)
 * Callees:
 *     sub_1406D3020 @ 0x1406D3020 (sub_1406D3020.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     sub_14077B3D4 @ 0x14077B3D4 (sub_14077B3D4.c)
 */

__int64 __fastcall sub_14077AF18(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 v11; // rbp
  int v12; // edi
  int v13; // r14d
  int v14; // ebx
  __int64 v16; // rax
  int v17; // r9d
  PVOID v18; // rbx
  PVOID P[2]; // [rsp+40h] [rbp-28h] BYREF
  PVOID v20; // [rsp+80h] [rbp+18h] BYREF

  P[0] = 0LL;
  v20 = 0LL;
  v11 = a7;
  v12 = -1073741802;
  if ( a7 )
  {
    v13 = a8;
    v11 = -(__int64)(a8 != 0) & a7;
  }
  else
  {
    v13 = 0;
  }
  if ( a1 < 7 && !a4 )
  {
    v12 = sub_14077B0A4((unsigned int)a1, a2, P);
    if ( v12 >= 0 )
    {
      v14 = a5;
      if ( a1 != 3 || *(_DWORD *)(a5 + 16) != 2 )
        goto LABEL_7;
      v16 = *(_QWORD *)a5 - 0x48273F8A8C7ED206LL;
      if ( *(_QWORD *)a5 == 0x48273F8A8C7ED206LL )
        v16 = *(_QWORD *)(a5 + 8) - 0x6CFCAE1F9EAEABB3LL;
      if ( !v16 && (int)sub_1406D3020(3LL, a2, (ULONG_PTR)P[0], (__int64)&qword_140010AD8, &v20) >= 0 )
      {
        v17 = v14;
        v18 = v20;
        v12 = sub_14077B3D4(*((_DWORD *)v20 + 7), *((_QWORD *)v20 + 2), (_DWORD)v20, v17, a6, v11, v13, a9);
        sub_14077B394(v18);
      }
      else
      {
LABEL_7:
        v12 = sub_14077B3D4(a1, a2, P[0], v14, a6, v11, v13, a9);
      }
      sub_14077B394(P[0]);
    }
  }
  return (unsigned int)v12;
}
