/*
 * XREFs of sub_1405AED7C @ 0x1405AED7C
 * Callers:
 *     sub_140273390 @ 0x140273390 (sub_140273390.c)
 * Callees:
 *     sub_14024A35C @ 0x14024A35C (sub_14024A35C.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14028CF90 @ 0x14028CF90 (sub_14028CF90.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C1CE0 @ 0x1405C1CE0 (sub_1405C1CE0.c)
 *     MmUnlockPreChargedPagedPool @ 0x140800560 (MmUnlockPreChargedPagedPool.c)
 *     MmReturnChargesToLockPagedPool @ 0x14096CA90 (MmReturnChargesToLockPagedPool.c)
 */

__int64 __fastcall sub_1405AED7C(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r14
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 *v7; // r15
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rsi
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdx
  bool v14; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rbx
  struct _KPRCB *v23; // r8
  __int64 v24; // rdx
  signed __int32 v25; // eax
  signed __int32 v27[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+98h] [rbp+10h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+18h]
  __int64 v32; // [rsp+A8h] [rbp+20h]

  v31 = a3;
  v30 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v32 = 0LL;
  v5 = 0LL;
  v6 = a2;
  v7 = a1;
  if ( a2 )
  {
    do
    {
      v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x44000000000LL) >> 4);
      v28 = sub_14024A35C(v6);
      v10 = (_QWORD *)v28;
      if ( a3 )
      {
        sub_1402C38D0(*(_QWORD *)(qword_140C51F48 + 8 * ((v6[5] >> 43) & 0x3FFLL)), v9, 0x200uLL, 0, 1);
        if ( v6 < v6 + 3072 )
        {
          v11 = v6 + 3;
          v4 += 512LL;
          do
          {
            v12 = (unsigned __int8)sub_1402F2700((__int64)(v11 - 3));
            v13 = *v11 & 0xC000000000000000uLL;
            v14 = *((_WORD *)v11 + 4) == 2;
            *((_WORD *)v11 + 4) -= 2;
            *v11 = v13;
            if ( v14 )
            {
              _InterlockedOr(v27, 0);
              sub_14033C33C((__int64)(v11 - 3), dword_140D31080, 1);
              sub_1402C6EB0(v9, 2);
              ++v5;
            }
            else
            {
              if ( (v13 & 0x4000000000000000LL) == 0 )
                *v11 = v13 | 0x4000000000000000LL;
              *((_BYTE *)v11 + 10) |= 7u;
            }
            _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v17 = *((_QWORD *)CurrentPrcb + 4375);
                  v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
                  v14 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
                  *(_DWORD *)(v17 + 20) &= v18;
                  if ( v14 )
                    sub_140418E4C((__int64)CurrentPrcb);
                }
              }
            }
            __writecr8(v12);
            v11 += 6;
            ++v9;
          }
          while ( v11 - 3 < v6 + 3072 );
          v10 = (_QWORD *)v28;
          v3 = v32;
        }
      }
      else
      {
        sub_14028CF90(v9, 1);
        v3 += sub_1405C1CE0(
                *(_QWORD *)(qword_140C51F48 + 8 * ((v6[5] >> 43) & 0x3FFLL)),
                (_DWORD)v6,
                (unsigned int)&v30,
                (unsigned int)&v30,
                3);
        v32 = v3;
        v4 += 512LL;
      }
      v6 = v10;
    }
    while ( v10 );
    v7 = a1;
  }
  v19 = 8LL * *((unsigned int *)v7 + 11);
  MmUnlockPreChargedPagedPool(v7[1], v19);
  MmReturnChargesToLockPagedPool(v7[1], v19);
  v20 = *v7;
  v21 = *(_WORD *)(*v7 + 60) & 0x3FF;
  v22 = *(_QWORD *)(qword_140C51F48 + 8 * v21);
  if ( v5 )
  {
    sub_14028CE10(*(_QWORD *)(qword_140C51F48 + 8 * v21), v5);
    if ( (ULONG_PTR *)v22 != &StartContext )
      goto LABEL_34;
    v23 = KeGetCurrentPrcb();
    v24 = *((int *)v23 + 8615);
    if ( (_DWORD)v24 == -1 )
      goto LABEL_34;
    do
    {
      if ( v5 + v24 > 0x100 || v5 >= 0x80000 )
        break;
      v25 = _InterlockedCompareExchange((volatile signed __int32 *)v23 + 8615, v24 + v5, v24);
      v14 = (_DWORD)v24 == v25;
      v24 = v25;
      if ( v14 )
        goto LABEL_35;
    }
    while ( v25 != -1 );
    if ( (int)v24 > 192 && (_DWORD)v24 == _InterlockedCompareExchange((volatile signed __int32 *)v23 + 8615, 192, v24) )
      v5 += (int)v24 - 192;
    if ( v5 )
LABEL_34:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 16960), v5);
  }
LABEL_35:
  *(_QWORD *)(v20 + 120) ^= (*(_QWORD *)(v20 + 120) ^ (*(_QWORD *)(v20 + 120) - v4)) & 0xFFFFFFFFFLL;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v20 + 60) & 0x3FF)) + 17528LL),
    -v4);
  return v3;
}
