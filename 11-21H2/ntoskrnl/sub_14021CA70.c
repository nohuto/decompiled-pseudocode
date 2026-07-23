/*
 * XREFs of sub_14021CA70 @ 0x14021CA70
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     sub_1402AE9D0 @ 0x1402AE9D0 (sub_1402AE9D0.c)
 *     sub_1402B1170 @ 0x1402B1170 (sub_1402B1170.c)
 *     sub_14032BD70 @ 0x14032BD70 (sub_14032BD70.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     sub_14021CD50 @ 0x14021CD50 (sub_14021CD50.c)
 *     sub_140229D30 @ 0x140229D30 (sub_140229D30.c)
 *     sub_14024E928 @ 0x14024E928 (sub_14024E928.c)
 *     sub_140280754 @ 0x140280754 (sub_140280754.c)
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 */

__int64 __fastcall sub_14021CA70(__int64 a1, __int64 a2, int a3)
{
  __int16 v3; // r9
  __int64 result; // rax
  int v7; // esi
  int v8; // r10d
  int v9; // edx
  int v10; // ebx
  volatile __int64 *v11; // rbp
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  struct _KPRCB *v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  __int64 v21; // r9
  int v22; // eax
  unsigned __int8 v23; // bp
  __int64 v24; // r9
  struct _KPRCB *v25; // r14
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  __int64 v28; // r9
  int v29; // eax
  bool v30; // zf
  int v31; // eax
  struct _KPRCB *v32; // r9
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int128 v36; // [rsp+30h] [rbp-48h] BYREF
  __int64 v37; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *(_WORD *)(a1 + 26);
  result = 0LL;
  v7 = a1;
  v36 = 0LL;
  v37 = 0LL;
  if ( (v3 & 8) == 0 )
  {
    v8 = 0;
    if ( (v3 & 4) != 0 )
    {
      result = *(_QWORD *)(a2 + 544);
      v9 = *(_DWORD *)(a2 + 1376);
      if ( (*(_DWORD *)(result + 1124) & 0x100000) != 0 || (v9 & 0xE00u) < 0x400 )
        v8 = 4;
    }
    v10 = v8 | 2;
    if ( (v3 & 2) == 0 )
      v10 = v8;
    if ( v10 )
    {
      v11 = (volatile __int64 *)(a1 + 96);
      *((_QWORD *)&v36 + 1) = a1 + 96;
      *(_QWORD *)&v36 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v21 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v21 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      LOBYTE(v37) = CurrentIrql;
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v14 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v22 = *(_DWORD *)(v14 + 24);
          *(_DWORD *)(v14 + 24) = v22 + 1;
          if ( v22 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        sub_14045A10C(&v36, v11);
      }
      else if ( _InterlockedExchange64(v11, (__int64)&v36) )
      {
        sub_140311C70(&v36);
      }
      v15 = sub_14021CD50(v7, a2, (unsigned int)&v36, 0, 1, a3);
      v16 = v15;
      if ( (v10 & 4) != 0 )
      {
        if ( (*(_DWORD *)(v15 + 8) & 1) != 0 )
        {
          v10 &= ~4u;
        }
        else
        {
          sub_1402ACD80(a2, 0LL, 0LL, 0LL);
          *(_DWORD *)(v16 + 8) |= 1u;
        }
      }
      if ( (v10 & 2) != 0 )
      {
        if ( (*(_DWORD *)(v16 + 8) & 4) != 0 )
        {
          v10 &= ~2u;
        }
        else
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(a2 + 1444)) == 1 && *(_BYTE *)(a2 + 793) )
          {
            v23 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v23 <= 0xFu )
            {
              v24 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
              *(_DWORD *)(v24 + 20) |= (-1 << (v23 + 1)) & 4;
            }
            v25 = KeGetCurrentPrcb();
            if ( (unsigned int)sub_14024E928(a2, (char *)v25 + 35704, a2 + 808) )
              sub_140229D30(v25);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v26 = KeGetCurrentIrql();
                if ( v26 <= 0xFu && v23 <= 0xFu && v26 >= 2u )
                {
                  v27 = KeGetCurrentPrcb();
                  v28 = *((_QWORD *)v27 + 4375);
                  v29 = ~(unsigned __int16)(-1LL << (v23 + 1));
                  v30 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
                  *(_DWORD *)(v28 + 20) &= v29;
                  if ( v30 )
                    sub_140418E4C(v27);
                }
              }
            }
            __writecr8(v23);
          }
          *(_DWORD *)(v16 + 8) |= 4u;
        }
      }
      if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
      {
        sub_14056E6FC(&v36, retaddr);
      }
      else
      {
        _m_prefetchw(&v36);
        v17 = v36;
        if ( !(_QWORD)v36 )
        {
          if ( (__int128 *)_InterlockedCompareExchange64(
                             *((volatile signed __int64 **)&v36 + 1),
                             0LL,
                             (signed __int64)&v36) == &v36 )
            goto LABEL_22;
          v17 = sub_140282C20(&v36);
        }
        *(_QWORD *)&v36 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v17 + 8), 1uLL);
      }
LABEL_22:
      v18 = KeGetCurrentPrcb();
      v19 = *((_QWORD *)v18 + 4375);
      if ( v19 )
      {
        if ( *((_BYTE *)v18 + 32) <= 1u )
        {
          v31 = *(_DWORD *)(v19 + 24) - 1;
          *(_DWORD *)(v19 + 24) = v31;
          if ( !v31 )
            sub_140418E4C(v18);
        }
      }
      result = (unsigned int)dword_140D06B08;
      v20 = (unsigned __int8)v37;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v37 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            v33 = *((_QWORD *)v32 + 4375);
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v37 + 1));
            v30 = ((unsigned int)result & *(_DWORD *)(v33 + 20)) == 0;
            *(_DWORD *)(v33 + 20) &= result;
            if ( v30 )
              result = sub_140418E4C(v32);
          }
        }
      }
      __writecr8(v20);
      if ( v10 )
      {
        if ( (v10 & 4) != 0 )
          result = sub_140280754(a2, 2LL, 0LL);
        if ( (v10 & 2) != 0 && *(_DWORD *)(a2 + 1448) )
        {
          result = sub_1403614FC(qword_140C474D8);
          if ( result )
          {
            sub_14042A5E0(a2, v34, v35);
            return sub_1402AD030(qword_140C474D8 + 64);
          }
        }
      }
    }
  }
  return result;
}
