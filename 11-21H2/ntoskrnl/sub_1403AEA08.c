/*
 * XREFs of sub_1403AEA08 @ 0x1403AEA08
 * Callers:
 *     sub_1403AE88C @ 0x1403AE88C (sub_1403AE88C.c)
 *     sub_1403BAF00 @ 0x1403BAF00 (sub_1403BAF00.c)
 *     sub_1403BB340 @ 0x1403BB340 (sub_1403BB340.c)
 *     sub_14050E088 @ 0x14050E088 (sub_14050E088.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252258 @ 0x140252258 (sub_140252258.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140252380 @ 0x140252380 (sub_140252380.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402FE230 (KeFindFirstSetRightGroupAffinity.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403AEF08 @ 0x1403AEF08 (sub_1403AEF08.c)
 *     sub_1403B07C8 @ 0x1403B07C8 (sub_1403B07C8.c)
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 *     sub_1403D8A98 @ 0x1403D8A98 (sub_1403D8A98.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14050918C @ 0x14050918C (sub_14050918C.c)
 *     sub_14050CF10 @ 0x14050CF10 (sub_14050CF10.c)
 *     sub_14050D048 @ 0x14050D048 (sub_14050D048.c)
 */

__int64 __fastcall sub_1403AEA08(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int128 *a7,
        __int64 a8)
{
  __int128 v11; // xmm0
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  int v15; // edi
  int v16; // eax
  __int64 v17; // rax
  int v18; // r8d
  int v19; // r9d
  int v20; // edi
  _DWORD *v22; // rax
  int v23; // eax
  __int64 v24; // r9
  int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  bool v28; // zf
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  unsigned __int8 v32; // al
  __int64 v33; // r8
  unsigned __int64 v34; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v37; // r9
  int v38; // eax
  __int64 v39; // [rsp+40h] [rbp-A9h] BYREF
  _DWORD v40[2]; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v41; // [rsp+50h] [rbp-99h] BYREF
  int FirstSetRightGroupAffinity; // [rsp+58h] [rbp-91h]
  int v43; // [rsp+5Ch] [rbp-8Dh]
  __int128 *v44; // [rsp+60h] [rbp-89h]
  __int128 v45; // [rsp+68h] [rbp-81h] BYREF
  _QWORD v46[12]; // [rsp+80h] [rbp-69h] BYREF

  v43 = 0;
  v39 = 0LL;
  v41 = 6LL;
  v45 = 0LL;
  memset(v46, 0, 0x58uLL);
  v11 = *a7;
  HIDWORD(v46[0]) = a2;
  LOBYTE(v46[1]) = a3;
  LODWORD(v46[5]) = a6 & 0x3FFFFFFF | v46[5] & 0xC0000000 | 0x40000000;
  *(_OWORD *)&v46[3] = v11;
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)a7);
  v44 = &v45;
  v15 = -1073741637;
  LODWORD(v45) = a6 & 0x3FFFFFFF;
  v16 = *(_DWORD *)(a1 + 224);
  if ( (v16 & 0x800) != 0 )
  {
    v17 = sub_140303720(a1);
    sub_14042A5E0(v17, a2);
    LOBYTE(v18) = a3;
    sub_1403AEF08(a2, a8, v18, v19, a5);
    return 0;
  }
  if ( (v16 & 0x400) != 0 )
  {
    LOBYTE(v12) = 1;
    if ( (unsigned __int8)sub_1403D8A98(v12) )
    {
      if ( (*(_DWORD *)(a1 + 184) & 0x50) != 0x40 )
      {
        LOBYTE(v13) = a3;
        sub_1403AEF08(a2, a8, v13, v14, a5);
        if ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
        {
          v22 = *(_DWORD **)(a1 + 288);
          HIDWORD(v46[1]) = 0;
          LODWORD(v46[0]) = 3;
          LODWORD(v46[2]) = 1;
          v15 = sub_1403D57DC(*v22, v22[1], (int)v22 + 8, 0, (__int64)v46, 1);
          if ( v15 < 0 )
            goto LABEL_13;
          v23 = HIDWORD(v46[5]);
          *(_DWORD *)(a1 + 184) |= 0x40u;
          *(_DWORD *)(a1 + 236) = v23;
          *(_DWORD *)(a1 + 232) = v46[6];
          *(_QWORD *)(a1 + 240) = HIDWORD(v46[6]);
        }
        v15 = sub_14050CF10(a1);
        if ( v15 >= 0 )
        {
          *(_DWORD *)(a1 + 184) |= 0x10u;
          return 0;
        }
        LOBYTE(v24) = 1;
        sub_14050D048(a1, a2, a6, v24);
      }
    }
  }
LABEL_13:
  v25 = *(_DWORD *)(a1 + 224);
  if ( (v25 & 0x200) != 0 )
  {
    v26 = sub_140252380(*(unsigned int *)(a1 + 88), &v39);
    v20 = v26;
    if ( v26 < 0 )
    {
      dword_140C4E844 = 16;
      *(_DWORD *)(a1 + 252) = 16;
      *(_DWORD *)(a1 + 256) = v26;
      *(_DWORD *)(a1 + 272) = 356;
LABEL_44:
      *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
      return (unsigned int)v20;
    }
  }
  else
  {
    if ( (v25 & 0x100) == 0 )
    {
      *(_DWORD *)(a1 + 256) = v15;
      v30 = 17;
      v20 = -1073741811;
      *(_DWORD *)(a1 + 272) = 371;
      goto LABEL_43;
    }
    v27 = *(_DWORD *)(a1 + 84);
    if ( v27 >= 8 )
    {
      LODWORD(v39) = 45057;
      v27 -= 8;
    }
    else
    {
      LODWORD(v39) = 45056;
    }
    v28 = *(_DWORD *)(a1 + 92) == 0;
    HIDWORD(v39) = v27;
    if ( v28 )
    {
      *(_DWORD *)(a1 + 92) = 1;
      *(_DWORD *)(a1 + 96) = 1;
    }
  }
  LOBYTE(v13) = a3;
  sub_1403AEF08(a2, a8, v13, v14, a5);
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
    goto LABEL_27;
  v29 = sub_140303720(a1);
  v20 = sub_14042A5E0(v29, 0LL);
  if ( v20 < 0 )
  {
    v30 = 24;
    *(_DWORD *)(a1 + 256) = v20;
    *(_DWORD *)(a1 + 272) = 398;
LABEL_43:
    *(_DWORD *)(a1 + 252) = v30;
    dword_140C4E844 = v30;
    goto LABEL_44;
  }
  *(_DWORD *)(a1 + 184) &= ~0x10u;
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
  {
LABEL_27:
    if ( a2 == 209 )
    {
      qword_140C4C800 = v39;
      dword_140D01720 = 1;
    }
  }
  v31 = *(_DWORD *)(a1 + 96);
  LODWORD(v46[0]) = 0;
  LODWORD(v46[2]) = v31;
  HIDWORD(v46[1]) = *(_DWORD *)(a1 + 92);
  sub_140252258(&v39, (_DWORD *)&v46[1] + 1, &v46[2]);
  v20 = sub_14050918C(&v39, &v46[7]);
  if ( v20 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
    {
      v20 = sub_1403D57DC(
              **(_DWORD **)(a1 + 288),
              *(_DWORD *)(*(_QWORD *)(a1 + 288) + 4LL),
              (unsigned int)*(_QWORD *)(a1 + 288) + 8,
              0,
              (__int64)v46,
              1);
      if ( v20 < 0 )
        return (unsigned int)v20;
      *(_DWORD *)(a1 + 184) |= 0x40u;
    }
    v40[0] = -1;
    v40[1] = 1;
    v32 = sub_140252344(&qword_140C4BEE8);
    LOBYTE(v33) = a3;
    v34 = v32;
    v20 = sub_1403B07C8(&v39, a2, v33, LODWORD(v46[2]), HIDWORD(v46[1]), &v41, v40);
    KeReleaseSpinLockFromDpcLevel(&qword_140C4BEE8);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v34 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v37 = *((_QWORD *)CurrentPrcb + 4375);
          v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
          v28 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
          *(_DWORD *)(v37 + 20) &= v38;
          if ( v28 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v34);
    if ( v20 >= 0 )
      return 0;
  }
  return (unsigned int)v20;
}
