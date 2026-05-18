/*
 * XREFs of sub_1800883E0 @ 0x1800883E0
 * Callers:
 *     sub_180044798 @ 0x180044798 (sub_180044798.c)
 *     sub_18005A1F0 @ 0x18005A1F0 (sub_18005A1F0.c)
 *     sub_180086BE0 @ 0x180086BE0 (sub_180086BE0.c)
 *     sub_180087CA0 @ 0x180087CA0 (sub_180087CA0.c)
 *     sub_180098B8C @ 0x180098B8C (sub_180098B8C.c)
 *     sub_180099DE8 @ 0x180099DE8 (sub_180099DE8.c)
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029630 @ 0x180029630 (sub_180029630.c)
 *     sub_180029664 @ 0x180029664 (sub_180029664.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_180043BCC @ 0x180043BCC (sub_180043BCC.c)
 *     sub_18008810C @ 0x18008810C (sub_18008810C.c)
 *     sub_180088290 @ 0x180088290 (sub_180088290.c)
 *     sub_180088600 @ 0x180088600 (sub_180088600.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800883E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // r15
  __int64 v7; // rcx
  char result; // al
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 *v14; // rax
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm4
  __int64 v18; // xmm0_8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rax
  int v23; // r8d
  __int64 v24; // rcx
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // [rsp+20h] [rbp-30h] BYREF
  __int64 v29; // [rsp+28h] [rbp-28h]
  __int64 v30; // [rsp+30h] [rbp-20h] BYREF
  __int64 v31; // [rsp+38h] [rbp-18h]

  v6 = (__int64 *)(a1 + 112);
  v7 = *(_QWORD *)(a1 + 112);
  if ( v7 )
  {
    result = sub_180043BCC(v7, a2);
    if ( result )
      return result;
    v9 = sub_180029630(a1);
    sub_18003655C(v9, &v30);
    v10 = 0;
    v11 = v30;
    if ( (v31 - v30) >> 4 )
    {
      v12 = 0LL;
      do
      {
        sub_18001246C(&v28, (_QWORD *)(v11 + 16 * v12));
        v13 = sub_180026650(v28);
        sub_180088600(a1, v13);
        if ( v29 )
          sub_180010530(v29);
        ++v10;
        v11 = v30;
        v12 = v10;
      }
      while ( v10 < (unsigned __int64)((v31 - v30) >> 4) );
    }
    sub_180013300((__int64)&v30);
  }
  else
  {
    v14 = sub_18008810C(&v28);
    sub_180011020(v6, v14);
    if ( v29 )
      sub_180010530(v29);
  }
  v15 = *(_OWORD *)(a2 + 16);
  v16 = *(_OWORD *)(a2 + 32);
  v17 = *(_OWORD *)(a2 + 48);
  v18 = *(_QWORD *)(a2 + 64);
  v19 = *v6;
  *(_OWORD *)v19 = *(_OWORD *)a2;
  *(_OWORD *)(v19 + 16) = v15;
  *(_OWORD *)(v19 + 32) = v16;
  *(_OWORD *)(v19 + 48) = v17;
  *(_QWORD *)(v19 + 64) = v18;
  if ( a3 )
    sub_180029870(a1, 1, 1);
  result = sub_180029664(a1, 1);
  if ( result )
  {
    v21 = sub_180029630(v20);
    if ( a3 )
    {
      v22 = (__int64 *)sub_180011D4C(a3 + 8, &v28);
      sub_180088290(a1, v22);
      if ( v29 )
        sub_180010530(v29);
      sub_180029870(a1, 2, 0);
      return sub_180029870(v24, v23 + 4, v23);
    }
    else
    {
      sub_18003655C(v21, &v30);
      v25 = 0;
      v26 = v30;
      if ( (v31 - v30) >> 4 )
      {
        v27 = 0LL;
        do
        {
          sub_18001246C(&v28, (_QWORD *)(v26 + 16 * v27));
          sub_180088290(a1, &v28);
          if ( v29 )
            sub_180010530(v29);
          ++v25;
          v26 = v30;
          v27 = v25;
        }
        while ( v25 < (unsigned __int64)((v31 - v30) >> 4) );
      }
      return sub_180013300((__int64)&v30);
    }
  }
  return result;
}
