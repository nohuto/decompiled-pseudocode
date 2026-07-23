/*
 * XREFs of sub_14024E3F0 @ 0x14024E3F0
 * Callers:
 *     sub_1402AA9B0 @ 0x1402AA9B0 (sub_1402AA9B0.c)
 *     sub_140424090 @ 0x140424090 (sub_140424090.c)
 *     MmGrowKernelStack @ 0x140591080 (MmGrowKernelStack.c)
 * Callees:
 *     sub_14024E5F8 @ 0x14024E5F8 (sub_14024E5F8.c)
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14024E3F0(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v3; // ebp
  __int64 v4; // r15
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  int v8; // eax
  __int64 v10; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v12; // rdx
  bool v13; // zf
  signed __int32 v14; // eax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // rax
  __int64 v17; // r9
  int v18; // edx

  CurrentThread = KeGetCurrentThread();
  if ( *((_QWORD *)CurrentThread + 7) - (*(_QWORD *)(*((_QWORD *)CurrentThread + 5) + 8LL) & 0xFFFFFFFFFFFFFFFEuLL) < 0x12000 )
    return 3221225659LL;
  v3 = 0;
  v4 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*((_QWORD *)CurrentThread + 68) + 1838LL));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v6 = (((unsigned __int64)(a1 - a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v6 < ((*((_QWORD *)CurrentThread + 6) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
  {
    if ( v6 < ((*(_QWORD *)(*((_QWORD *)CurrentThread + 5) + 8LL) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    {
      ++dword_140C53048;
      v3 = -1073741571;
    }
    else
    {
      v7 = ((__int64)(((*((_QWORD *)CurrentThread + 6) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL - v6) >> 3) + 1;
      if ( (unsigned int)sub_1402821F4(v4, v7, 0LL) )
      {
        v8 = sub_14024E5F8(((*((_QWORD *)CurrentThread + 7) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
        if ( (unsigned int)sub_14033B770(v4, v6, v7, (unsigned int)CurrentThread | 1, v8, 2, 0LL) )
        {
          *((_QWORD *)CurrentThread + 6) = (__int64)(v6 << 25) >> 16;
        }
        else
        {
          if ( (ULONG_PTR *)v4 == &StartContext )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v12 = *((int *)CurrentPrcb + 8615);
            if ( (_DWORD)v12 != -1 )
            {
              if ( v7 + v12 <= 0x100 )
              {
                do
                {
                  if ( v7 >= 0x80000 )
                    break;
                  v14 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v12 + v7, v12);
                  v13 = (_DWORD)v12 == v14;
                  LODWORD(v12) = v14;
                  if ( v13 )
                    goto LABEL_27;
                }
                while ( v14 != -1 && v7 + v14 <= 0x100 );
              }
              if ( (int)v12 > 192
                && (_DWORD)v12 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v12) )
              {
                v7 += (int)v12 - 192;
              }
            }
          }
          if ( v7 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 16960), v7);
LABEL_27:
          v3 = -1073741670;
        }
      }
      else
      {
        v3 = -1073741801;
      }
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = *((_QWORD *)v16 + 4375);
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v13 )
          sub_140418E4C(v16);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v3;
}
