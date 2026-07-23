/*
 * XREFs of sub_14093B1CC @ 0x14093B1CC
 * Callers:
 *     sub_14093AAEC @ 0x14093AAEC (sub_14093AAEC.c)
 * Callees:
 *     sub_14055A628 @ 0x14055A628 (sub_14055A628.c)
 *     sub_14055A6A0 @ 0x14055A6A0 (sub_14055A6A0.c)
 *     sub_14055A6E4 @ 0x14055A6E4 (sub_14055A6E4.c)
 *     sub_14055B568 @ 0x14055B568 (sub_14055B568.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 *     sub_14093B898 @ 0x14093B898 (sub_14093B898.c)
 *     sub_14093BBD8 @ 0x14093BBD8 (sub_14093BBD8.c)
 *     sub_14093C268 @ 0x14093C268 (sub_14093C268.c)
 *     sub_14093C2FC @ 0x14093C2FC (sub_14093C2FC.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14093B1CC(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // r15
  unsigned __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // r11
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax
  int v11; // edx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 Pool2; // rax
  unsigned int v15; // esi
  __int64 v16; // rax
  int v17; // ebp
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v32; // [rsp+50h] [rbp+8h] BYREF
  __int64 v33; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v3 = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    v3 = sub_14055A628(0);
  v4 = (unsigned int)dword_140C0CBEC;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 744) = 0LL;
  *(_QWORD *)(a1 + 680) = 0LL;
  v5 = *(_QWORD *)(a1 + 96);
  v6 = ~(v4 - 1);
  v7 = v6 & (*(_QWORD *)(a1 + 120) + v4 - 1);
  *(_QWORD *)(a1 + 104) = v6 & (v4 + *(_QWORD *)(a1 + 104) - 1LL);
  v8 = *(_QWORD *)(a1 + 128) - 1LL;
  *(_QWORD *)(a1 + 120) = v7;
  v9 = v6 & (v4 + v5 - 1);
  v10 = v6 & (v4 + v8);
  *(_QWORD *)(a1 + 96) = v9;
  *(_QWORD *)(a1 + 128) = v10;
  v11 = *(_DWORD *)(a1 + 80);
  v12 = v9 / v4 + v7 / v4 + v10 / v4;
  if ( (v11 & 0x200) != 0 )
  {
    v13 = (*(_QWORD *)(a1 + 1136) >> 12) + ((*(_QWORD *)(a1 + 1136) & 0xFFFLL) != 0);
    if ( v12 * (unsigned int)v4 > v13 )
    {
      *(_DWORD *)(a1 + 80) = v11 | 0x400;
      v12 = (v6 & v13) / v4;
    }
  }
  Pool2 = ExAllocatePool2(64LL, (8 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1886217292LL);
  *(_QWORD *)(a1 + 752) = Pool2;
  if ( !Pool2 )
    goto LABEL_31;
  if ( !sub_14055A6A0(*(_QWORD *)(a1 + 920), *(_QWORD *)(a1 + 928), *(_QWORD *)(a1 + 936)) )
  {
    v16 = ExAllocatePool2(64LL, (8 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1886217292LL);
    *(_QWORD *)(a1 + 760) = v16;
    if ( v16 )
    {
      if ( sub_14055A6A0(*(_QWORD *)(a1 + 920), *(_QWORD *)(a1 + 928), *(_QWORD *)(a1 + 936)) )
        goto LABEL_8;
      sub_14093C268(a1, *(_QWORD *)(a1 + 752), (8 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL);
      sub_14093C268(a1, *(_QWORD *)(a1 + 760), (8 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL);
      if ( (*(_DWORD *)(a1 + 80) & 0x800) != 0 )
      {
        v17 = 3;
        if ( (int)sub_14055A6E4(a1) >= 0 )
          v17 = 1;
      }
      else
      {
        v17 = 4;
      }
      v32 = 0LL;
      v18 = 0LL;
      if ( v12 )
      {
        while ( 1 )
        {
          v33 = 0LL;
          if ( v17 == 1 )
            break;
          if ( v17 == 2 )
          {
            v19 = sub_14093BBD8(a1, (unsigned int)dword_140C0CBE8, &v33);
            v20 = v19;
            if ( v19 )
            {
              v21 = (unsigned int)dword_140C0CBE8;
              *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v18) = v19;
              v22 = *(_QWORD *)(a1 + 760);
              *(_QWORD *)(a1 + 680) += (unsigned int)dword_140C0CBEC;
              v23 = v33;
              ++*(_QWORD *)(a1 + 744);
              *(_QWORD *)(v22 + 8 * v18++) = v23;
              v32 = v18;
              sub_14093C268(a1, v20, v21);
            }
            else
            {
              v17 = 3;
            }
            goto LABEL_28;
          }
          if ( v17 == 3 )
          {
            sub_14093B898(a1, 0LL, v12 - v18, &v32);
            v17 = 4;
            goto LABEL_25;
          }
          v24 = sub_140829CBC((unsigned int)dword_140C0CBE8, -1, 0LL, 0);
          if ( !v24 )
            goto LABEL_29;
          v25 = (unsigned int)dword_140C0CBE8;
          *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v18) = v24;
          *(_QWORD *)(a1 + 680) += (unsigned int)dword_140C0CBEC;
          v26 = *(_QWORD *)(a1 + 760);
          ++*(_QWORD *)(a1 + 744);
          *(_QWORD *)(v26 + 8 * v18++) = 0LL;
          v32 = v18;
          sub_14093C268(a1, v24, v25);
          if ( sub_14055A6A0(*(_QWORD *)(a1 + 920), *(_QWORD *)(a1 + 928), *(_QWORD *)(a1 + 936)) )
            goto LABEL_8;
LABEL_28:
          if ( v18 >= v12 )
            goto LABEL_29;
        }
        sub_14093B898(a1, *(_QWORD *)(a1 + 1096), v12 - v18, &v32);
        v17 = 2;
LABEL_25:
        v18 = v32;
        goto LABEL_28;
      }
LABEL_29:
      v27 = *(_QWORD *)(a1 + 680);
      v28 = *(_QWORD *)(a1 + 104);
      if ( v27 >= v28 )
      {
        v15 = 0;
        goto LABEL_33;
      }
    }
LABEL_31:
    v15 = -1073741670;
    goto LABEL_32;
  }
LABEL_8:
  v15 = -1073741248;
LABEL_32:
  sub_14093C2FC(a1);
  *(_QWORD *)(a1 + 680) = 0LL;
  v27 = 0LL;
  v28 = *(_QWORD *)(a1 + 104);
LABEL_33:
  v29 = *(_QWORD *)(a1 + 128);
  v30 = *(_QWORD *)(a1 + 120);
  if ( v27 < v28 + v29 + v30 )
  {
    if ( v27 )
    {
      *(_QWORD *)(a1 + 688) = v28;
      *(_QWORD *)(a1 + 696) = v27 - v28;
    }
    else
    {
      *(_QWORD *)(a1 + 688) = 0LL;
      *(_QWORD *)(a1 + 696) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 688) = v27 - v29 - v30;
    *(_QWORD *)(a1 + 696) = *(_QWORD *)(a1 + 120);
    v1 = *(_QWORD *)(a1 + 128);
  }
  *(_QWORD *)(a1 + 704) = v1;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    *(_QWORD *)(a1 + 768) = sub_14055A628(0) - v3;
  sub_14055B568(a1, v12 * (unsigned int)dword_140C0CBEC);
  return v15;
}
