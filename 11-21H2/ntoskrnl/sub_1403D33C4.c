/*
 * XREFs of sub_1403D33C4 @ 0x1403D33C4
 * Callers:
 *     sub_140850980 @ 0x140850980 (sub_140850980.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     sub_14038B428 @ 0x14038B428 (sub_14038B428.c)
 *     sub_1405D0668 @ 0x1405D0668 (sub_1405D0668.c)
 *     sub_1405D0870 @ 0x1405D0870 (sub_1405D0870.c)
 *     sub_1405D36DC @ 0x1405D36DC (sub_1405D36DC.c)
 *     sub_1405D3D68 @ 0x1405D3D68 (sub_1405D3D68.c)
 *     sub_1405D3E04 @ 0x1405D3E04 (sub_1405D3E04.c)
 *     sub_1405D44DC @ 0x1405D44DC (sub_1405D44DC.c)
 *     sub_1405D4604 @ 0x1405D4604 (sub_1405D4604.c)
 *     sub_1408111A0 @ 0x1408111A0 (sub_1408111A0.c)
 *     sub_140990924 @ 0x140990924 (sub_140990924.c)
 *     sub_140993810 @ 0x140993810 (sub_140993810.c)
 *     sub_140993904 @ 0x140993904 (sub_140993904.c)
 *     sub_1409A040C @ 0x1409A040C (sub_1409A040C.c)
 *     sub_1409A0430 @ 0x1409A0430 (sub_1409A0430.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

void __fastcall sub_1403D33C4(__int64 a1)
{
  __int64 v1; // r14
  char v3; // si
  bool v4; // bp
  char v5; // dl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // bl
  void *v11; // rax
  void *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // bl

  v1 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  if ( *(_BYTE *)(a1 + 210) && !*(_BYTE *)(a1 + 71) )
  {
    v3 = 1;
    sub_1409A040C();
    sub_140993810(a1 + 112, v1);
    *(_BYTE *)(a1 + 71) = 1;
  }
  if ( *(_BYTE *)(a1 + 209) )
  {
    sub_140993904(a1 + 112, v1);
    sub_1409A0430(a1);
    sub_140A48330(v7, v6);
    v10 = sub_1408111A0(&xmmword_140C23400);
    if ( !v10 )
      v3 = 1;
    sub_140A47CF8(v9, v8);
    v4 = v10 != 0;
    if ( !v3 )
      goto LABEL_20;
  }
  else
  {
    v4 = 0;
    if ( !v3 )
      goto LABEL_4;
  }
  v11 = sub_14036B86C(v1, 0x6D546F50u);
  v12 = v11;
  if ( v11 )
    v13 = *(_QWORD *)(*((_QWORD *)v11 + 39) + 40LL);
  else
    v13 = 0LL;
  v14 = a1 + 128;
  if ( *(_BYTE *)(a1 + 228) )
    v14 = 0LL;
  sub_1405D0870((v13 + 128) & -(__int64)(v13 != 0), v14, -v13);
  if ( v12 )
    ObfDereferenceObjectWithTag(v12, 0x6D546F50u);
LABEL_20:
  sub_1402D66A8((ULONG_PTR)&qword_140C22200);
  if ( v4 )
    LOBYTE(word_140C22211) = 1;
  if ( v3 )
    byte_140C22213 = 1;
  sub_1402935D0((ULONG_PTR)&qword_140C22200);
  sub_14036AAC4((__int64)&unk_140C22220, DelayedWorkQueue);
LABEL_4:
  v5 = *(_BYTE *)(a1 + 224) != 0;
  if ( *(_BYTE *)(a1 + 73) != v5 )
  {
    *(_BYTE *)(a1 + 73) = v5;
    sub_140990924(a1);
  }
  if ( *(_BYTE *)(a1 + 72) != *(_BYTE *)(a1 + 211) )
  {
    sub_1405D36DC(*(_QWORD *)(a1 + 48), *(unsigned __int8 *)(a1 + 211), qword_140014A28);
    sub_1402D66A8((ULONG_PTR)&qword_140C22060);
    v15 = *(_BYTE *)(a1 + 211);
    *(_BYTE *)(a1 + 72) = v15;
    if ( v15 )
    {
      if ( ++dword_140C22074 == 1 )
      {
        byte_140C2207C = 1;
        ++dword_140C22078;
        sub_1405D3E04();
      }
      sub_1405D4604((unsigned int)dword_140C22078, a1);
    }
    else
    {
      sub_1405D44DC((unsigned int)dword_140C22078, a1);
      --dword_140C22074;
    }
    if ( dword_140C22074 )
    {
      v19 = 1;
    }
    else
    {
      v19 = 0;
      sub_14038B428(0LL, v16, v18);
      sub_1405D3D68((unsigned int)dword_140C22078);
      if ( HIBYTE(word_140C22070) )
      {
        sub_1405D0668(0LL);
        HIBYTE(word_140C22070) = 0;
LABEL_37:
        sub_1402935D0((ULONG_PTR)&qword_140C22060);
        return;
      }
    }
    if ( !v4 && v19 && (_BYTE)word_140C22070 && !HIBYTE(word_140C22070) )
    {
      LOBYTE(v17) = 1;
      sub_1405D0668(v17);
      word_140C22070 = 256;
    }
    goto LABEL_37;
  }
}
