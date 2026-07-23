/*
 * XREFs of sub_140302650 @ 0x140302650
 * Callers:
 *     sub_140302930 @ 0x140302930 (sub_140302930.c)
 * Callees:
 *     sub_1402A08EC @ 0x1402A08EC (sub_1402A08EC.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_14036D62C @ 0x14036D62C (sub_14036D62C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140572094 @ 0x140572094 (sub_140572094.c)
 */

__int64 __fastcall sub_140302650(ULONG_PTR BugCheckParameter1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r14
  volatile LONG *v6; // rdi
  unsigned int v7; // edx
  unsigned int v8; // ecx
  __int64 v9; // r9
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rsi
  char v18; // r12
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  int v22; // eax
  char v23; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v24[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v25; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v28[3]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v29[68]; // [rsp+80h] [rbp-80h] BYREF

  memset(&v29[2], 0, 0x100uLL);
  result = *(unsigned int *)(BugCheckParameter1 + 2572);
  v23 = 0;
  v24[0] = 0;
  v27 = 0LL;
  memset(v28, 0, sizeof(v28));
  if ( (result & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v9 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v6 = (volatile LONG *)(BugCheckParameter1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter1 + 64));
    v7 = *(_DWORD *)(BugCheckParameter1 + 2560);
    if ( a2 > dword_140D068E8 )
      v8 = (dword_140D068E8 << 20) - 1;
    else
      v8 = a2 << 20;
    v25 = v8;
    if ( v8 < v7 )
    {
      v8 = v7 - ((v7 - v8) >> 4);
      v25 = v8;
    }
    *(_DWORD *)(BugCheckParameter1 + 2560) = v8;
    if ( *(_DWORD *)(BugCheckParameter1 + 2564) > v8 || *(_DWORD *)(BugCheckParameter1 + 2568) < v8 )
    {
      v29[0] = 2097184;
      memset(&v29[1], 0, 0x104uLL);
      sub_1402A08EC(BugCheckParameter1, &v25, (__int64)v29, &v27);
      v16 = sub_140363220(1LL, v15);
      v17 = *(_QWORD **)(BugCheckParameter1 + 48);
      v18 = 0;
      v26 = v16;
      if ( v17 != (_QWORD *)(BugCheckParameter1 + 48) )
      {
        do
        {
          sub_140572094(
            BugCheckParameter1,
            (_DWORD)v17 - 760,
            BugCheckParameter1 + 2576,
            (unsigned int)v29,
            (__int64)&v23,
            (__int64)&v26);
          v18 |= v23;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 != (_QWORD *)(BugCheckParameter1 + 48) );
        v6 = (volatile LONG *)(BugCheckParameter1 + 64);
      }
      sub_140300030(BugCheckParameter1 + 2576, *(_WORD *)(BugCheckParameter1 + 2578), (unsigned __int16 *)v29);
      *(_QWORD *)(BugCheckParameter1 + 2564) = v27;
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = *((_QWORD *)CurrentPrcb + 4375);
            v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v14 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
            *(_DWORD *)(v21 + 20) &= v22;
            if ( v14 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      if ( v18 )
      {
        result = (unsigned int)dword_140D0507C;
        if ( (dword_140D0507C & 0x10) != 0 )
        {
          sub_14030D5C0(BugCheckParameter1);
          sub_14036D62C(-1, -1, 0, 0, 0, (__int64)v24);
          return sub_1402D0930((__int64)v28, 0LL);
        }
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter1 + 64));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v10 = KeGetCurrentIrql();
          if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
          {
            v11 = KeGetCurrentPrcb();
            v12 = *((_QWORD *)v11 + 4375);
            v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
            *(_DWORD *)(v12 + 20) &= v13;
            if ( v14 )
              sub_140418E4C(v11);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
