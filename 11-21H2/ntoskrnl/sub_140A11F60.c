/*
 * XREFs of sub_140A11F60 @ 0x140A11F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 *     sub_140842904 @ 0x140842904 (sub_140842904.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     sub_140842D54 @ 0x140842D54 (sub_140842D54.c)
 *     sub_140851068 @ 0x140851068 (sub_140851068.c)
 *     sub_140A1467C @ 0x140A1467C (sub_140A1467C.c)
 *     sub_140A146C0 @ 0x140A146C0 (sub_140A146C0.c)
 */

__int64 __fastcall sub_140A11F60(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v6; // ebx
  int v9; // ebp
  unsigned __int64 v10; // rsi
  unsigned __int64 *v11; // r13
  unsigned int v12; // r10d
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int16 v18; // ax
  __int16 *v19; // rax
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // ecx

  v6 = 0;
  v9 = 1;
  v10 = 0LL;
  v11 = *(unsigned __int64 **)(a6 + 88);
  *a1 = 0;
  while ( 1 )
  {
    v12 = sub_140792CCC(*(_QWORD *)(a2 + 8), a5, *(_WORD *)((char *)&unk_140C0DAA8 + v10));
    if ( v12 )
      break;
LABEL_33:
    v10 += 4LL;
    if ( v10 >= 0x28 )
    {
      *a1 = v9;
      return 1;
    }
  }
  v13 = v11[2];
  v14 = 0LL;
  if ( v13 )
  {
    do
    {
      v15 = 0LL;
      if ( v14 < v13 )
      {
        v16 = v11[1] * v14;
        if ( !is_mul_ok(v11[1], v14) || (v17 = v11[5], v15 = v17 + v16, v17 + v16 < v17) )
          v15 = 0LL;
      }
      if ( *(_WORD *)v15 == *(_WORD *)((char *)&unk_140C0DAA8 + v10 + 2) )
        break;
      ++v14;
      v15 = 0LL;
    }
    while ( v14 < v13 );
    if ( v15 )
    {
      v18 = *(_WORD *)((char *)&unk_140C0DAA8 + v10);
      if ( v18 == 16453 )
      {
        v24 = sub_1407ECF5C(*(_QWORD *)(a2 + 8), v12, 0xFFFFFFFF);
        if ( v24 == -1 )
          return v6;
        v20 = v24 == *(_DWORD *)(v15 + 8);
        goto LABEL_30;
      }
      if ( v18 != 20500 )
      {
        if ( v18 == 20501 )
          goto LABEL_24;
        if ( v18 == 20502 )
        {
LABEL_22:
          v21 = sub_140842904(*(_QWORD *)(a2 + 8), v12, -1LL);
          if ( v21 == -1LL )
            return v6;
          v20 = sub_140842D54(v21, *(_QWORD *)(v15 + 8));
LABEL_30:
          if ( !v9 || (v9 = 1, !v20) )
            v9 = 0;
          goto LABEL_33;
        }
        if ( v18 != 20503 )
        {
          if ( v18 != 20504 )
          {
            if ( v18 != 20505 )
            {
              if ( v18 <= 0x6028u )
                return v6;
              if ( v18 > 0x602Bu )
                return v6;
              v19 = (__int16 *)sub_140842A24(*(_QWORD *)(a2 + 8), v12);
              if ( !v19 )
                return v6;
              v20 = sub_140851068(v19, *(_WORD **)(v15 + 8));
              goto LABEL_30;
            }
            goto LABEL_22;
          }
LABEL_24:
          v22 = sub_140842904(*(_QWORD *)(a2 + 8), v12, -1LL);
          if ( v22 == -1 )
            return v6;
          v20 = sub_140A1467C(v22, *(_QWORD *)(v15 + 8));
          goto LABEL_30;
        }
      }
      v23 = sub_140842904(*(_QWORD *)(a2 + 8), v12, -1LL);
      if ( v23 == -1 )
        return v6;
      v20 = sub_140A146C0(v23, *(_QWORD *)(v15 + 8));
      goto LABEL_30;
    }
  }
  sub_1406E0C3C(1LL, (__int64)"SdbpCheckPackageAttributes");
  return v6;
}
