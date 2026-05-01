/*
 * XREFs of sub_18000FDC4 @ 0x18000FDC4
 * Callers:
 *     sub_18000FCC0 @ 0x18000FCC0 (sub_18000FCC0.c)
 * Callees:
 *     sub_18000D628 @ 0x18000D628 (sub_18000D628.c)
 *     sub_18000DB68 @ 0x18000DB68 (sub_18000DB68.c)
 *     sub_18000E518 @ 0x18000E518 (sub_18000E518.c)
 *     sub_18000F768 @ 0x18000F768 (sub_18000F768.c)
 *     sub_1800108D8 @ 0x1800108D8 (sub_1800108D8.c)
 *     sub_180011254 @ 0x180011254 (sub_180011254.c)
 *     sub_180011674 @ 0x180011674 (sub_180011674.c)
 */

char __fastcall sub_18000FDC4(__int64 a1, const void *a2, size_t a3, const void *a4, size_t a5, int a6)
{
  __int64 v6; // rdi
  char *v11; // rdi
  char v12; // r14
  int v13; // eax
  unsigned __int16 v15; // cx
  __int64 v16; // rax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  __int16 v22; // [rsp+30h] [rbp-40h] BYREF
  char v23; // [rsp+32h] [rbp-3Eh]
  int v24; // [rsp+34h] [rbp-3Ch]
  __int16 v25; // [rsp+38h] [rbp-38h]
  __int128 v26; // [rsp+40h] [rbp-30h]
  unsigned __int16 v27; // [rsp+50h] [rbp-20h] BYREF
  char v28; // [rsp+52h] [rbp-1Eh]
  int v29; // [rsp+54h] [rbp-1Ch]
  __int16 v30; // [rsp+58h] [rbp-18h]
  __int64 v31; // [rsp+60h] [rbp-10h]
  const void *v32; // [rsp+68h] [rbp-8h]
  void *Source; // [rsp+A0h] [rbp+30h] BYREF

  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
  {
    v11 = (char *)(v6 + 10);
    v22 = *(_WORD *)(a1 + 2);
    v12 = 0;
    v23 = *(_BYTE *)(a1 + 4);
    Source = v11;
    v24 = 0;
    v25 = 0;
    v26 = 0LL;
    while ( 1 )
    {
      if ( !sub_18000F768(&v22, (const void **)&Source, *(_QWORD *)(a1 + 32)) )
      {
        v11 = (char *)Source;
        *(_QWORD *)(a1 + 32) = Source;
        goto LABEL_8;
      }
      v13 = sub_18000D628((__int64)&v22, a2, a3);
      if ( v13 < 0 )
      {
        Source = v11;
        goto LABEL_8;
      }
      if ( !v13 )
        break;
      v11 = (char *)sub_1800108D8(a1, &v22, Source);
      Source = v11;
    }
    Source = (void *)sub_18000DB68(a1, (__int64)&v22, (unsigned __int64)Source, a4, a5, a6);
    v11 = (char *)Source;
    if ( !Source )
      return 1;
    v12 = 1;
LABEL_8:
    if ( !v12 )
    {
      *(_QWORD *)&v26 = 0LL;
      v24 = 1;
      v25 = a3;
      *((_QWORD *)&v26 + 1) = a2;
      sub_18000E518((unsigned __int16 *)&v22);
    }
    v15 = *(_WORD *)(a1 + 6);
    v31 = 0LL;
    v27 = v15;
    LOBYTE(v15) = *(_BYTE *)(a1 + 8);
    v29 = a6;
    v28 = v15;
    v30 = a5;
    v32 = a4;
    v16 = sub_18000E518(&v27);
    v17 = *(_QWORD *)(a1 + 32);
    v19 = v18 + v16;
    v20 = *(_QWORD *)(a1 + 40);
    if ( ((v20 - v17) & -(__int64)(v17 < v20)) >= v19 )
    {
      memmove_s(&v11[v19], v20 - v19 - (_QWORD)v11, v11, v17 - (_QWORD)v11);
      *(_QWORD *)(a1 + 32) += v19;
      if ( v12 )
      {
        if ( v23 )
          sub_180011254(&v22, (unsigned int)(v24 + 1));
      }
      else
      {
        sub_180011674(&v22, &Source);
      }
      sub_180011674(&v27, &Source);
      *(_BYTE *)(a1 + 56) = 1;
      return 1;
    }
  }
  return 0;
}
