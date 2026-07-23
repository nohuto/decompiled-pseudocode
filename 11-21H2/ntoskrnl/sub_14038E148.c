/*
 * XREFs of sub_14038E148 @ 0x14038E148
 * Callers:
 *     sub_14038E01C @ 0x14038E01C (sub_14038E01C.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_14038E318 @ 0x14038E318 (sub_14038E318.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14038E148(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  volatile LONG *v3; // r13
  unsigned int v4; // r8d
  unsigned int v5; // r12d
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // r15d
  _QWORD *v9; // rbp
  unsigned int v10; // r14d
  _QWORD *v11; // rax
  int *v12; // rcx
  unsigned int v13; // edx
  unsigned __int8 CurrentIrql; // di
  __int64 v15; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  __int64 v21; // r9
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // [rsp+40h] [rbp-78h]
  __int64 v27; // [rsp+48h] [rbp-70h]
  int *v28; // [rsp+50h] [rbp-68h]
  _QWORD *v29; // [rsp+58h] [rbp-60h]
  unsigned __int64 v30; // [rsp+60h] [rbp-58h]
  int v31; // [rsp+C0h] [rbp+8h]
  int v32; // [rsp+C8h] [rbp+10h]
  unsigned int v33; // [rsp+D0h] [rbp+18h]
  int v34; // [rsp+D8h] [rbp+20h]

  v31 = a1;
  v1 = *(_QWORD *)(a1 + 16);
  result = (unsigned __int16)word_140D05000;
  v30 = v1 + 24512LL * (unsigned __int16)word_140D05000;
  if ( v1 < v30 )
  {
    v3 = (volatile LONG *)(v1 + 22848);
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v15 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v15 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      ExAcquireSpinLockExclusiveAtDpcLevel(v3);
      v13 = 0;
      v29 = (_QWORD *)v1;
      v12 = dword_140C507C0;
      v33 = 0;
      v28 = dword_140C507C0;
      v11 = (_QWORD *)v1;
      do
      {
        if ( *v11 )
        {
          v4 = *v12;
          v5 = 0;
          v34 = *v12;
          if ( dword_140D05004 )
          {
            do
            {
              v6 = 32LL * v5 + 560;
              v32 = 0;
              v27 = v6;
              do
              {
                v7 = v6;
                v8 = 0;
                v26 = v6;
                do
                {
                  v9 = *(_QWORD **)((char *)v11 + v7);
                  v10 = 0;
                  if ( v4 )
                  {
                    do
                    {
                      if ( (_QWORD *)*v9 != v9 )
                      {
                        if ( !(unsigned int)sub_14038E318(v31, v1, v13, v32, v10, v5, v8) )
                        {
                          ExReleaseSpinLockExclusiveFromDpcLevel(v3);
                          if ( dword_140D06B08 )
                          {
                            if ( (dword_140D06B08 & 1) != 0 )
                            {
                              v16 = KeGetCurrentIrql();
                              if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
                              {
                                CurrentPrcb = KeGetCurrentPrcb();
                                v18 = *((_QWORD *)CurrentPrcb + 4375);
                                v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                                v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
                                *(_DWORD *)(v18 + 20) &= v19;
                                if ( v20 )
                                  sub_140418E4C(CurrentPrcb);
                              }
                            }
                          }
                          __writecr8(CurrentIrql);
                          --v10;
                          v9 -= 3;
                          CurrentIrql = KeGetCurrentIrql();
                          __writecr8(2uLL);
                          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
                          {
                            v21 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
                            *(_DWORD *)(v21 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
                          }
                          ExAcquireSpinLockExclusiveAtDpcLevel(v3);
                        }
                        v4 = v34;
                        v13 = v33;
                      }
                      ++v10;
                      v9 += 3;
                    }
                    while ( v10 < v4 );
                    v11 = v29;
                    v7 = v26;
                  }
                  v7 += 8LL;
                  ++v8;
                  v26 = v7;
                }
                while ( v8 <= 3 );
                ++v32;
                v6 = v27 + 256;
                v27 += 256LL;
              }
              while ( v32 <= 1 );
              ++v5;
            }
            while ( v5 < dword_140D05004 );
            v12 = v28;
          }
        }
        ++v13;
        ++v12;
        v11 += 134;
        v33 = v13;
        v28 = v12;
        v29 = v11;
      }
      while ( v13 < 3 );
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = *((_QWORD *)v23 + 4375);
            v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
            *(_DWORD *)(v24 + 20) &= v25;
            if ( v20 )
              sub_140418E4C(v23);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      v1 += 24512LL;
      v3 += 6128;
    }
    while ( v1 < v30 );
  }
  return result;
}
