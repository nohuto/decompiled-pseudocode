/*
 * XREFs of sub_1405B77AC @ 0x1405B77AC
 * Callers:
 *     sub_1405B7E7C @ 0x1405B7E7C (sub_1405B7E7C.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char sub_1405B77AC()
{
  _UNKNOWN **v0; // rax
  __int64 v1; // rdx
  _DWORD *v2; // r11
  unsigned __int64 *v3; // r14
  __int64 v4; // rsi
  _QWORD *v5; // rcx
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // r10
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned __int64 v13; // rcx
  unsigned __int8 *v14; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v15; // rax
  __int64 v16; // r11
  unsigned __int64 v17; // rcx
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v20; // r8
  int v21; // eax
  bool v22; // zf
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  int v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+54h] [rbp-B4h] BYREF
  int v28; // [rsp+58h] [rbp-B0h] BYREF
  int v29; // [rsp+5Ch] [rbp-ACh] BYREF
  int v30; // [rsp+60h] [rbp-A8h] BYREF
  int v31; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v35; // [rsp+80h] [rbp-88h] BYREF
  __int64 v36[17]; // [rsp+88h] [rbp-80h] BYREF
  int v37; // [rsp+110h] [rbp+8h]
  int v38; // [rsp+114h] [rbp+Ch]
  char v39; // [rsp+118h] [rbp+10h] BYREF
  int *v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  __int64 *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  unsigned __int64 *v44; // [rsp+158h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+58h]
  int *v46; // [rsp+168h] [rbp+60h]
  __int64 v47; // [rsp+170h] [rbp+68h]
  int *v48; // [rsp+178h] [rbp+70h]
  __int64 v49; // [rsp+180h] [rbp+78h]
  int *v50; // [rsp+188h] [rbp+80h]
  __int64 v51; // [rsp+190h] [rbp+88h]
  unsigned __int64 *v52; // [rsp+198h] [rbp+90h]
  int v53; // [rsp+1A0h] [rbp+98h]
  int v54; // [rsp+1A4h] [rbp+9Ch]
  _UNKNOWN *retaddr; // [rsp+1D0h] [rbp+C8h] BYREF

  v0 = &retaddr;
  if ( !*(_QWORD *)&qword_140C53448 )
    return (char)v0;
  if ( !**(_DWORD **)&qword_140C53448 )
    return (char)v0;
  LOBYTE(v0) = sub_1402A2000(*(__int64 *)&qword_140C53448, 64LL);
  if ( !(_BYTE)v0 )
    return (char)v0;
  v3 = (unsigned __int64 *)(v2 + 4);
  v4 = 0LL;
  v5 = v2 + 4;
  v6 = (unsigned __int64)&v2[2 * v2[1] + 4];
  if ( (unsigned __int64)(v2 + 4) < v6 )
  {
    do
    {
      v7 = (*v5 & 0x3FFLL) + 1;
      v8 = (*v5 >> 10) & 3LL;
      if ( ((*v5 >> 10) & 3) != 0 )
      {
        do
        {
          v7 <<= 9;
          LODWORD(v8) = v8 - 1;
        }
        while ( (_DWORD)v8 );
      }
      v4 += v7;
      ++v5;
    }
    while ( (unsigned __int64)v5 < v6 );
    v1 = 64LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  if ( *v2 )
  {
    if ( **(_DWORD **)&qword_140C53448 <= 5u || !sub_1402A2000(*(__int64 *)&qword_140C53448, v1) )
      goto LABEL_21;
    v17 = *v3;
    v14 = (unsigned __int8 *)&word_14002E09E;
    v29 = *(_DWORD *)(v16 + 4);
    v40 = &v29;
    v42 = &v34;
    v35 = v17 >> 12;
    v44 = &v35;
    v41 = 4LL;
    v30 = (v17 & 0x3FF) + 1;
    v31 = (v17 >> 10) & 3;
    v46 = &v30;
    v34 = v4;
    v48 = &v31;
    LOWORD(v25) = *(_WORD *)(v16 + 4);
    v53 = 8 * (unsigned __int16)v25;
    v15 = (struct _EVENT_DATA_DESCRIPTOR *)&v39;
    v43 = 8LL;
    v45 = 8LL;
    v47 = 4LL;
    v49 = 4LL;
    v50 = &v25;
    v51 = 2LL;
    v52 = v3;
    v54 = 0;
  }
  else
  {
    if ( **(_DWORD **)&qword_140C53448 <= 5u || !sub_1402A2000(*(__int64 *)&qword_140C53448, v1) )
      goto LABEL_21;
    v13 = *v3;
    v14 = (unsigned __int8 *)&dword_14002E014 + 3;
    v26 = *(_DWORD *)(v12 + 4);
    v36[4] = (__int64)&v26;
    v36[6] = (__int64)&v32;
    v33 = v13 >> 12;
    v36[8] = (__int64)&v33;
    v36[5] = 4LL;
    v27 = (v13 & 0x3FF) + 1;
    v28 = (v13 >> 10) & 3;
    v36[10] = (__int64)&v27;
    v32 = v4;
    v36[12] = (__int64)&v28;
    LOWORD(v24) = *(_WORD *)(v12 + 4);
    v37 = 8 * (unsigned __int16)v24;
    v15 = (struct _EVENT_DATA_DESCRIPTOR *)v36;
    v36[7] = 8LL;
    v36[9] = 8LL;
    v36[11] = 4LL;
    v36[13] = 4LL;
    v36[14] = (__int64)&v24;
    v36[15] = 2LL;
    v36[16] = (__int64)v3;
    v38 = 0;
  }
  sub_14024A9B0(v11, v14, 0LL, 1u, 0, 0, 9u, v15);
LABEL_21:
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v22 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  LOBYTE(v0) = CurrentIrql;
  __writecr8(CurrentIrql);
  return (char)v0;
}
