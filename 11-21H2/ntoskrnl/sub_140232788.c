/*
 * XREFs of sub_140232788 @ 0x140232788
 * Callers:
 *     sub_140232710 @ 0x140232710 (sub_140232710.c)
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 *     sub_1403B65EC @ 0x1403B65EC (sub_1403B65EC.c)
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 *     sub_14056EB1C @ 0x14056EB1C (sub_14056EB1C.c)
 *     sub_1406396B8 @ 0x1406396B8 (sub_1406396B8.c)
 *     sub_1406A9520 @ 0x1406A9520 (sub_1406A9520.c)
 *     sub_140B123CC @ 0x140B123CC (sub_140B123CC.c)
 *     sub_140B12720 @ 0x140B12720 (sub_140B12720.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402328B8 @ 0x1402328B8 (sub_1402328B8.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140232788(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD *v4; // rdi
  KSPIN_LOCK *v8; // r14
  KIRQL v9; // al
  _QWORD *v10; // rbx
  KIRQL v11; // si
  KIRQL v12; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  __int64 v20; // r8
  int v21; // eax

  if ( a1 )
  {
    v4 = (_QWORD *)(a1 + 16);
    if ( (_QWORD *)*v4 != v4 )
    {
      v8 = (KSPIN_LOCK *)(a1 + 8);
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
      v10 = (_QWORD *)*v4;
      v11 = v9;
      if ( v9 == 2 )
      {
        while ( v10 != v4 )
        {
          sub_1402328B8(1, v10[4], a2, a3, a4);
          sub_14042A5E0(v10[4], a2);
          sub_1402328B8(0, v10[4], a2, a3, a4);
          v10 = (_QWORD *)*v10;
        }
      }
      else
      {
        while ( v10 != v4 )
        {
          if ( !*((_BYTE *)v10 + 44) )
          {
            ++*((_DWORD *)v10 + 10);
            KeReleaseSpinLockFromDpcLevel(v8);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v15 = *((_QWORD *)CurrentPrcb + 4375);
                  v16 = ~(unsigned __int16)(-1LL << (v11 + 1));
                  v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
                  *(_DWORD *)(v15 + 20) &= v16;
                  if ( v17 )
                    sub_140418E4C(CurrentPrcb);
                }
              }
            }
            __writecr8(v11);
            sub_1402328B8(1, v10[4], a2, a3, a4);
            sub_14042A5E0(v10[4], a2);
            sub_1402328B8(0, v10[4], a2, a3, a4);
            v12 = KeAcquireSpinLockRaiseToDpc(v8);
            --*((_DWORD *)v10 + 10);
            v11 = v12;
            if ( *((_BYTE *)v10 + 44) && !*((_DWORD *)v10 + 10) )
              KeSetEvent(&stru_140C15860, 0, 0);
          }
          v10 = (_QWORD *)*v10;
        }
      }
      KeReleaseSpinLockFromDpcLevel(v8);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && v11 <= 0xFu && v18 >= 2u )
          {
            v19 = KeGetCurrentPrcb();
            v20 = *((_QWORD *)v19 + 4375);
            v21 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v17 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
            *(_DWORD *)(v20 + 20) &= v21;
            if ( v17 )
              sub_140418E4C(v19);
          }
        }
      }
      __writecr8(v11);
    }
  }
}
