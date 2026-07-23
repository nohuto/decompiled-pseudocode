/*
 * XREFs of sub_1402FEEE0 @ 0x1402FEEE0
 * Callers:
 *     sub_1402FF620 @ 0x1402FF620 (sub_1402FF620.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402FEEE0(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // r13
  KIRQL v9; // al
  ULONG_PTR *v10; // r11
  KIRQL v11; // di
  ULONG_PTR *v12; // r10
  ULONG_PTR v13; // rdi
  ULONG_PTR *v14; // rbp
  unsigned int v15; // ecx
  ULONG_PTR v16; // rdx
  ULONG_PTR v17; // r8
  __int64 *v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  bool v22; // zf
  ULONG_PTR v23; // rcx
  __int64 v24; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v27; // r9
  int v28; // eax
  KIRQL v29; // [rsp+70h] [rbp+18h]
  __int64 v30; // [rsp+78h] [rbp+20h] BYREF

  v30 = 0LL;
  v4 = KeQueryInterruptTimePrecise(&v30);
  v5 = v4;
  v6 = v4 - qword_140C4E950;
  if ( (unsigned __int64)(v4 - qword_140C4E950) >= 0x16E360 )
  {
    qword_140C4E950 = v4;
    qword_140C2AC10 = v6;
    v8 = 0LL;
    v9 = KeAcquireSpinLockRaiseToDpc(&qword_140C2AAF8);
    v10 = (ULONG_PTR *)qword_140C2AD50;
    v29 = v9;
    v11 = v9;
    if ( (ULONG_PTR *)qword_140C2AD50 != &qword_140C2AD50 )
    {
      do
      {
        v12 = (ULONG_PTR *)v10[2];
        v13 = 0LL;
        if ( v12 != v10 + 2 )
        {
          do
          {
            v14 = (ULONG_PTR *)*v12;
            if ( *(ULONG_PTR **)(*v12 + 8) != v12 || *(ULONG_PTR **)v12[1] != v12 )
              __fastfail(3u);
            v15 = *((_DWORD *)v12 + 6);
            v16 = 0LL;
            v17 = 0LL;
            if ( v15 )
            {
              v18 = (__int64 *)v12[4];
              v19 = v15;
              do
              {
                v20 = *v18++;
                v17 += *(_QWORD *)(v20 + 176);
                v16 += *(_QWORD *)(v20 + 200);
                --v19;
              }
              while ( v19 );
            }
            v21 = v17 - v12[5];
            v22 = v17 == v12[5];
            v12[5] = v17;
            v23 = v13 + v21;
            if ( v21 < 0 || v22 )
              v23 = v13;
            v24 = v16 - v12[6];
            v12[6] = v16;
            v12 = v14;
            v13 = v23 + v24;
            if ( v24 <= 0 )
              v13 = v23;
          }
          while ( v14 != v10 + 2 );
        }
        v10[24] = v13;
        v8 += v13;
        v10 = (ULONG_PTR *)*v10;
      }
      while ( v10 != &qword_140C2AD50 );
      v11 = v29;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C2AAF8);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v27 = *((_QWORD *)CurrentPrcb + 4375);
          v28 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v22 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
          *(_DWORD *)(v27 + 20) &= v28;
          if ( v22 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
    dword_140C2AC08 = 10000 * v8 / (unsigned __int64)(v6 * qword_140C2AC18);
  }
  *a1 = dword_140C2AC08;
  result = 0LL;
  *a2 = v5;
  return result;
}
