/*
 * XREFs of sub_1405C20CC @ 0x1405C20CC
 * Callers:
 *     sub_1405C1CE0 @ 0x1405C1CE0 (sub_1405C1CE0.c)
 * Callees:
 *     sub_14026E05C @ 0x14026E05C (sub_14026E05C.c)
 *     sub_14026E1F4 @ 0x14026E1F4 (sub_14026E1F4.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405B4A34 @ 0x1405B4A34 (sub_1405B4A34.c)
 *     sub_1405C1154 @ 0x1405C1154 (sub_1405C1154.c)
 */

__int64 __fastcall sub_1405C20CC(ULONG_PTR *a1, __int64 a2)
{
  ULONG_PTR *v3; // rbx
  ULONG_PTR v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v14; // rdx
  bool v15; // zf
  signed __int32 v16; // eax
  volatile LONG *v17; // rsi
  unsigned __int64 v18; // rbx
  ULONG_PTR v19; // rdx
  _QWORD *v20; // r10
  _QWORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v24; // r10
  __int64 v25; // r9
  int v26; // edx
  __int64 result; // rax
  struct _KPRCB *v28; // r9
  __int64 v29; // r8
  _QWORD v31[12]; // [rsp+30h] [rbp-49h] BYREF

  v3 = a1;
  memset(v31, 0, sizeof(v31));
  v4 = *v3;
  v5 = *((_QWORD *)KeGetCurrentThread() + 23);
  v6 = *(_QWORD *)(v5 + 1680);
  v7 = *(_QWORD *)(v6 + 328);
  LODWORD(v3) = *(unsigned __int8 *)(48 * *v3 - 0x220000000000LL + 34) >> 6;
  sub_1402C1550(v4);
  v8 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v5 + 1838));
  sub_14026E1F4(v31);
  v9 = (unsigned int)v3 * (unsigned __int16)word_140D05000;
  v10 = 16 * a2;
  *(_DWORD *)(v7 + 24) = *(_DWORD *)(v8 + 15912);
  v12 = (_QWORD *)(v7 + 8 * (v11 + v9 + 2 * (v11 + v9 + 2)));
  if ( 16 * a2 )
  {
    sub_14028CE10(v8, 16 * a2);
    if ( (ULONG_PTR *)v8 != &StartContext )
      goto LABEL_13;
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = *((int *)CurrentPrcb + 8615);
    if ( (_DWORD)v14 == -1 )
      goto LABEL_13;
    if ( v10 + v14 <= 0x100 )
    {
      do
      {
        if ( v10 >= 0x80000 )
          break;
        v16 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v10 + v14, v14);
        v15 = (_DWORD)v14 == v16;
        LODWORD(v14) = v16;
        if ( v15 )
          goto LABEL_14;
      }
      while ( v16 != -1 && v10 + v16 <= 0x100 );
    }
    if ( (int)v14 > 192
      && (_DWORD)v14 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v14) )
    {
      v10 += (int)v14 - 192;
    }
    if ( v10 )
LABEL_13:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16960), v10);
  }
LABEL_14:
  v17 = (volatile LONG *)(v6 + 336);
  v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 336));
  if ( a2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = a1[--a2];
        v20 = (_QWORD *)(48 * v19 - 0x220000000000LL);
        if ( (_QWORD *)*v12 != v12
          && (((0xAAAAAAAAAAAAAAABuLL * ((*v12 + 0x220000000000LL) >> 4)) ^ v19) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
        {
          sub_1405C1154(&v31[6], v12);
          v31[8] += v12[2];
          v12[2] = 0LL;
        }
        v21 = (_QWORD *)v12[1];
        if ( (_QWORD *)*v21 != v12 )
          __fastfail(3u);
        *v20 = v12;
        v20[1] = v21;
        *v21 = v20;
        v12[1] = v20;
        if ( ++v12[2] == 32LL )
        {
          sub_1405C1154(&v31[6], v12);
          v31[8] += v12[2];
          v12[2] = 0LL;
        }
        if ( v31[8] )
          break;
        if ( !a2 )
          goto LABEL_35;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v17);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v22 = (unsigned int)(v18 + 1);
            v25 = *((_QWORD *)v24 + 4375);
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
            v15 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
            *(_DWORD *)(v25 + 20) &= v26;
            if ( v15 )
              sub_140418E4C((__int64)v24);
          }
        }
      }
      __writecr8(v18);
      if ( v31[8] != 32LL
        || (result = sub_1405B4A34(
                       v22,
                       (0xAAAAAAAAAAAAAAABuLL * ((v31[6] + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFFFFE00uLL),
            !(_DWORD)result) )
      {
        result = sub_14026E05C(v8, (__int64)v31, 1u, 0LL);
      }
      if ( !a2 )
        break;
      sub_14026E1F4(v31);
      ExAcquireSpinLockExclusive(v17);
    }
  }
  else
  {
LABEL_35:
    ExReleaseSpinLockExclusiveFromDpcLevel(v17);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v18 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v29 = *((_QWORD *)v28 + 4375);
          v15 = ((unsigned int)result & *(_DWORD *)(v29 + 20)) == 0;
          *(_DWORD *)(v29 + 20) &= result;
          if ( v15 )
            result = sub_140418E4C((__int64)v28);
        }
      }
    }
    __writecr8(v18);
  }
  return result;
}
