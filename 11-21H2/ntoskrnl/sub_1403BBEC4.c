/*
 * XREFs of sub_1403BBEC4 @ 0x1403BBEC4
 * Callers:
 *     sub_1403BC388 @ 0x1403BC388 (sub_1403BC388.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403A572C @ 0x1403A572C (sub_1403A572C.c)
 *     sub_1403BC1C4 @ 0x1403BC1C4 (sub_1403BC1C4.c)
 *     sub_1403BC2A0 @ 0x1403BC2A0 (sub_1403BC2A0.c)
 *     sub_1403BC620 @ 0x1403BC620 (sub_1403BC620.c)
 *     sub_1403BC8C4 @ 0x1403BC8C4 (sub_1403BC8C4.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1403BBEC4(__int64 a1)
{
  ULONG_PTR *v1; // rbx
  int v2; // r15d
  char v3; // dl
  ULONG_PTR *v5; // rcx
  ULONG_PTR *v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  ULONG_PTR *v9; // rbx
  ULONG_PTR *v10; // rdi
  ULONG_PTR *v11; // r10
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rcx
  ULONG_PTR *v15; // rbx
  ULONG_PTR *v16; // rdi
  ULONG_PTR *v17; // r10
  ULONG_PTR *v18; // rbx
  __int64 v19; // r11
  int v20; // edi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  unsigned int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx

  v1 = (ULONG_PTR *)qword_140C4E4E0;
  v2 = *(_DWORD *)(a1 + 224) & 2;
  v3 = 0;
  if ( (ULONG_PTR *)qword_140C4E4E0 != &qword_140C4E4E0 )
  {
    do
    {
      v5 = v1;
      v1 = (ULONG_PTR *)*v1;
      if ( (!v5[24] || (v5[23] & 8) != 0) && (v5[28] & 2) != 0 )
      {
        sub_1403BC620(v5);
        v3 = 1;
      }
    }
    while ( v1 != &qword_140C4E4E0 );
    if ( v3 )
    {
      KeStallExecutionProcessor(0x5DCu);
      v6 = (ULONG_PTR *)qword_140C4E4E0;
      while ( v6 != &qword_140C4E4E0 )
      {
        v7 = (__int64)v6;
        v6 = (ULONG_PTR *)*v6;
        if ( (!*(_QWORD *)(v7 + 192) || (*(_DWORD *)(v7 + 184) & 8) != 0)
          && (*(_DWORD *)(v7 + 224) & 2) != 0
          && (*(_DWORD *)(v7 + 184) & 2) != 0 )
        {
          if ( v2 )
          {
            *(_DWORD *)(v7 + 48) = sub_1403BC2A0(v7, a1);
          }
          else
          {
            v28 = sub_140303720(v7);
            *(_QWORD *)(v7 + 16) = sub_14042A5E0(v28, v29);
          }
        }
      }
      v8 = __readcr2();
      __writecr2(v8);
      if ( (*(_DWORD *)(a1 + 224) & 2) == 0 )
      {
        v30 = sub_140303720(a1);
        sub_14042A5E0(v30, 0LL);
      }
      v9 = (ULONG_PTR *)qword_140C4E4E0;
      while ( v9 != &qword_140C4E4E0 )
      {
        v10 = v9;
        v11 = v9;
        v9 = (ULONG_PTR *)*v9;
        if ( (!v10[24] || (v10[23] & 8) != 0) && (v11[28] & 2) != 0 && (v11[23] & 2) != 0 )
        {
          if ( v2 )
          {
            sub_1403BC1C4(*((_DWORD *)v11 + 12), (_DWORD)v11, a1, (_DWORD)v10 + 16, (__int64)(v11 + 3));
          }
          else
          {
            v31 = sub_140303720((__int64)v11);
            v10[2] = sub_14042A5E0(v31, v32);
          }
        }
      }
      v12 = __readcr2();
      __writecr2(v12);
      if ( (*(_DWORD *)(a1 + 224) & 2) != 0 )
      {
        v13 = 1250000LL;
        sub_1403BC8C4(a1, 1250000LL, 0LL);
      }
      else
      {
        v33 = sub_140303720(a1);
        v13 = sub_14042A5E0(v33, 1250000LL);
      }
      v14 = __readcr2();
      __writecr2(v14);
      v15 = (ULONG_PTR *)qword_140C4E4E0;
      while ( v15 != &qword_140C4E4E0 )
      {
        v16 = v15;
        v17 = v15;
        v15 = (ULONG_PTR *)*v15;
        if ( (!v16[24] || (v16[23] & 8) != 0) && (v17[28] & 2) != 0 && (v17[23] & 2) != 0 )
        {
          if ( v2 )
          {
            sub_1403BC1C4(*((_DWORD *)v17 + 12), (_DWORD)v17, a1, (_DWORD)v16 + 32, (__int64)(v17 + 5));
          }
          else
          {
            v34 = sub_140303720((__int64)v17);
            v16[4] = sub_14042A5E0(v34, v35);
          }
        }
      }
      v18 = (ULONG_PTR *)qword_140C4E4E0;
      while ( v18 != &qword_140C4E4E0 )
      {
        v19 = (__int64)v18;
        v18 = (ULONG_PTR *)*v18;
        if ( (!*(_QWORD *)(v19 + 192) || (*(_DWORD *)(v19 + 184) & 8) != 0) && (*(_DWORD *)(v19 + 224) & 2) != 0 )
        {
          v20 = *(_DWORD *)(v19 + 184);
          if ( (v20 & 2) != 0 )
          {
            v21 = *(_QWORD *)(v19 + 16);
            v22 = *(_QWORD *)(v19 + 32) - v21;
            v23 = *(_QWORD *)(v19 + 24);
            v24 = *(_QWORD *)(v19 + 40) - v23;
            if ( *(_QWORD *)(v19 + 32) < v21 )
              v22 += 1LL << *(_DWORD *)(v19 + 220);
            if ( *(_QWORD *)(v19 + 40) < v23 )
              v24 += 1LL << *(_DWORD *)(a1 + 220);
            if ( v2 )
              v13 = sub_1403A572C(v24, *(_QWORD *)(a1 + 192), 10000000LL);
            v25 = v20 & 0xFFFFFFF7;
            *(_DWORD *)(v19 + 184) = v25;
            *(_QWORD *)(v19 + 192) = 10000000 * v22 / v13;
            if ( v19 != a1 && (v25 & 4) == 0 && *(_QWORD *)(v19 + 136) )
            {
              v26 = sub_140303720(v19);
              sub_14042A5E0(v26, v27);
            }
          }
        }
      }
    }
  }
}
