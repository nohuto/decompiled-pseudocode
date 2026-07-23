/*
 * XREFs of sub_14051416C @ 0x14051416C
 * Callers:
 *     sub_140457A42 @ 0x140457A42 (sub_140457A42.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeFlushIoBuffers @ 0x140232370 (KeFlushIoBuffers.c)
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045693C @ 0x14045693C (sub_14045693C.c)
 */

void __fastcall sub_14051416C(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, char a6)
{
  __int64 v7; // r15
  int v9; // eax
  __int16 v10; // r10
  unsigned int v11; // r10d
  int v12; // r9d
  unsigned __int64 v13; // r8
  unsigned int v14; // edx
  unsigned int v15; // ecx
  __int64 v16; // r11
  unsigned __int8 CurrentIrql; // r12
  KIRQL v18; // bp
  unsigned int v19; // r9d
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  int v22; // edx
  unsigned int v23; // ecx
  __int64 v24; // r9
  __int64 v25; // r9
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  __int64 v28; // r8
  int v29; // eax
  bool v30; // zf
  unsigned int v31; // r8d
  unsigned __int64 v32; // r15
  unsigned int v33; // r13d
  int v34; // edx
  unsigned int v35; // ecx
  __int64 v36; // r10
  __int64 v37; // r9
  unsigned __int8 v38; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v40; // r9
  int v41; // eax
  unsigned int v42; // [rsp+68h] [rbp+10h]
  __int64 v43; // [rsp+70h] [rbp+18h]
  int v44; // [rsp+78h] [rbp+20h]

  v43 = a3;
  v7 = a3;
  v9 = sub_14045693C(a1);
  v11 = v10 & 0xFFF;
  v44 = v9;
  v12 = v9;
  v13 = 0LL;
  v14 = a4;
  v15 = v11;
  v16 = v7;
  CurrentIrql = KeGetCurrentIrql();
  v18 = CurrentIrql;
  if ( a4 )
  {
    while ( 1 )
    {
      v19 = v14;
      if ( v14 >= 4096 - v15 )
        v19 = 4096 - v15;
      v20 = *(_QWORD *)(v16 + 48) & 0xFFFFFFFFFFFFF000uLL;
      if ( v13 )
      {
        if ( v20 != v13 + 4096 )
          break;
      }
      v16 = *(_QWORD *)(v16 + 8);
      v13 = v20;
      v15 = 0;
      v14 -= v19;
      if ( !v14 )
      {
        v12 = v9;
        goto LABEL_8;
      }
    }
    do
    {
      v31 = a4;
      if ( a4 >= 4096 - v11 )
        v31 = 4096 - v11;
      v32 = (*(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFF000uLL) + v11;
      v42 = v31;
      v33 = v31;
      if ( !a5 && !*(_BYTE *)(a1 + 437) )
      {
        v34 = ~(v44 - 1);
        v35 = v32 - (v34 & v32);
        v32 -= v35;
        v33 = v34 & (v31 + v44 + v35 - 1);
      }
      if ( CurrentIrql <= 2u )
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 304));
      v36 = *(_QWORD *)(a1 + 296);
      *(_QWORD *)v36 = 0LL;
      *(_WORD *)(v36 + 10) = 0;
      *(_QWORD *)(v36 + 32) = v32 & 0xFFFFFFFFFFFFF000uLL;
      *(_WORD *)(v36 + 8) = 8 * ((((v32 & 0xFFF) + 4095 + v33) >> 12) + 6);
      *(_DWORD *)(v36 + 44) = v32 & 0xFFF;
      *(_DWORD *)(v36 + 40) = v33;
      MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 296));
      if ( !a6 )
        KeFlushIoBuffers(*(_QWORD *)(a1 + 296), a5 == 0, 1, v37);
      if ( CurrentIrql <= 2u )
      {
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 304));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v38 = KeGetCurrentIrql();
            if ( v38 <= 0xFu && v18 <= 0xFu && v38 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v40 = *((_QWORD *)CurrentPrcb + 4375);
              v41 = ~(unsigned __int16)(-1LL << (v18 + 1));
              v30 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
              *(_DWORD *)(v40 + 20) &= v41;
              if ( v30 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v18);
      }
      v11 = 0;
      v7 = *(_QWORD *)(v43 + 8);
      v43 = v7;
      a4 -= v42;
    }
    while ( a4 );
  }
  else
  {
LABEL_8:
    v21 = (*(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFF000uLL) + v11;
    if ( !a5 && !*(_BYTE *)(a1 + 437) )
    {
      v22 = ~(v12 - 1);
      v23 = v21 - (v22 & v21);
      v21 -= v23;
      a4 = v22 & (v12 + v23 + a4 - 1);
    }
    if ( CurrentIrql <= 2u )
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 304));
    v24 = *(_QWORD *)(a1 + 296);
    *(_QWORD *)v24 = 0LL;
    *(_WORD *)(v24 + 10) = 0;
    *(_QWORD *)(v24 + 32) = v21 & 0xFFFFFFFFFFFFF000uLL;
    *(_WORD *)(v24 + 8) = 8 * ((((v21 & 0xFFF) + 4095 + a4) >> 12) + 6);
    *(_DWORD *)(v24 + 44) = v21 & 0xFFF;
    *(_DWORD *)(v24 + 40) = a4;
    MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 296));
    if ( !a6 )
      KeFlushIoBuffers(*(_QWORD *)(a1 + 296), a5 == 0, 1, v25);
    if ( CurrentIrql <= 2u )
    {
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 304));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v26 = KeGetCurrentIrql();
          if ( v26 <= 0xFu && v18 <= 0xFu && v26 >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            v28 = *((_QWORD *)v27 + 4375);
            v29 = ~(unsigned __int16)(-1LL << (v18 + 1));
            v30 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
            *(_DWORD *)(v28 + 20) &= v29;
            if ( v30 )
              sub_140418E4C((__int64)v27);
          }
        }
      }
      __writecr8(v18);
    }
  }
}
