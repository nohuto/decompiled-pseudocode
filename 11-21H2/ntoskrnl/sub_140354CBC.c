/*
 * XREFs of sub_140354CBC @ 0x140354CBC
 * Callers:
 *     sub_14022ED94 @ 0x14022ED94 (sub_14022ED94.c)
 *     sub_140355144 @ 0x140355144 (sub_140355144.c)
 *     sub_140355534 @ 0x140355534 (sub_140355534.c)
 *     PoFxCompleteIdleState @ 0x14045DD10 (PoFxCompleteIdleState.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14035489C @ 0x14035489C (sub_14035489C.c)
 *     sub_140354990 @ 0x140354990 (sub_140354990.c)
 *     sub_140354FB4 @ 0x140354FB4 (sub_140354FB4.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     IoAcquireRemoveLockEx @ 0x1403553A0 (IoAcquireRemoveLockEx.c)
 *     sub_1403556F4 @ 0x1403556F4 (sub_1403556F4.c)
 *     sub_140355774 @ 0x140355774 (sub_140355774.c)
 *     sub_1403562C8 @ 0x1403562C8 (sub_1403562C8.c)
 *     sub_140356454 @ 0x140356454 (sub_140356454.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_1403B6570 @ 0x1403B6570 (sub_1403B6570.c)
 *     sub_1403D93F4 @ 0x1403D93F4 (sub_1403D93F4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045DEFE @ 0x14045DEFE (sub_14045DEFE.c)
 *     sub_14045E1D6 @ 0x14045E1D6 (sub_14045E1D6.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_1405CBC30 @ 0x1405CBC30 (sub_1405CBC30.c)
 *     sub_1405D2C00 @ 0x1405D2C00 (sub_1405D2C00.c)
 *     sub_1405D4C64 @ 0x1405D4C64 (sub_1405D4C64.c)
 *     sub_1405DDD88 @ 0x1405DDD88 (sub_1405DDD88.c)
 *     sub_1405DDE24 @ 0x1405DDE24 (sub_1405DDE24.c)
 */

__int64 __fastcall sub_140354CBC(ULONG_PTR BugCheckParameter2, int *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  char v7; // r13
  ULONG_PTR v8; // rbx
  __int64 v9; // rcx
  char v10; // si
  unsigned __int64 v11; // rbp
  ULONG_PTR v12; // rsi
  ULONG_PTR v13; // rdi
  __int64 v14; // rbx
  unsigned __int64 v15; // r14
  __int64 v16; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  BOOLEAN v19; // al
  char v20; // al
  __int64 v21; // rdx
  struct _KPRCB *v22; // r10
  __int64 v23; // r9
  bool v24; // zf
  __int64 v25; // rsi
  __int64 v26; // rbp
  __int64 v27; // rbx
  int v28; // ecx
  signed __int32 v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rbp
  signed __int32 v36; // ebx
  __int64 v37; // r9
  __int64 v38; // rsi
  unsigned int v39; // ebx
  __int64 v40; // rbx
  unsigned __int64 v41; // rsi
  struct _KPRCB *v42; // r9
  __int64 v43; // r8
  __int64 v44; // rbx
  int v45; // esi
  __int64 v46; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v49; // eax
  _QWORD v50[4]; // [rsp+40h] [rbp-68h] BYREF
  int v51; // [rsp+60h] [rbp-48h]
  int v52; // [rsp+64h] [rbp-44h]

  result = *a2;
  if ( (unsigned int)result > 8 )
    sub_1405CAE6C(0x603uLL, BugCheckParameter2, *a2, 0LL);
  while ( 1 )
  {
    v6 = *a2;
    v7 = 0;
    if ( !(_DWORD)v6 )
    {
      v12 = *((_QWORD *)a2 + 1);
      if ( BugCheckParameter2 )
LABEL_112:
        sub_1405CAE6C(0x603uLL, BugCheckParameter2, *a2, 0LL);
      v13 = (unsigned int)a2[4];
      if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 828) )
        sub_1405CAE6C(0x611uLL, 0LL, v12, v13);
      _mm_lfence();
      v14 = *(_QWORD *)(*(_QWORD *)(v12 + 832) + 8 * v13);
      if ( *(_DWORD *)(v14 + 152) )
        sub_1405CAE6C(0x615uLL, 0LL, v13, 0LL);
      if ( *(int *)(v14 + 88) < 0 )
        sub_1405CAE6C(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v12 + 832) + 8 * v13), 1uLL);
      if ( (*(_DWORD *)(v14 + 88) & 0x3FFFFFFF) == 0 )
        sub_1405CAE6C(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v12 + 832) + 8 * v13), 2uLL);
      if ( *(_DWORD *)(v14 + 140) )
        sub_1405CAE6C(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v12 + 832) + 8 * v13), 3uLL);
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 200));
      if ( *(int *)(v14 + 216) > 0 )
      {
        *(_QWORD *)(v14 + 224) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v14 + 208) = 1;
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v14 + 200));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v16 = *((_QWORD *)CurrentPrcb + 4375);
            v24 = (v49 & *(_DWORD *)(v16 + 20)) == 0;
            *(_DWORD *)(v16 + 20) &= v49;
            if ( v24 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v15);
      LOBYTE(v16) = 1;
      sub_1403556F4(*(_QWORD *)(v12 + 48), (unsigned int)v13, v16);
      if ( *(_QWORD *)(v12 + 112) )
        sub_14042A5E0(*(_QWORD *)(v12 + 192), (unsigned int)v13);
      sub_140356454(*(_QWORD *)(v12 + 56), 208 * v13 + *(_QWORD *)(v12 + 56) + 192, 2, 3);
      return sub_140355774(v12);
    }
    if ( (_DWORD)v6 != 1 )
      break;
    v25 = *((_QWORD *)a2 + 1);
    if ( BugCheckParameter2 )
      goto LABEL_112;
    v26 = (unsigned int)a2[4];
    if ( (unsigned int)v26 >= *(_DWORD *)(v25 + 828) )
      sub_1405CAE6C(0x611uLL, 0LL, *((_QWORD *)a2 + 1), (unsigned int)a2[4]);
    _mm_lfence();
    v27 = *(_QWORD *)(*(_QWORD *)(v25 + 832) + 8 * v26);
    if ( (unsigned int)a2[5] >= *(_DWORD *)(v27 + 156) )
      sub_1405CAE6C(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v25 + 832) + 8 * v26), 0LL);
    v28 = a2[5];
    if ( v28 == *(_DWORD *)(v27 + 152) )
      sub_1405CAE6C(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v25 + 832) + 8 * v26), 1uLL);
    if ( v28 && *(_DWORD *)(v27 + 152) )
      sub_1405CAE6C(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v25 + 832) + 8 * v26), 2uLL);
    *(_DWORD *)(v27 + 152) = a2[5];
    *(_DWORD *)(v27 + 140) = 2;
    sub_14042A5E0(*(_QWORD *)(v25 + 192), (unsigned int)v26);
    v29 = _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 140), 0xFFFFFFFF);
    v30 = *(_QWORD *)(v25 + 48);
    if ( v29 == 1 )
    {
      sub_14045E1D6(v30, (unsigned int)v26, (unsigned int)a2[5]);
      result = sub_14045DEFE(v25, (unsigned int)v26, v31, a2);
      v7 = result;
    }
    else
    {
      result = sub_140355058(v30, (unsigned int)v26, 14LL);
    }
LABEL_37:
    if ( !v7 )
      return result;
  }
  switch ( (_DWORD)v6 )
  {
    case 2:
      v8 = *((_QWORD *)a2 + 1);
      if ( BugCheckParameter2 )
        goto LABEL_112;
      v9 = *(_QWORD *)(v8 + 48);
      v10 = *((_BYTE *)a2 + 16);
      if ( v9 )
      {
        LOBYTE(a3) = *((_BYTE *)a2 + 16);
        LOBYTE(v6) = 1;
        sub_140354FB4(v9, v6, a3);
      }
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 360));
      if ( !v10 )
      {
        _m_prefetchw((const void *)(v8 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v8 + 32), 0) & 0x80u) != 0 )
          sub_1405CAE6C(0x609uLL, 0LL, v8, 1uLL);
        sub_1403562C8(v8, 0LL, 0LL);
        _InterlockedOr((volatile signed __int32 *)(v8 + 32), 0x80u);
        if ( *(_QWORD *)(v8 + 144) )
        {
          if ( *(_DWORD *)(v8 + 36) || *(_DWORD *)(v8 + 40) || (*(_DWORD *)(v8 + 32) & 4) != 0 )
            sub_1405CAE6C(0x610uLL, 0LL, v8, 0LL);
          *(_DWORD *)(v8 + 40) = 2;
          if ( !sub_14035489C(v8) )
          {
            sub_140354FB4(*(_QWORD *)(v8 + 48), 0LL, 0LL);
            sub_14042A5E0(*(_QWORD *)(v8 + 192), v21);
            _InterlockedOr((volatile signed __int32 *)(v8 + 32), 0x40u);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 40), 0xFFFFFFFF) != 1 )
              sub_140355058(*(_QWORD *)(v8 + 48), 0LL, 17LL);
          }
        }
        else
        {
          sub_140354FB4(*(_QWORD *)(v8 + 48), 0LL, 0LL);
          _InterlockedOr((volatile signed __int32 *)(v8 + 32), 0x40u);
        }
        goto LABEL_35;
      }
      *(_DWORD *)(v8 + 36) = 2;
      _m_prefetchw((const void *)(v8 + 32));
      v17 = *(_DWORD *)(v8 + 32);
      do
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 32), v17 & 0xFFFFFF7F, v17);
      }
      while ( v18 != v17 );
      if ( (v17 & 0x80u) == 0 )
        sub_1405CAE6C(0x609uLL, 0LL, v8, 0LL);
      _m_prefetchw((const void *)(v8 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v8 + 32), 0) & 4) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v8 + 32), 0xFFFFFFFB);
        *(_DWORD *)(v8 + 40) = 0;
        v19 = KeCancelTimer((PKTIMER)(v8 + 368));
        _InterlockedAdd((volatile signed __int32 *)(v8 + 36), 0xFFFFFFFF);
        if ( !v19 )
          goto LABEL_35;
        v20 = sub_140354990(v8, (__int64)a2);
      }
      else
      {
        if ( *(_DWORD *)(v8 + 40) )
        {
LABEL_35:
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 360));
          result = (unsigned int)dword_140D06B08;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              result = KeGetCurrentIrql();
              if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)result >= 2u )
              {
                v22 = KeGetCurrentPrcb();
                v23 = *((_QWORD *)v22 + 4375);
                result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
                v24 = ((unsigned int)result & *(_DWORD *)(v23 + 20)) == 0;
                a3 = (unsigned int)result & *(_DWORD *)(v23 + 20);
                *(_DWORD *)(v23 + 20) = a3;
                if ( v24 )
                  result = sub_140418E4C(v22);
              }
            }
          }
          __writecr8(v11);
          goto LABEL_37;
        }
        v20 = sub_1403B6570(v8);
      }
      v7 = v20;
      goto LABEL_35;
    case 3:
      v44 = *((_QWORD *)a2 + 1);
      v45 = -1073741822;
      if ( *(_QWORD *)(v44 + 152) )
      {
        v45 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v44 + 240), 0LL, &File, 1u, 0x20u);
        if ( v45 >= 0 )
        {
          v45 = sub_14042A5E0(*(_QWORD *)(v44 + 192), *((_QWORD *)a2 + 2));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 244), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(v44 + 248), 0, 0);
        }
      }
      v46 = *(_QWORD *)(v44 + 56);
      v52 = 0;
      v51 = v45;
      v50[0] = *(_QWORD *)(*(_QWORD *)(v46 + 32) + 72LL);
      v50[1] = *((_QWORD *)a2 + 2);
      v50[2] = *((_QWORD *)a2 + 3);
      v50[3] = 0LL;
      return sub_14042A5E0(15LL, v50);
    case 4:
      v40 = *((_QWORD *)a2 + 1);
      v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v40 + 360));
      if ( *((_BYTE *)a2 + 16) )
        _InterlockedOr((volatile signed __int32 *)(v40 + 32), 8u);
      else
        _InterlockedAnd((volatile signed __int32 *)(v40 + 32), 0xFFFFFFF7);
      sub_1403D93F4(v40);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v40 + 360));
      result = (unsigned int)dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v41 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            v42 = KeGetCurrentPrcb();
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
            v43 = *((_QWORD *)v42 + 4375);
            v24 = ((unsigned int)result & *(_DWORD *)(v43 + 20)) == 0;
            *(_DWORD *)(v43 + 20) &= result;
            if ( v24 )
              result = sub_140418E4C(v42);
          }
        }
      }
      __writecr8(v41);
      break;
    case 5:
      v38 = *((_QWORD *)a2 + 1);
      if ( !BugCheckParameter2 )
        goto LABEL_81;
      v39 = a2[4];
      if ( v39 >= *(_DWORD *)(v38 + 828) )
        sub_1405CAE6C(0x611uLL, BugCheckParameter2, *((_QWORD *)a2 + 1), (unsigned int)a2[4]);
      sub_140355058(*(_QWORD *)(v38 + 48), v39, 18LL);
      return sub_1405D4C64(*(_QWORD *)(v38 + 56), v39);
    case 6:
      v32 = *((_QWORD *)a2 + 1);
      if ( BugCheckParameter2 )
      {
        v33 = (unsigned int)a2[4];
        if ( (unsigned int)v33 >= *(_DWORD *)(v32 + 828) )
          sub_1405CAE6C(0x611uLL, BugCheckParameter2, *((_QWORD *)a2 + 1), (unsigned int)a2[4]);
        _mm_lfence();
        v34 = *(_QWORD *)(*(_QWORD *)(v32 + 832) + 8 * v33);
        v35 = *(_QWORD *)(v34 + 424);
        v36 = _InterlockedDecrement((volatile signed __int32 *)(v35 + 40));
        _InterlockedOr((volatile signed __int32 *)(v35 + 40), 0x20000000u);
        if ( (v36 & 0x8000000) == 0 )
          sub_140355058(*(_QWORD *)(v32 + 48), v33, 20LL);
        sub_1405D2C00(v35, v36 & 7);
        LOBYTE(v37) = *((_BYTE *)a2 + 20);
        return sub_1405CBC30(v32, *(unsigned int *)(v34 + 16), *(_QWORD *)(v34 + 424), v37);
      }
LABEL_81:
      sub_1405CAE6C(0x603uLL, 0LL, *a2, 0LL);
    case 7:
      return sub_1405DDD88(*((_QWORD *)a2 + 1));
    case 8:
      return sub_1405DDE24(*((_QWORD *)a2 + 1));
    default:
      return result;
  }
  return result;
}
