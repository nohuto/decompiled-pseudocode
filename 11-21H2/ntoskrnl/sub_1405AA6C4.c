/*
 * XREFs of sub_1405AA6C4 @ 0x1405AA6C4
 * Callers:
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 *     sub_14097DFA0 @ 0x14097DFA0 (sub_14097DFA0.c)
 *     sub_14097E270 @ 0x14097E270 (sub_14097E270.c)
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405AAEC8 @ 0x1405AAEC8 (sub_1405AAEC8.c)
 *     sub_14097F588 @ 0x14097F588 (sub_14097F588.c)
 */

char __fastcall sub_1405AA6C4(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v6; // rcx
  unsigned int v7; // r15d
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rbx
  ULONG_PTR *v15; // rsi
  __int64 v16; // r14
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  unsigned __int8 v19; // r11
  char v20; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r9
  int v24; // eax
  bool v25; // zf
  unsigned __int64 v26; // r8
  unsigned __int8 v28; // [rsp+20h] [rbp-E0h]
  ULONG_PTR *v30; // [rsp+28h] [rbp-D8h]
  __int64 v31; // [rsp+28h] [rbp-D8h]
  __int64 v32; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v33; // [rsp+38h] [rbp-C8h]
  signed __int64 *v34; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v35; // [rsp+48h] [rbp-B8h]
  struct _KTHREAD *v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2[518]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(v3 + 16);
  v7 = 0;
  v30 = &BugCheckParameter2[6];
  v8 = 0LL;
  v37 = v3;
  v36 = CurrentThread;
  v33 = v6;
  if ( !a3 )
  {
    --*((_WORD *)CurrentThread + 243);
    ExAcquireAutoExpandPushLockExclusive(v3 + 64, 0LL);
    v6 = v33;
  }
  v9 = *(_QWORD *)(v3 + 32);
  v34 = (signed __int64 *)v9;
  if ( a2 )
  {
    v10 = a2;
    do
    {
      v11 = v10;
      v32 = *(_QWORD *)(v10 + 16);
      v12 = 0LL;
      v13 = 0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4);
      v14 = 0LL;
      v35 = v13 / v6;
      v15 = v30;
      v16 = v11 + 24;
      do
      {
        v31 = v12;
        v17 = sub_1402F2700(v16 - 24);
        v18 = *(_QWORD *)v16;
        v19 = v17;
        v28 = v17;
        if ( (*(_QWORD *)v16 & 0x4000000000000000LL) == 0 )
        {
          v18 |= 0x4000000000000000uLL;
          *(_QWORD *)v16 = v18;
        }
        v20 = *(_BYTE *)(v16 + 10);
        if ( (v20 & 8) != 0 )
        {
          v18 = *(_QWORD *)v16;
          *(_BYTE *)(v16 + 10) = v20 & 0xF7;
        }
        v12 = v18 & 0x3FFFFFFFFFFFFFFFLL;
        if ( (v18 & 0x3FFFFFFFFFFFFFFFLL) == 0 )
        {
          *(_QWORD *)(v16 - 8) = 0LL;
          *(_QWORD *)v16 = v18 ^ (v18 ^ 1) & 0x3FFFFFFFFFFFFFFFLL;
        }
        _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v19 <= 0xFu )
            {
              v18 = 2LL;
              if ( CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v18 = -1LL << (v19 + 1);
                v23 = *((_QWORD *)CurrentPrcb + 4375);
                v24 = ~(unsigned __int16)v18;
                v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
                *(_DWORD *)(v23 + 20) &= v24;
                if ( v25 )
                {
                  sub_140418E4C((__int64)CurrentPrcb);
                  v19 = v28;
                }
              }
            }
          }
        }
        LOBYTE(v9) = v19;
        __writecr8(v19);
        if ( v14 )
          v12 = v31;
        if ( !v12 )
        {
          if ( !v14 )
          {
            LOBYTE(v9) = (_BYTE)v34;
            _bittestandreset64(v34, v35);
          }
          if ( v7 == 512 )
          {
            BugCheckParameter2[0] = 0LL;
            BugCheckParameter2[4] = 0LL;
            LODWORD(BugCheckParameter2[1]) = 135216;
            BugCheckParameter2[5] = 0x200000LL;
            LOBYTE(v9) = sub_140221A30((ULONG_PTR)BugCheckParameter2, 0);
            v8 += 512LL;
            v15 = &BugCheckParameter2[6];
            v7 = 0;
          }
          *v15++ = v13;
          ++v7;
        }
        v6 = v33;
        ++v14;
        v16 += 48LL;
        ++v13;
      }
      while ( v14 < v33 );
      v30 = v15;
      v10 = v32;
    }
    while ( v32 );
    CurrentThread = v36;
    v3 = v37;
    if ( v7 )
    {
      BugCheckParameter2[0] = 0LL;
      BugCheckParameter2[4] = 0LL;
      BugCheckParameter2[5] = v7 << 12;
      LOWORD(BugCheckParameter2[1]) = 8 * (v7 + 6);
      WORD1(BugCheckParameter2[1]) = 2;
      sub_140221A30((ULONG_PTR)BugCheckParameter2, 0);
      LOBYTE(v9) = v7;
      v8 += v7;
    }
    if ( v8 )
    {
      v9 = sub_1405AAEC8(v37, v18, -v8);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 17512), v26);
      LODWORD(v9) = *(_DWORD *)(v37 + 8);
      if ( (v9 & 1) != 0 )
        LOBYTE(v9) = sub_14097F588(*((_QWORD *)v36 + 23), v8);
    }
  }
  if ( !a3 )
  {
    LOBYTE(v9) = ExReleaseAutoExpandPushLockExclusive(v3 + 64, 0LL);
    v25 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v25 )
    {
      v9 = (__int64)CurrentThread + 152;
      if ( *(_QWORD *)v9 != v9 )
        LOBYTE(v9) = KiCheckForKernelApcDelivery();
    }
  }
  return v9;
}
