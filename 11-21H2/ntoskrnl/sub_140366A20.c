/*
 * XREFs of sub_140366A20 @ 0x140366A20
 * Callers:
 *     sub_140214C50 @ 0x140214C50 (sub_140214C50.c)
 *     sub_14026AB70 @ 0x14026AB70 (sub_14026AB70.c)
 *     sub_140279DB0 @ 0x140279DB0 (sub_140279DB0.c)
 *     sub_1402AD610 @ 0x1402AD610 (sub_1402AD610.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402C0900 @ 0x1402C0900 (sub_1402C0900.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 *     sub_14030DA80 @ 0x14030DA80 (sub_14030DA80.c)
 *     sub_14030EC70 @ 0x14030EC70 (sub_14030EC70.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_1403171A0 @ 0x1403171A0 (sub_1403171A0.c)
 *     sub_1403199E0 @ 0x1403199E0 (sub_1403199E0.c)
 *     sub_140319F70 @ 0x140319F70 (sub_140319F70.c)
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 *     sub_1403234A0 @ 0x1403234A0 (sub_1403234A0.c)
 *     sub_1403277D0 @ 0x1403277D0 (sub_1403277D0.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 *     sub_140331CC0 @ 0x140331CC0 (sub_140331CC0.c)
 *     sub_140333AC0 @ 0x140333AC0 (sub_140333AC0.c)
 *     sub_14033DFC0 @ 0x14033DFC0 (sub_14033DFC0.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 * Callees:
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140366A20(signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  volatile signed __int32 *v5; // r14
  unsigned int v6; // esi
  signed __int32 v7; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v10; // eax
  bool v11; // zf
  struct _KPRCB *v12; // rbp
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax

  v4 = a2;
  v5 = a1;
  v6 = 0;
  _m_prefetchw(a1);
  v7 = *a1;
  while ( 1 )
  {
    if ( v7 < 0 )
    {
      do
      {
        if ( (v7 & 0x40000000) == 0 )
          _InterlockedOr(v5, 0x40000000u);
        if ( v4 != 0xFF )
        {
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                a1 = (signed __int32 *)((unsigned int)v4 + 1);
                a2 = -1LL << (v4 + 1);
                a4 = *((_QWORD *)CurrentPrcb + 4375);
                v10 = ~(unsigned __int16)a2;
                v11 = (v10 & *(_DWORD *)(a4 + 20)) == 0;
                a3 = (unsigned int)v10 & *(_DWORD *)(a4 + 20);
                *(_DWORD *)(a4 + 20) = a3;
                if ( v11 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(v4);
        }
        if ( (++v6 & dword_140D0527C) == 0
          && (dword_140D0689C & 0x40) != 0
          && (unsigned __int8)sub_14039EA10(a1, a2, a3, a4) )
        {
          sub_14039D930(v6);
        }
        else
        {
          _mm_pause();
        }
        if ( v4 != 0xFF )
        {
          v4 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 && v4 <= 0xFu )
            {
              a1 = (signed __int32 *)((unsigned int)v4 + 1);
              a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
              a2 = (-1LL << (v4 + 1)) & 4;
              a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
              *(_DWORD *)(a4 + 20) = a3;
            }
          }
        }
        v7 = *v5;
      }
      while ( *(int *)v5 < 0 );
    }
    v12 = KeGetCurrentPrcb();
    v13 = *((_QWORD *)v12 + 4375);
    if ( v13 )
    {
      if ( *((_BYTE *)v12 + 32) <= 1u )
      {
        v14 = *(_DWORD *)(v13 + 24);
        *(_DWORD *)(v13 + 24) = v14 + 1;
        if ( v14 == -1 )
          sub_140418E4C(v12);
      }
    }
    a2 = (unsigned int)v7;
    v7 = _InterlockedCompareExchange(v5, (v7 + 1) & 0xBFFFFFFF, v7);
    if ( v7 == (_DWORD)a2 )
      break;
    a1 = (signed __int32 *)*((_QWORD *)v12 + 4375);
    if ( a1 && *((_BYTE *)v12 + 32) <= 1u )
    {
      v15 = a1[6] - 1;
      a1[6] = v15;
      if ( !v15 )
        sub_140418E4C(v12);
    }
  }
  return v6;
}
