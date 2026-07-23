/*
 * XREFs of sub_1403CD570 @ 0x1403CD570
 * Callers:
 *     sub_1403CD4E0 @ 0x1403CD4E0 (sub_1403CD4E0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403B2A28 @ 0x1403B2A28 (sub_1403B2A28.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140514E28 @ 0x140514E28 (sub_140514E28.c)
 *     sub_140514F70 @ 0x140514F70 (sub_140514F70.c)
 *     sub_140515200 @ 0x140515200 (sub_140515200.c)
 */

__int64 __fastcall sub_1403CD570(__int64 a1)
{
  __int64 v1; // r12
  int v3; // r15d
  void *v4; // rax
  __int64 v5; // rsi
  KIRQL v6; // al
  __int64 *v7; // rcx
  unsigned __int64 v8; // r13
  unsigned __int8 v9; // bp
  unsigned __int64 v10; // r14
  __int64 v11; // r8
  bool v12; // zf
  __int64 v13; // rdx
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // cl
  __int64 v16; // rax
  __int64 **v17; // r13
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v24; // r9
  int v25; // eax
  unsigned __int8 v26; // cl
  __int64 v27; // rdi
  unsigned __int64 v28; // rdi
  unsigned int v29; // [rsp+70h] [rbp+8h]
  unsigned __int64 v30; // [rsp+80h] [rbp+18h]
  __int64 v31; // [rsp+88h] [rbp+20h]

  v1 = 0LL;
  v3 = *(_DWORD *)(a1 + 512);
  v30 = *(_QWORD *)(a1 + 136);
  v4 = (void *)sub_1403B1F04(a1, 120LL);
  v5 = (__int64)v4;
  if ( !v4 )
    return v5;
  memset(v4, 0, 0x78uLL);
  v6 = KeAcquireSpinLockRaiseToDpc(&qword_140C4BD30);
  v7 = (__int64 *)qword_140C4BD48;
  v8 = v6;
  if ( *(__int64 **)qword_140C4BD48 != &qword_140C4BD40 )
    __fastfail(3u);
  *(_QWORD *)(v5 + 8) = qword_140C4BD48;
  *(_QWORD *)v5 = &qword_140C4BD40;
  *v7 = v5;
  qword_140C4BD48 = v5;
  KeReleaseSpinLockFromDpcLevel(&qword_140C4BD30);
  v9 = 1;
  v10 = -1LL;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v24 = *((_QWORD *)CurrentPrcb + 4375);
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v12 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= v25;
        if ( v12 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  sub_1403B2A28(v5);
  v11 = (unsigned __int8)byte_140C0CA9C;
  *(_BYTE *)(v5 + 32) = *(_BYTE *)(a1 + 437);
  v31 = (-(__int64)(*(_BYTE *)(a1 + 145) != 0) & 0xFFFF0000LL) + 0x10000;
  if ( v3 == 2 )
  {
    v14 = v11;
    goto LABEL_10;
  }
  v12 = !_BitScanReverse64((unsigned __int64 *)&v13, qword_140C4E038);
  if ( !v12 )
  {
    if ( (unsigned __int8)v13 < 0x1Eu )
    {
      v14 = 32;
      goto LABEL_9;
    }
    if ( (unsigned __int8)v13 < 0x3Fu )
    {
      v14 = v13 + 2;
      goto LABEL_9;
    }
  }
  v14 = 64;
LABEL_9:
  if ( v3 )
  {
    v26 = v14;
    if ( v14 > (unsigned __int8)v11 )
      v26 = v11;
    v14 = v26;
  }
LABEL_10:
  if ( v14 < 0x40u )
    v10 = (1LL << v14) - 1;
  v15 = -1;
  if ( v10 > v30 )
    v10 = v30;
  v12 = !_BitScanReverse64((unsigned __int64 *)&v16, v10);
  if ( !v12 )
    v15 = v16;
  if ( !v3 )
  {
    v17 = (__int64 **)(v5 + 40);
    v18 = 1LL;
    v19 = 0LL;
    goto LABEL_18;
  }
  v29 = (unsigned int)(v3 - 1) > 2 ? 3 : 0;
  if ( v3 != 1 )
  {
    if ( v3 == 3 )
    {
      v1 = sub_140515200(*(_QWORD *)(a1 + 528), v5 + 33, v11);
      if ( byte_140C4BD20 )
        goto LABEL_43;
    }
    else if ( v3 == 2 )
    {
      v1 = sub_140514F70(*(_QWORD *)(a1 + 520), (unsigned int)v15 + 1, v11);
    }
  }
  v9 = 0;
LABEL_43:
  v27 = 0LL;
  v17 = (__int64 **)(v5 + 40);
  if ( v3 == 2 )
    v27 = 0x4000000000000000LL;
  v28 = ((unsigned __int64)v9 << 61) | v27 | 0x8000000000000000uLL;
  if ( (int)sub_14042A5E0(v29, v28) >= 0 )
    goto LABEL_19;
  if ( v9 )
  {
    v18 = v29;
    v19 = v28 & 0xDFFFFFFFFFFFFFFFuLL;
LABEL_18:
    if ( (int)sub_14042A5E0(v18, v19) >= 0 )
    {
LABEL_19:
      **v17 = v5;
      *(_QWORD *)(v5 + 80) = 0LL;
      *(_QWORD *)(v5 + 24) = v31;
      *(_DWORD *)(v5 + 48) = v3;
      *(_QWORD *)(v5 + 16) = v10;
      *(_QWORD *)(v5 + 64) = 0LL;
      *(_QWORD *)(v5 + 72) = 0LL;
      *(_QWORD *)(v5 + 104) = 0LL;
      *(_QWORD *)(v5 + 96) = v5 + 88;
      *(_QWORD *)(v5 + 88) = v5 + 88;
      goto LABEL_20;
    }
  }
  sub_140514E28(v5);
  v5 = 0LL;
LABEL_20:
  if ( v1 )
    sub_1403B1B5C(v20, v1);
  return v5;
}
