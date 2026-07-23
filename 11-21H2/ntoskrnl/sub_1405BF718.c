/*
 * XREFs of sub_1405BF718 @ 0x1405BF718
 * Callers:
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 *     sub_140235E40 @ 0x140235E40 (sub_140235E40.c)
 *     sub_1402416A4 @ 0x1402416A4 (sub_1402416A4.c)
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 *     sub_140273A80 @ 0x140273A80 (sub_140273A80.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402C8740 @ 0x1402C8740 (sub_1402C8740.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405AD9AC @ 0x1405AD9AC (sub_1405AD9AC.c)
 *     sub_1405ADEB8 @ 0x1405ADEB8 (sub_1405ADEB8.c)
 *     sub_1405AF3BC @ 0x1405AF3BC (sub_1405AF3BC.c)
 *     sub_1405BFE08 @ 0x1405BFE08 (sub_1405BFE08.c)
 */

__int64 __fastcall sub_1405BF718(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, KIRQL a5)
{
  __int64 v5; // r13
  __int16 v6; // di
  int v8; // eax
  ULONG_PTR v9; // r15
  unsigned __int8 CurrentIrql; // al
  KIRQL v12; // di
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rbx
  unsigned __int8 v18; // al
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  __int64 v23; // r9
  int v24; // eax
  unsigned int v25; // edi
  _QWORD *v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  __int64 v30; // r9
  int v31; // eax
  unsigned __int64 v32; // r8
  struct _KPRCB *v33; // r9
  __int64 v34; // rdx
  signed __int32 v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  __int64 v38; // r9
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  __int64 v42; // r9
  int v43; // eax
  __int64 v44; // rbp
  __int64 v45; // r13
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  __int64 v48; // r9
  int v49; // eax
  __int64 v50; // rbx
  int v51; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r10
  int v55; // eax
  __int64 v56; // r9
  ULONG_PTR v57; // [rsp+30h] [rbp-58h]
  __int16 v58; // [rsp+90h] [rbp+8h]
  unsigned __int16 v59; // [rsp+98h] [rbp+10h]
  int v60; // [rsp+A0h] [rbp+18h]
  __int64 i; // [rsp+A8h] [rbp+20h]

  v5 = 0LL;
  v6 = *(_WORD *)a1;
  v59 = *(_WORD *)a2;
  v8 = 0;
  v58 = *(_WORD *)a1;
  v57 = a3 + a4;
  v9 = a3;
  for ( i = 0LL; v9 != v57; ++v9 )
  {
    v60 = v8 + 1;
    if ( (((_BYTE)v8 + 1) & 0xF) == 0 && (*(_DWORD *)(a1 + 200) & 0x40000000) != 0 || KeShouldYieldProcessor() )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v12 = a5;
        if ( a5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = ~(unsigned __int16)(-1LL << (a5 + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
      else
      {
        v12 = a5;
      }
      __writecr8(v12);
      --v9;
      a5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
    }
    else
    {
      v17 = 48 * v9 - 0x220000000000LL;
      v18 = sub_1402F2700(v17);
      v19 = *(_QWORD *)(v17 + 40);
      v20 = v18;
      if ( ((v19 >> 43) & 0x3FF) != v6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v21 = KeGetCurrentIrql();
            if ( v21 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v21 >= 2u )
            {
              v22 = KeGetCurrentPrcb();
              v23 = *((_QWORD *)v22 + 4375);
              v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
              v16 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
              *(_DWORD *)(v23 + 20) &= v24;
              if ( v16 )
                sub_140418E4C((__int64)v22);
            }
          }
        }
        __writecr8(v20);
        goto LABEL_92;
      }
      v25 = *(_BYTE *)(v17 + 34) & 7;
      if ( v25 == 5 )
      {
        if ( sub_140273354(48 * v9 - 0x220000000000LL) )
        {
          sub_1405ADEB8(v26, 0);
          sub_14026A784(a2, 1LL, 0LL, 1u);
          sub_14028CE10(a1, 1LL);
          v32 = 1LL;
          if ( (ULONG_PTR *)a1 != &StartContext )
            goto LABEL_49;
          v33 = KeGetCurrentPrcb();
          v34 = *((int *)v33 + 8615);
          if ( (_DWORD)v34 == -1 )
            goto LABEL_49;
          do
          {
            if ( (unsigned __int64)(v34 + 1) > 0x100 )
              break;
            v35 = _InterlockedCompareExchange((volatile signed __int32 *)v33 + 8615, v34 + 1, v34);
            v16 = (_DWORD)v34 == v35;
            v34 = v35;
            if ( v16 )
              goto LABEL_50;
          }
          while ( v35 != -1 );
          if ( (int)v34 > 192
            && (_DWORD)v34 == _InterlockedCompareExchange((volatile signed __int32 *)v33 + 8615, 192, v34) )
          {
            v32 = (int)v34 - 192 + 1LL;
          }
          if ( v32 )
LABEL_49:
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v32);
LABEL_50:
          *(_QWORD *)(v17 + 40) ^= (*(_QWORD *)(v17 + 40) ^ ((unsigned __int64)v59 << 43)) & 0x1FF80000000000LL;
          if ( (ULONG_PTR *)a2 != &StartContext )
          {
            ++*(_QWORD *)(a2 + 16720);
            *(_BYTE *)(a2 + 12) = 1;
          }
          --*(_QWORD *)(a1 + 16720);
          *(_BYTE *)(a1 + 12) = 1;
          sub_1402BF9C0(48 * v9 - 0x220000000000LL, 0x20u);
          i = ++v5;
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v36 = KeGetCurrentIrql();
              if ( v36 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v36 >= 2u )
              {
                v37 = KeGetCurrentPrcb();
                v38 = *((_QWORD *)v37 + 4375);
                v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                v16 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
                *(_DWORD *)(v38 + 20) &= v39;
                if ( v16 )
                  sub_140418E4C((__int64)v37);
              }
            }
          }
          __writecr8(v20);
          sub_1405BFE08(a2, a1, v9, 1LL);
          goto LABEL_91;
        }
        if ( !sub_140273A80(*(_QWORD *)(v17 + 16)) )
          goto LABEL_94;
        if ( qword_140C50780 )
        {
          if ( (v27 & 0x10) != 0 )
            v27 &= ~0x10uLL;
          else
            v27 &= ~qword_140C50780;
        }
        if ( HIDWORD(v27) != 4294967294 )
          goto LABEL_94;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v28 = KeGetCurrentIrql();
            if ( v28 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v28 >= 2u )
            {
              v29 = KeGetCurrentPrcb();
              v30 = *((_QWORD *)v29 + 4375);
              v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
              v16 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
              *(_DWORD *)(v30 + 20) &= v31;
              if ( v16 )
                sub_140418E4C((__int64)v29);
            }
          }
        }
        __writecr8(v20);
        sub_1402416A4(a1, 0LL, 0LL, 0);
      }
      else
      {
        if ( (v19 & 0x10000000000LL) == 0 )
        {
          if ( v25 > 1 )
            goto LABEL_94;
          sub_1402C8740(v9, 0LL, 0);
          if ( (ULONG_PTR *)a2 != &StartContext )
          {
            ++*(_QWORD *)(a2 + 16720);
            *(_BYTE *)(a2 + 12) = 1;
          }
          --*(_QWORD *)(a1 + 16720);
          *(_BYTE *)(a1 + 12) = 1;
          if ( (*(_BYTE *)(v17 + 35) & 0x40) != 0 )
            sub_1405AD9AC(48 * v9 - 0x220000000000LL, a1, a2);
          *(_QWORD *)(v17 + 40) ^= (*(_QWORD *)(v17 + 40) ^ ((unsigned __int64)v59 << 43)) & 0x1FF80000000000LL;
          sub_1402C6EB0(v9, ((*(_DWORD *)(v17 + 16) & 0x3E0) != 0LL) + 1);
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v40 = KeGetCurrentIrql();
              if ( v40 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v40 >= 2u )
              {
                v41 = KeGetCurrentPrcb();
                v42 = *((_QWORD *)v41 + 4375);
                v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                v16 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
                *(_DWORD *)(v42 + 20) &= v43;
                if ( v16 )
                  sub_140418E4C((__int64)v41);
              }
            }
          }
          __writecr8(v20);
          sub_1405BFE08(a2, a1, v9, 1LL);
          i = ++v5;
          goto LABEL_91;
        }
        v44 = sub_140235E40(48 * v9 - 0x220000000000LL);
        v25 = *(_BYTE *)(v44 + 34) & 7;
        v45 = (unsigned int)sub_140235E10(v44);
        if ( v44 != v17 )
          _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v25 > 1 )
        {
LABEL_94:
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v53 = KeGetCurrentIrql();
              if ( v53 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v53 >= 2u )
              {
                v54 = KeGetCurrentPrcb();
                v55 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                v56 = *((_QWORD *)v54 + 4375);
                v16 = (v55 & *(_DWORD *)(v56 + 20)) == 0;
                *(_DWORD *)(v56 + 20) &= v55;
                if ( v16 )
                  sub_140418E4C((__int64)v54);
              }
            }
          }
          __writecr8(v20);
          KeBugCheckEx(0x1Au, 0x41000uLL, v9, v25, 0LL);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v46 = KeGetCurrentIrql();
            if ( v46 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v46 >= 2u )
            {
              v47 = KeGetCurrentPrcb();
              v48 = *((_QWORD *)v47 + 4375);
              v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
              v16 = (v49 & *(_DWORD *)(v48 + 20)) == 0;
              *(_DWORD *)(v48 + 20) &= v49;
              if ( v16 )
                sub_140418E4C((__int64)v47);
            }
          }
        }
        __writecr8(v20);
        v50 = qword_14001C780[v45];
        if ( (ULONG_PTR *)a2 != &StartContext )
        {
          *(_QWORD *)(a2 + 16720) += v50;
          *(_BYTE *)(a2 + 12) = 1;
        }
        v51 = sub_1405AF3BC(v9, v45, a1, (_WORD *)a2);
        v5 = i;
        if ( v51 )
        {
          v5 = v50 + i;
          *(_BYTE *)(a1 + 12) = 1;
          v9 += v50;
          i += v50;
          *(_QWORD *)(a1 + 16720) -= v50;
        }
        else if ( (ULONG_PTR *)a2 != &StartContext )
        {
          *(_QWORD *)(a2 + 16720) -= v50;
          *(_BYTE *)(a2 + 12) = 1;
        }
      }
      --v9;
    }
LABEL_91:
    v6 = v58;
LABEL_92:
    v8 = v60;
  }
  return v5;
}
