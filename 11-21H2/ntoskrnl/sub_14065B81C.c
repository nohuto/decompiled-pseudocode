/*
 * XREFs of sub_14065B81C @ 0x14065B81C
 * Callers:
 *     sub_14065B560 @ 0x14065B560 (sub_14065B560.c)
 *     sub_14065B6A0 @ 0x14065B6A0 (sub_14065B6A0.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     sub_14065B900 @ 0x14065B900 (sub_14065B900.c)
 *     sub_14065BC50 @ 0x14065BC50 (sub_14065BC50.c)
 *     sub_14065BD24 @ 0x14065BD24 (sub_14065BD24.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_1406D2154 @ 0x1406D2154 (sub_1406D2154.c)
 *     sub_140718B68 @ 0x140718B68 (sub_140718B68.c)
 *     sub_14071BC04 @ 0x14071BC04 (sub_14071BC04.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_1407C063C @ 0x1407C063C (sub_1407C063C.c)
 *     sub_14091514C @ 0x14091514C (sub_14091514C.c)
 */

__int64 __fastcall sub_14065B81C(__int64 a1)
{
  unsigned int v2; // edi
  __int16 v3; // cx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r9
  __int16 v10; // dx
  __int64 v11; // rax
  __int16 v12; // dx
  bool v13; // zf
  int v14; // r12d
  unsigned int v15; // ebp
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  _OWORD v19[2]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = *(_WORD *)a1;
  v19[0] = 0LL;
  if ( v3 < 0 )
  {
    return (unsigned int)-2147483622;
  }
  else
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 + 96) + 408LL * v3;
      if ( !*(_BYTE *)v4 )
      {
        sub_14065BD24(v4 + 56, *(_QWORD *)(v4 + 16), 0LL);
        *(_BYTE *)v4 = 1;
      }
      if ( (unsigned int)sub_14065B900(v4 + 56) != -2147483622 )
        break;
      sub_14065BC50(v4 + 56);
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_BYTE *)v4 = 0;
      v3 = *(_WORD *)a1 - 1;
      *(_WORD *)a1 = v3;
      if ( v3 < 0 )
        return (unsigned int)-2147483622;
    }
    v5 = *(_QWORD *)(v4 + 8);
    if ( v5 )
    {
      v8 = sub_140721CE0(v5, *(unsigned __int16 *)(a1 + 2));
      v9 = 0LL;
      if ( v10 >= 0 )
      {
        while ( 1 )
        {
          v11 = sub_14069F1CC(v4 + 64);
          if ( *(_QWORD *)(v11 + 16) )
            break;
          if ( (__int16)(v12 - 1) < 0 )
            goto LABEL_18;
        }
        v9 = *(_QWORD *)(v11 + 16);
      }
LABEL_18:
      v13 = (*(_BYTE *)(v9 + 2) & 0x20) == 0;
      v14 = v9 + 76;
      v15 = *(unsigned __int16 *)(v9 + 72);
      *((_QWORD *)&v19[0] + 1) = v9 + 76;
      LOWORD(v19[0]) = v15;
      WORD1(v19[0]) = v15;
      if ( v13 )
      {
        v17 = sub_140718B68(v19);
        v6 = sub_1406D2154(*(_QWORD *)(v8 + 32), (unsigned int)(v17 + 37 * *(_DWORD *)(v8 + 16)), v8, v19);
      }
      else
      {
        v16 = sub_14071BC04(v9 + 76, v15);
        v6 = sub_14091514C(*(_QWORD *)(v8 + 32), v16 + 37 * *(_DWORD *)(v8 + 16), v8, v14, v15);
      }
    }
    else
    {
      v6 = 0LL;
    }
    *(_QWORD *)(v4 + 424) = v4 + 64;
    if ( v6 )
    {
      sub_1407C063C(v4 + 24, v6);
      *(_QWORD *)(v4 + 416) = v18;
    }
    ++*(_WORD *)a1;
  }
  return v2;
}
