/*
 * XREFs of sub_14038F3B8 @ 0x14038F3B8
 * Callers:
 *     sub_14038A428 @ 0x14038A428 (sub_14038A428.c)
 *     sub_14038F620 @ 0x14038F620 (sub_14038F620.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14038A790 @ 0x14038A790 (sub_14038A790.c)
 *     sub_14038F830 @ 0x14038F830 (sub_14038F830.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

volatile LONG *__fastcall sub_14038F3B8(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r9
  volatile LONG *result; // rax
  int *v6; // rax
  __int64 *v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // r13
  unsigned int v11; // ecx
  __int64 i; // rbp
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD **v16; // r14
  __int64 v17; // rax
  _QWORD *v18; // rsi
  bool v19; // zf
  KIRQL v20; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r9
  int v24; // eax
  volatile LONG *SpinLock; // [rsp+20h] [rbp-A8h]
  __int64 v26; // [rsp+28h] [rbp-A0h]
  __int64 v27; // [rsp+30h] [rbp-98h]
  __int64 v28; // [rsp+38h] [rbp-90h]
  __int64 *v29; // [rsp+40h] [rbp-88h]
  int *v30; // [rsp+48h] [rbp-80h]
  unsigned __int64 v31; // [rsp+50h] [rbp-78h]
  __int64 v32; // [rsp+58h] [rbp-70h]
  unsigned __int64 v33; // [rsp+60h] [rbp-68h]
  unsigned __int64 v34; // [rsp+68h] [rbp-60h]
  unsigned __int64 v35; // [rsp+70h] [rbp-58h]
  unsigned __int8 v37; // [rsp+D8h] [rbp+10h]
  int v38; // [rsp+E0h] [rbp+18h]
  int v39; // [rsp+E8h] [rbp+20h]

  v38 = a3;
  v3 = *(_QWORD *)(a2 + 16);
  v4 = a1;
  result = (volatile LONG *)(unsigned __int16)word_140D05000;
  v37 = 17;
  v33 = v3;
  v35 = v3 + 24512LL * (unsigned __int16)word_140D05000;
  if ( v3 < v35 )
  {
    result = (volatile LONG *)(v3 + 22848);
    SpinLock = (volatile LONG *)(v3 + 22848);
    do
    {
      if ( !a3 )
      {
        v20 = ExAcquireSpinLockExclusive(result);
        v4 = a1;
        v37 = v20;
      }
      v6 = dword_140C507C0;
      v31 = v3;
      v7 = qword_14001C780;
      v30 = dword_140C507C0;
      v8 = v3;
      v29 = qword_14001C780;
      v32 = 3LL;
      do
      {
        v9 = *v7;
        v10 = 0LL;
        v11 = *v6;
        v34 = v9;
        v39 = *v6;
        v28 = 0LL;
        do
        {
          for ( i = 0LL; i <= 1; ++i )
          {
            v13 = 0;
            if ( dword_140D05004 )
            {
              do
              {
                v14 = 4LL;
                v27 = 4LL;
                v15 = 32 * (4 * (v10 + i) + v13) + 560;
                do
                {
                  v16 = *(_QWORD ***)(v8 + v15);
                  if ( v11 )
                  {
                    v17 = v11;
                    v26 = v11;
                    do
                    {
                      v18 = *v16;
                      if ( *v16 != v16 )
                      {
                        do
                        {
                          if ( v38 )
                            sub_14038F830(v4, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v18 + 0x44000000000LL) >> 4), v34);
                          else
                            sub_14038A790(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v18 + 0x44000000000LL) >> 4), v34);
                          v18 = (_QWORD *)*v18;
                          v4 = a1;
                        }
                        while ( v18 != v16 );
                        v17 = v26;
                      }
                      v4 = a1;
                      v16 += 3;
                      v26 = --v17;
                    }
                    while ( v17 );
                    v14 = v27;
                    v8 = v31;
                    v11 = v39;
                  }
                  v4 = a1;
                  v15 += 8LL;
                  v27 = --v14;
                }
                while ( v14 );
                ++v13;
              }
              while ( v13 < dword_140D05004 );
              v10 = v28;
            }
            v4 = a1;
          }
          v10 += 2LL;
          v28 = v10;
        }
        while ( v10 <= 2 );
        v8 += 1072LL;
        v7 = v29 + 1;
        v6 = v30 + 1;
        ++v29;
        v19 = v32-- == 1;
        ++v30;
        v31 = v8;
      }
      while ( !v19 );
      if ( !v38 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v37 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v23 = *((_QWORD *)CurrentPrcb + 4375);
              v24 = ~(unsigned __int16)(-1LL << (v37 + 1));
              v19 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
              *(_DWORD *)(v23 + 20) &= v24;
              if ( v19 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v37);
      }
      a3 = v38;
      v3 = v33 + 24512;
      v4 = a1;
      result = SpinLock + 6128;
      v33 = v3;
      SpinLock += 6128;
    }
    while ( v3 < v35 );
  }
  return result;
}
