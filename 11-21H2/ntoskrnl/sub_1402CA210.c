/*
 * XREFs of sub_1402CA210 @ 0x1402CA210
 * Callers:
 *     sub_14022FD10 @ 0x14022FD10 (sub_14022FD10.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 * Callees:
 *     sub_140264C90 @ 0x140264C90 (sub_140264C90.c)
 *     sub_140268654 @ 0x140268654 (sub_140268654.c)
 *     sub_1402C6AA0 @ 0x1402C6AA0 (sub_1402C6AA0.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405B7574 @ 0x1405B7574 (sub_1405B7574.c)
 *     sub_1405B7E7C @ 0x1405B7E7C (sub_1405B7E7C.c)
 */

__int64 __fastcall sub_1402CA210(__int64 a1, unsigned int a2, int a3, unsigned __int64 a4)
{
  __int16 v4; // r12
  unsigned int v5; // r15d
  unsigned __int64 v6; // r14
  int v7; // ebp
  _QWORD *v8; // rbx
  int v9; // edx
  __int64 v10; // rsi
  _QWORD *v11; // rax
  int v12; // r15d
  int v13; // ebx
  int v14; // r13d
  unsigned int v15; // ebp
  unsigned __int8 CurrentIrql; // r14
  int v17; // eax
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  __int64 v29; // r8
  int v30; // eax
  bool v31; // zf
  int v32; // r8d
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  unsigned __int8 v37; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v39; // r9
  int v40; // edx
  unsigned int v41; // [rsp+50h] [rbp-118h]
  unsigned int v42; // [rsp+58h] [rbp-110h]
  int v44; // [rsp+60h] [rbp-108h]
  __int64 v46; // [rsp+68h] [rbp-100h]
  int v49; // [rsp+80h] [rbp-E8h]
  __int64 v50; // [rsp+88h] [rbp-E0h]
  __int64 v51; // [rsp+90h] [rbp-D8h] BYREF
  int v52; // [rsp+98h] [rbp-D0h]
  _DWORD v53[32]; // [rsp+9Ch] [rbp-CCh] BYREF

  v4 = a3;
  if ( (a3 & 0x10000) == 0 )
  {
    v5 = dword_140D05004;
    v41 = 0;
    if ( (unsigned int)dword_140D05004 > 1 )
      v41 = (unsigned __int16)(unsigned __int8)byte_140D069E2 & (unsigned __int16)(a2 >> byte_140C506CD);
    v42 = a2 >> byte_140C506CC;
    v6 = 0LL;
    v50 = 24512LL * (a2 >> byte_140C506CC);
    v7 = 0;
    v46 = v50 + *(_QWORD *)(a1 + 16);
    v49 = (a2 & ~dword_140C50738) << 12;
    v44 = a3 & 2;
    v8 = (_QWORD *)(v46 + 22560);
    v9 = a3 & 0x1000;
    v10 = 0LL;
    do
    {
      if ( v5 > 1 )
        v11 = (_QWORD *)(v46 + 8 * (v10 + 2 * (v41 + 1420LL)));
      else
        v11 = v8;
      v6 += *v11;
      if ( v9 )
      {
        v26 = sub_140264C90(v46, v41, v7);
        v9 = v4 & 0x1000;
        v6 += v26;
      }
      ++v7;
      ++v10;
      ++v8;
    }
    while ( v10 <= ((v4 & 2) == 0) );
    if ( v6 < a4 )
    {
      v12 = 1;
      if ( (a3 & 0x400) != 0 )
      {
        v12 = 0;
      }
      else if ( (a3 & 0x800) != 0 )
      {
        v12 = 2;
      }
      v13 = 39;
      v14 = 0;
      if ( !v44 )
        v13 = 35;
      if ( (a3 & 0x20000) != 0 )
        v14 = 2;
      v15 = 3;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v24 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v24 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v17 = v13;
          v13 |= 0x80u;
          if ( --v15 >= 2 )
            v13 = v17;
          v18 = sub_1402CA5E0(a1, v49, v15, 1, v42, v41, v12, v13, 0LL);
          if ( v18 )
          {
LABEL_22:
            if ( (v13 & 0x80u) != 0 )
            {
              if ( !v15 )
              {
                ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v46 + 22848));
                v25 = 1LL;
                do
                {
                  ++*(_DWORD *)(v50 + *(_QWORD *)(a1 + 16) + 22788);
                  --v25;
                }
                while ( v25 );
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v46 + 22848));
              }
              do
              {
                sub_140268654(v46, v18, v15, v15 + 1, v18);
                ++v15;
              }
              while ( v15 <= 1 );
            }
            v19 = *(_QWORD *)(a1 + 16896);
            if ( v19 )
              --v19;
            if ( v19 >= 0x9F
              || (v32 = *((_DWORD *)KeGetCurrentThread() + 345), (v32 & 0xC) == 8)
              || (v19 >= 0x20 || (ULONG_PTR *)a1 != &StartContext)
              && ((v32 & 2) != 0 && v19 >= 0x21 || (*(_DWORD *)(a1 + 4) & 0x20) != 0) )
            {
              v20 = v18 + 48 * (a2 & (unsigned __int64)(qword_14001C780[v15] - 1));
            }
            else
            {
              v20 = 0LL;
            }
            v21 = *(_QWORD *)(v18 + 16);
            v22 = v21;
            if ( qword_140C50780 && (v21 & 0x10) == 0 )
              v22 = ~qword_140C50780 & v21;
            if ( HIDWORD(v22) == 4294967293 && (dword_140D0689C & 0x200000) != 0 )
            {
              memset(v53, 0, sizeof(v53));
              v51 = 1LL;
              v52 = 1;
              if ( (unsigned int)sub_1405B7574(&v51, 0xAAAAAAAAAAAAAAABuLL * ((v18 + 0x220000000000LL) >> 4), v15) )
                sub_1405B7E7C(&v51, v33, v34, v35);
              v36 = sub_14033B6A0(*(_QWORD *)(v18 + 16), 0LL);
              LOWORD(v21) = v36;
              *(_QWORD *)(v18 + 16) = v36;
            }
            sub_1402C6AA0(v18, v15, 1, (v21 & 0x3E0) != 0, v20, 0LL, 0LL);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v37 = KeGetCurrentIrql();
                if ( v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v39 = *((_QWORD *)CurrentPrcb + 4375);
                  v40 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v31 = (v40 & *(_DWORD *)(v39 + 20)) == 0;
                  *(_DWORD *)(v39 + 20) &= v40;
                  if ( v31 )
                    sub_140418E4C(CurrentPrcb);
                }
              }
            }
            __writecr8(CurrentIrql);
            return v20;
          }
          if ( v15 == v14 )
            break;
          if ( !v15 )
            goto LABEL_22;
        }
        if ( (v13 & 1) == 0 )
          break;
        v13 &= 0xFFFFFF7E;
        v15 = 3;
      }
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = *((_QWORD *)v28 + 4375);
            v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v31 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
            *(_DWORD *)(v29 + 20) &= v30;
            if ( v31 )
              sub_140418E4C(v28);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  return 0LL;
}
