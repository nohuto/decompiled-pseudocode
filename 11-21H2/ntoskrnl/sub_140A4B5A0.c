/*
 * XREFs of sub_140A4B5A0 @ 0x140A4B5A0
 * Callers:
 *     sub_140A4B4D4 @ 0x140A4B4D4 (sub_140A4B4D4.c)
 *     sub_140A4B520 @ 0x140A4B520 (sub_140A4B520.c)
 * Callees:
 *     sub_14022E848 @ 0x14022E848 (sub_14022E848.c)
 *     sub_1402393FC @ 0x1402393FC (sub_1402393FC.c)
 *     sub_140241980 @ 0x140241980 (sub_140241980.c)
 *     sub_1402421DC @ 0x1402421DC (sub_1402421DC.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14038BF74 @ 0x14038BF74 (sub_14038BF74.c)
 *     sub_14038BF94 @ 0x14038BF94 (sub_14038BF94.c)
 *     sub_14038C0C8 @ 0x14038C0C8 (sub_14038C0C8.c)
 *     sub_14038D050 @ 0x14038D050 (sub_14038D050.c)
 *     sub_14038D068 @ 0x14038D068 (sub_14038D068.c)
 *     sub_14038D088 @ 0x14038D088 (sub_14038D088.c)
 *     sub_14038D0F4 @ 0x14038D0F4 (sub_14038D0F4.c)
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     KeFlushCurrentTbImmediately @ 0x1403B1CF0 (KeFlushCurrentTbImmediately.c)
 *     sub_1403B6B58 @ 0x1403B6B58 (sub_1403B6B58.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140419B58 @ 0x140419B58 (sub_140419B58.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     KdPowerTransition @ 0x1405657E0 (KdPowerTransition.c)
 *     sub_140A4C960 @ 0x140A4C960 (sub_140A4C960.c)
 *     sub_140A529EC @ 0x140A529EC (sub_140A529EC.c)
 */

void __fastcall sub_140A4B5A0(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v4; // rbx
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // r10
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r14d
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rdx
  __int16 v22; // [rsp+40h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = a2;
  v6 = 0;
  while ( *(_DWORD *)(a1 + 56) == *(_DWORD *)v4 )
  {
    if ( (++v6 & dword_140D0527C) == 0 && (dword_140D0689C & 0x40) != 0 && sub_14039EA10() )
      sub_14039D930(v6);
    else
      _mm_pause();
  }
  v7 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)v4 = v7;
  v8 = 0x140000000uLL;
  switch ( v7 )
  {
    case 2:
      sub_14038BF74((__int64)CurrentPrcb, 1);
      break;
    case 3:
      sub_14038D068();
      *(_BYTE *)(v4 + 5) = 0;
      if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        *(_BYTE *)(v4 + 5) = (int)sub_1402421DC(
                                    (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                                    v4 + 8) >= 0;
      sub_14038D050();
      *(_QWORD *)(v4 + 128) = KeGetPcr();
      break;
    case 4:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v8 = (unsigned int)CurrentIrql + 1;
        v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        a2 = *(unsigned int *)(v10 + 20);
        *(_DWORD *)(v10 + 20) = a2 | ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
      }
      *(_BYTE *)(v4 + 7) = CurrentIrql;
      _disable();
      *(_BYTE *)(v4 + 4) = (v22 & 0x200) != 0;
      sub_14038D088(v8, a2);
      break;
    case 5:
      if ( *((PEPROCESS *)KeGetCurrentThread() + 23) != PsInitialSystemProcess )
      {
        *(_BYTE *)(v4 + 6) = 1;
        sub_1402393FC((ULONG_PTR)PsInitialSystemProcess, v4 + 64);
      }
      break;
    case 6:
      if ( (dword_140C22278 & 0x800000) != 0 && *(_QWORD *)(a1 + 8) )
      {
        byte_140C223A8 = 1;
        *(_DWORD *)(v4 + 120) = 0;
      }
      else
      {
        if ( !*((_DWORD *)CurrentPrcb + 9) && !*(_QWORD *)(a1 + 8) )
          KdPowerTransition(4);
        v11 = sub_14042A5E0(*(_QWORD *)(*(_QWORD *)a1 + 16LL), *(_QWORD *)(a1 + 8));
        v12 = *((unsigned int *)CurrentPrcb + 9);
        v13 = v11;
        if ( !(_DWORD)v12 )
        {
          if ( !byte_140C223A8 )
          {
            KdPowerTransition(1);
            v12 = *((unsigned int *)CurrentPrcb + 9);
          }
          if ( !(_DWORD)v12 )
          {
            sub_140A529EC(v12);
            if ( !*((_DWORD *)CurrentPrcb + 9) )
              qword_140C22E00 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C1D010;
          }
        }
        *(_DWORD *)(v4 + 120) = v13;
      }
      break;
    case 7:
      sub_1403B6B58(1);
      break;
    case 8:
      sub_14038D0F4(v4 + 112);
      break;
    case 9:
      sub_140A4C960(*(_QWORD *)(a1 + 24));
      break;
    case 10:
      KeFlushCurrentTbImmediately();
      __wbinvd();
      break;
    case 11:
      if ( *(_BYTE *)(v4 + 6) )
      {
        sub_140241980((_OWORD *)(v4 + 64), 1);
        *(_BYTE *)(v4 + 6) = 0;
      }
      break;
    case 12:
      v14 = *(_QWORD **)(a1 + 32);
      if ( *v14 )
        sub_14042A5E0(*(unsigned int *)(a1 + 40), v14[1]);
      break;
    case 13:
      sub_14038BF94();
      sub_140419B58((__int64)CurrentPrcb, 0LL);
      if ( *(_BYTE *)(v4 + 4) )
        _enable();
      v15 = *(unsigned __int8 *)(v4 + 7);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v16 >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            v18 = *((_QWORD *)v17 + 4375);
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= v19;
            if ( v20 )
              sub_140418E4C((__int64)v17);
          }
        }
      }
      __writecr8(v15);
      break;
    case 14:
      sub_14038BF74((__int64)CurrentPrcb, 0);
      break;
    case 15:
      if ( *(_BYTE *)(v4 + 5) )
        sub_14022E848(v4 + 8);
      sub_14038C0C8(v8, a2, a3);
      LOBYTE(v21) = 1;
      sub_140419B58((__int64)CurrentPrcb, v21);
      break;
    default:
      break;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
}
