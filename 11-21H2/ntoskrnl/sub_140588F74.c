/*
 * XREFs of sub_140588F74 @ 0x140588F74
 * Callers:
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403B7A10 @ 0x1403B7A10 (sub_1403B7A10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14058938C @ 0x14058938C (sub_14058938C.c)
 */

__int64 __fastcall sub_140588F74(unsigned __int16 *a1, __int64 a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR v4; // r12
  __int64 v5; // rbx
  ULONG_PTR v6; // r15
  __int64 v7; // rsi
  unsigned __int16 *v8; // rdi
  unsigned __int64 *v9; // r13
  __int64 result; // rax
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // r14
  ULONG_PTR v18; // rdi
  volatile LONG *v19; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  bool v22; // zf
  ULONG_PTR v23; // [rsp+20h] [rbp-68h]
  unsigned __int64 v24; // [rsp+28h] [rbp-60h]
  ULONG_PTR v25; // [rsp+30h] [rbp-58h]
  unsigned __int16 i; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v29; // [rsp+A8h] [rbp+20h]

  v4 = a4;
  v5 = (a3 >> 18) & 0x3FFFFF;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = (unsigned __int64 *)(qword_140C52968 + 8 * v5);
  result = *a1;
  for ( i = *a1; v4; v4 -= v25 )
  {
    v25 = sub_1403B7A10(v6, v4);
    v23 = v25 >> 18;
    v11 = sub_1402C1550(v6);
    v12 = *(_QWORD *)(v7 + 16);
    v13 = *((_QWORD *)v8 + 2);
    v14 = *((unsigned int *)v11 + 2);
    v15 = v13;
    v16 = 24512 * v14;
    v29 = v12 + 24512 * v14;
    v24 = v13 + 24512 * v14;
    if ( v24 >= v29 )
      v15 = v12;
    v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v16 + v15 + 22848));
    if ( v13 + v16 >= v29 )
      v12 = v13;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v12 + v16 + 22848));
    v18 = v25 >> 18;
    sub_14058938C(a2, v5, v23);
    sub_14058938C(a1, v5, v23);
    if ( v23 )
    {
      do
      {
        *v9 = ((unsigned __int64)(i & 0x7FF) << 49) | *v9 & 0xF001FFFFFEFFFFFFuLL | 0xC00000;
        ++v9;
        v5 = ((unsigned int)v5 ^ ((_DWORD)v5 + 1)) & 0x3FFFFF ^ (unsigned __int64)v5;
        --v18;
      }
      while ( v18 );
    }
    if ( v24 >= v29 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v24 + 22848));
      v19 = (volatile LONG *)(v29 + 22848);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v29 + 22848));
      v19 = (volatile LONG *)(v24 + 22848);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v19);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v17 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v21 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v22 = ((unsigned int)result & *(_DWORD *)(v21 + 20)) == 0;
          *(_DWORD *)(v21 + 20) &= result;
          if ( v22 )
            result = sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v17);
    v6 += v25;
    v8 = a1;
    v7 = a2;
  }
  return result;
}
