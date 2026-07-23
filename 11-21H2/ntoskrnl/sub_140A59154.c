/*
 * XREFs of sub_140A59154 @ 0x140A59154
 * Callers:
 *     sub_140A69470 @ 0x140A69470 (sub_140A69470.c)
 *     sub_140B03BA8 @ 0x140B03BA8 (sub_140B03BA8.c)
 * Callees:
 *     sub_14026428C @ 0x14026428C (sub_14026428C.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_1403C1214 @ 0x1403C1214 (sub_1403C1214.c)
 *     sub_1403C1398 @ 0x1403C1398 (sub_1403C1398.c)
 *     sub_1403DF52C @ 0x1403DF52C (sub_1403DF52C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140A59154(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  unsigned int v5; // r9d
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // edx
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned int v19; // r10d
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // r14d
  __int64 v23; // r8
  _BYTE *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  char v27; // al
  unsigned __int64 v28; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v30; // r9
  unsigned int v31; // r8d
  __int64 v32; // rdi
  unsigned int v33; // ecx
  int v34; // r12d
  int v35; // r13d
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v38; // r8
  int v39; // eax
  bool v40; // zf
  __int128 v41; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 *v42; // [rsp+40h] [rbp-28h] BYREF
  __int64 v43; // [rsp+48h] [rbp-20h]
  __int16 v44; // [rsp+50h] [rbp-18h]
  int v45; // [rsp+52h] [rbp-16h]
  __int16 v46; // [rsp+56h] [rbp-12h]
  unsigned __int16 v48; // [rsp+B8h] [rbp+50h] BYREF
  int v49; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v50; // [rsp+C8h] [rbp+60h]

  v2 = *(_QWORD *)(a1 + 192);
  v4 = a1;
  v45 = 0;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v41 = 0LL;
  sub_14026428C(v2, (__int64)&v41, &v48);
  v5 = *(_DWORD *)(v4 + 34452);
  v6 = v41;
  if ( v5 )
  {
    v7 = *(unsigned __int8 *)(v4 + 208);
    v8 = v4 + 264LL * (v5 - 1);
    if ( (unsigned __int16)v7 >= *(_WORD *)(v8 + 40632) )
      v9 = 0LL;
    else
      v9 = *(_QWORD *)(v8 + 8 * v7 + 40640);
    v10 = v41 & v9;
    *(_QWORD *)(v4 + 34928) = v10;
  }
  else
  {
    v10 = *(_QWORD *)(v4 + 34928);
  }
  if ( !v10 )
    *(_QWORD *)(v4 + 34928) = *(_QWORD *)(v4 + 200);
  LODWORD(v11) = *(unsigned __int8 *)(v4 + 209);
  v12 = 0;
  v50 = 0;
  if ( v5 )
  {
    v13 = *(unsigned __int8 *)(v4 + 208);
    v14 = ~*(_QWORD *)(v4 + 34912);
    while ( 1 )
    {
      v15 = v4 + 264LL * v12;
      v16 = (unsigned __int16)v13 >= *(_WORD *)(v15 + 40632) ? 0LL : *(_QWORD *)(v15 + 8 * v13 + 40640);
      v17 = v6 & v16;
      if ( (v14 & v17) != 0 )
        break;
      v50 = ++v12;
      if ( v12 >= v5 )
        goto LABEL_15;
    }
    _BitScanForward64((unsigned __int64 *)&v11, v17);
    *(_QWORD *)(v4 + 34920) = v17;
  }
LABEL_15:
  *(_DWORD *)(v4 + 34900) = v11;
  if ( a2 || *(_DWORD *)(v4 + 36) != *(_DWORD *)(v2 + 176) )
    return sub_1403C1214(v4);
  v19 = dword_140D052F0;
  if ( dword_140D052F0 )
  {
    if ( (dword_140D052F0 & 0x100) != 0 && (unsigned int)sub_1403DF52C() )
      v19 *= 2;
    if ( v19 > 0x40 )
      v19 = 64;
  }
  else
  {
    v19 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v30 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v6 = v41;
    *(_DWORD *)(v30 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v31 = v48;
  *(_QWORD *)(v2 + 152) = 0LL;
  v32 = *(_QWORD *)(v4 + 34888);
  v22 = 0;
  v43 = v6;
  v42 = 0LL;
  v33 = (v19 + v31 - 1) / v19;
  v34 = v31 / v33;
  v35 = v31 % v33;
  v44 = WORD4(v41);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v49, &v42) )
  {
    v20 = qword_140D088C0[v49];
    if ( v22 == *(unsigned __int8 *)(v32 + 660) )
    {
      v32 = *(_QWORD *)(v20 + 34888);
      v22 = 0;
    }
    else if ( v22 )
    {
      goto LABEL_28;
    }
    *(_BYTE *)(v32 + 660) = v34;
    if ( v35 )
    {
      --v35;
      *(_BYTE *)(v32 + 660) = v34 + 1;
    }
LABEL_28:
    v21 = *(_QWORD *)(v20 + 200);
    ++v22;
    *(_QWORD *)(v20 + 34888) = v32;
    *(_QWORD *)(v32 + 664) |= v21;
    v23 = *(_QWORD *)(v20 + 16);
    v50 = *(unsigned __int8 *)(v20 + 209) - *(unsigned __int8 *)(v32 + 657);
    v24 = (_BYTE *)(v50 + v32 + 528);
    *(_QWORD *)(v20 + 56) = v24;
    if ( !v23 )
      v23 = *(_QWORD *)(v20 + 8);
    sub_1403C1398(v24, (struct _KPRCB *)v20, v23);
  }
  v42 = 0LL;
  v44 = WORD4(v41);
  v43 = v41;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v49, &v42) )
  {
    v25 = qword_140D088C0[v49];
    v26 = *(_QWORD *)(v25 + 34888);
    if ( *(_BYTE *)(v26 + 660) > 1u )
      *(_QWORD *)(v25 + 34880) = *(_QWORD *)(v26 + 664);
    v27 = *(_BYTE *)(v25 + 209);
    if ( v27 == *(_BYTE *)(v26 + 657) && *(_BYTE *)(v26 + 660) > 1u )
    {
      *(_DWORD *)(v25 + 34896) = 1;
      *(_BYTE *)(v26 + 661) = v27;
      _BitScanReverse64(&v28, *(_QWORD *)(v26 + 664));
      v50 = v28;
      *(_BYTE *)(v26 + 656) = v28 - *(_BYTE *)(v26 + 657) + 1;
    }
  }
  v4 = a1;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v38 = *((_QWORD *)CurrentPrcb + 4375);
        v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v40 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
        *(_DWORD *)(v38 + 20) &= v39;
        if ( v40 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return sub_1403C1214(v4);
}
