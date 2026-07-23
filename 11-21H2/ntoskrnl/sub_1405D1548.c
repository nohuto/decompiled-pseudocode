/*
 * XREFs of sub_1405D1548 @ 0x1405D1548
 * Callers:
 *     sub_140997C84 @ 0x140997C84 (sub_140997C84.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403978E4 @ 0x1403978E4 (sub_1403978E4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405D1548(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  KIRQL v12; // al
  char v13; // r10
  unsigned __int64 v14; // rdi
  __int64 v15; // r9
  int v16; // edx
  int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 *v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v28; // r9
  bool v29; // zf
  __int128 v30; // [rsp+20h] [rbp-28h]

  DWORD1(v30) = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(&qword_140C22F88);
  v13 = byte_140C22488;
  v14 = v12;
  xmmword_140C224C8 = *(_OWORD *)a8;
  xmmword_140C224D8 = *(_OWORD *)(a8 + 16);
  v15 = a5;
  qword_140C224E8 = *(_QWORD *)(a8 + 32);
  if ( a5 )
  {
    v16 = sub_1403978E4(dword_140C22484, *(_DWORD *)(a2 + 12));
    LODWORD(v30) = xmmword_140C22490 | *(_DWORD *)a4;
    *((_QWORD *)&v30 + 1) = *((_QWORD *)&xmmword_140C22490 + 1) - *(_QWORD *)(a4 + 8);
  }
  else
  {
    v16 = 0;
    *((_QWORD *)&v30 + 1) = 0LL;
    LODWORD(v30) = xmmword_140C22490;
  }
  v17 = 0;
  if ( byte_140C22482 )
    v17 = 2;
  if ( byte_140C22481 )
    v17 |= 1u;
  if ( !v13 || !a3 )
    v17 |= 4u;
  if ( byte_140C22483 )
    v17 |= 8u;
  if ( byte_140C224B1 )
    v17 |= 0x10u;
  if ( byte_140C224B0 )
    v17 |= 0x20u;
  *(_DWORD *)(a1 + 68) = dword_140C224AC;
  *(_DWORD *)(a1 + 64) = dword_140C224A8;
  *(_DWORD *)(a1 + 56) = dword_140C224A0;
  *(_DWORD *)(a1 + 60) = dword_140C224A4;
  *(_QWORD *)(a1 + 72) = qword_140C224C0;
  *(_QWORD *)(a1 + 16) = a6;
  *(_DWORD *)(a1 + 32) = v16;
  v18 = qword_140D069F8;
  *(_QWORD *)(a1 + 24) = a7;
  *(_DWORD *)a1 = v17;
  *(_QWORD *)(a1 + 8) = v15;
  *(_OWORD *)(a1 + 40) = v30;
  v19 = sub_14029394C(qword_140C22500, v18, 0xF4240uLL);
  v20 = qword_140D069F8;
  *(_QWORD *)(a1 + 120) = v19;
  v21 = sub_14029394C(qword_140C22508, v20, 0xF4240uLL);
  v22 = qword_140D069F8;
  *(_QWORD *)(a1 + 128) = v21;
  *(_QWORD *)(a1 + 136) = sub_14029394C(qword_140C22510, v22, 0xF4240uLL);
  v23 = (unsigned __int64 *)&unk_140C22578;
  v24 = 11LL;
  *(_DWORD *)(a1 + 144) = dword_140C22518;
  *(_OWORD *)(a1 + 80) = xmmword_140C224C8;
  *(_OWORD *)(a1 + 96) = xmmword_140C224D8;
  *(_QWORD *)(a1 + 112) = qword_140C224E8;
  v25 = a1 - (_QWORD)&unk_140C22578;
  do
  {
    *(unsigned __int64 *)((char *)v23 + v25 + 152) = sub_14029394C(*v23, qword_140D069F8, 0xF4240uLL);
    ++v23;
    --v24;
  }
  while ( v24 );
  byte_140C22480[0] = 0;
  KeReleaseSpinLockFromDpcLevel(&qword_140C22F88);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v14 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v28 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v29 = ((unsigned int)result & *(_DWORD *)(v28 + 20)) == 0;
        *(_DWORD *)(v28 + 20) &= result;
        if ( v29 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v14);
  return result;
}
