/*
 * XREFs of sub_1403B92D0 @ 0x1403B92D0
 * Callers:
 *     sub_1403B1624 @ 0x1403B1624 (sub_1403B1624.c)
 *     sub_14045E3C0 @ 0x14045E3C0 (sub_14045E3C0.c)
 *     sub_14045E6A0 @ 0x14045E6A0 (sub_14045E6A0.c)
 *     sub_1405D4B84 @ 0x1405D4B84 (sub_1405D4B84.c)
 *     sub_1405D5704 @ 0x1405D5704 (sub_1405D5704.c)
 *     sub_1405D5E24 @ 0x1405D5E24 (sub_1405D5E24.c)
 *     sub_1405D67D4 @ 0x1405D67D4 (sub_1405D67D4.c)
 *     sub_140823318 @ 0x140823318 (sub_140823318.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_1405CD1FC @ 0x1405CD1FC (sub_1405CD1FC.c)
 */

unsigned __int64 __fastcall sub_1403B92D0(int a1, int a2, int a3, volatile signed __int32 *a4)
{
  unsigned __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int8 CurrentIrql; // r12
  int v14; // r15d
  unsigned int v15; // r15d
  bool v16; // zf
  unsigned int v17; // ecx
  ULONG_PTR v18; // rbx
  int v19; // eax
  char v20; // di
  int v21; // ett
  unsigned __int8 v22; // r10
  __int64 v23; // rdi
  ULONG_PTR v24; // rbx
  signed __int32 v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v28; // r8
  int v29; // eax
  char v30; // [rsp+20h] [rbp-E0h]
  unsigned int v31; // [rsp+24h] [rbp-DCh]
  int v33; // [rsp+2Ch] [rbp-D4h] BYREF
  ULONG_PTR BugCheckParameter2[32]; // [rsp+30h] [rbp-D0h] BYREF

  v33 = 0;
  result = (unsigned __int64)memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  LOBYTE(v11) = 0;
  v12 = 0LL;
  CurrentIrql = 0;
  v30 = 0;
  v14 = a1;
  if ( a3 )
    v14 = a2;
  v15 = (a1 ^ a2) & v14;
  v16 = !_BitScanForward(&v17, v15);
  v31 = v17;
  if ( v16 )
    return result;
  while ( 1 )
  {
    v15 &= v15 - 1;
    v18 = qword_140D05108 + 448LL * v17;
    if ( a3 )
    {
      result = *(unsigned int *)(v18 + 384);
      if ( a4 )
        _InterlockedIncrement(a4);
      if ( (int)result <= 0
        || (v21 = result,
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)(v18 + 384),
                                     result + 1,
                                     result),
            v21 != (_DWORD)result) )
      {
        BugCheckParameter2[v12] = v18;
        v12 = (unsigned int)(v12 + 1);
      }
LABEL_26:
      v20 = v30;
      goto LABEL_27;
    }
    if ( a4 )
    {
      v19 = _InterlockedDecrement(a4);
      if ( v19 < 0 )
        sub_1405CAE6C(0x668uLL, v18, v19, v15);
    }
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 384));
    if ( (int)result < 0x40000000 )
      sub_1405CAE6C(0x668uLL, v18, (int)result, v15);
    if ( (_DWORD)result != 0x40000000 )
      goto LABEL_26;
    if ( (_BYTE)v11 )
    {
      v20 = v30;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v11 = (-1LL << (CurrentIrql + 1)) & 4;
        v9 = (unsigned int)v11 | *(_DWORD *)(v10 + 20);
        *(_DWORD *)(v10 + 20) = v9;
      }
      v20 = 1;
      v30 = 1;
    }
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v18 + 384), -1, 0x40000000);
    if ( (_DWORD)result == 0x40000000 )
    {
      LOBYTE(v11) = 1;
      sub_1405CD1FC(v31, v11);
      result = *(int *)(v18 + 384);
      if ( (_DWORD)result != -1 )
        sub_1405CAE6C(0x669uLL, v18, *(int *)(v18 + 384), 0LL);
      *(_DWORD *)(v18 + 384) = 0;
    }
LABEL_27:
    v16 = !_BitScanForward(&v17, v15);
    v31 = v17;
    if ( v16 )
      break;
    LOBYTE(v11) = v30;
  }
  if ( (_DWORD)v12 )
  {
    v22 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v22 <= 0xFu )
    {
      v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      v11 = (-1LL << (v22 + 1)) & 4;
      v9 = (unsigned int)v11 | *(_DWORD *)(v10 + 20);
      *(_DWORD *)(v10 + 20) = v9;
    }
    CurrentIrql = v22;
    while ( 1 )
    {
      sub_1402F32E0(&v33, v11, v9, v10);
      v23 = 0LL;
      do
      {
        v24 = BugCheckParameter2[v23];
        v25 = *(_DWORD *)(v24 + 384);
        if ( v25 <= 0 )
        {
          if ( !v25 && !_InterlockedCompareExchange((volatile signed __int32 *)(v24 + 384), -1, 0) )
          {
            sub_1405CD1FC((__int64)(v24 - qword_140D05108) / 448, 0LL);
            if ( *(_DWORD *)(v24 + 384) != -1 )
              sub_1405CAE6C(0x669uLL, v24, *(int *)(v24 + 384), 0LL);
            *(_DWORD *)(v24 + 384) = 1073741825;
            v12 = (unsigned int)(v12 - 1);
            goto LABEL_42;
          }
        }
        else if ( v25 == _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 384), v25 + 1, v25) )
        {
          v12 = (unsigned int)(v12 - 1);
LABEL_42:
          BugCheckParameter2[v23] = BugCheckParameter2[v12];
          continue;
        }
        v23 = (unsigned int)(v23 + 1);
      }
      while ( (unsigned int)v23 < (unsigned int)v12 );
      if ( !(_DWORD)v12 )
        goto LABEL_52;
    }
  }
  if ( v20 )
  {
LABEL_52:
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v28 = *((_QWORD *)CurrentPrcb + 4375);
          v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v16 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
          *(_DWORD *)(v28 + 20) &= v29;
          if ( v16 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
