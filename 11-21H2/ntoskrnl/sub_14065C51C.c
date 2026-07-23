/*
 * XREFs of sub_14065C51C @ 0x14065C51C
 * Callers:
 *     sub_14065B994 @ 0x14065B994 (sub_14065B994.c)
 *     sub_14065BB1C @ 0x14065BB1C (sub_14065BB1C.c)
 *     sub_14065BDD8 @ 0x14065BDD8 (sub_14065BDD8.c)
 *     sub_140916E20 @ 0x140916E20 (sub_140916E20.c)
 * Callees:
 *     sub_14065C57C @ 0x14065C57C (sub_14065C57C.c)
 *     sub_140717780 @ 0x140717780 (sub_140717780.c)
 *     sub_1407C45A0 @ 0x1407C45A0 (sub_1407C45A0.c)
 */

__int64 __fastcall sub_14065C51C(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int16 v3; // r9
  bool v4; // zf
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v8; // r8
  __int128 v9; // [rsp+20h] [rbp-20h] BYREF
  __int128 v10; // [rsp+30h] [rbp-10h] BYREF

  v2 = a2 + 76;
  v3 = *(_WORD *)(a2 + 2) & 0x20;
  v4 = (*(_BYTE *)(a1 + 2) & 0x20) == 0;
  v10 = 0LL;
  v9 = 0LL;
  if ( v4 )
  {
    *((_QWORD *)&v10 + 1) = a1 + 76;
    if ( v3 )
    {
      v8 = *(unsigned __int16 *)(a2 + 72);
      LOWORD(v10) = *(_WORD *)(a1 + 72);
      WORD1(v10) = v10;
      return ((__int64 (__fastcall *)(__int128 *, __int64, __int64, _QWORD, _QWORD, _QWORD))sub_1407C45A0)(
               &v10,
               a2 + 76,
               v8,
               0LL,
               v9,
               *((_QWORD *)&v9 + 1));
    }
    else
    {
      LOWORD(v9) = *(_WORD *)(a2 + 72);
      WORD1(v9) = v9;
      LOWORD(v10) = *(_WORD *)(a1 + 72);
      WORD1(v10) = v10;
      *((_QWORD *)&v9 + 1) = a2 + 76;
      return sub_140717780(&v10, &v9, 0LL);
    }
  }
  else
  {
    v5 = *(unsigned __int16 *)(a2 + 72);
    v6 = *(unsigned __int16 *)(a1 + 72);
    if ( v3 )
    {
      return sub_14065C57C(a1 + 76, v6, v2, v5, v9, *((_QWORD *)&v9 + 1), v10, *((_QWORD *)&v10 + 1));
    }
    else
    {
      *((_QWORD *)&v9 + 1) = v2;
      LOWORD(v9) = v5;
      WORD1(v9) = v5;
      return (unsigned int)-((__int64 (__fastcall *)(__int128 *, __int64, _QWORD, _QWORD))sub_1407C45A0)(
                              &v9,
                              a1 + 76,
                              (unsigned int)v6,
                              0LL);
    }
  }
}
