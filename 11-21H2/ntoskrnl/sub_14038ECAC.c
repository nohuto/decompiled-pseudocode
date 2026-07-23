/*
 * XREFs of sub_14038ECAC @ 0x14038ECAC
 * Callers:
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 * Callees:
 *     sub_1402C1520 @ 0x1402C1520 (sub_1402C1520.c)
 *     sub_1402E8AA0 @ 0x1402E8AA0 (sub_1402E8AA0.c)
 *     sub_1402E8BCC @ 0x1402E8BCC (sub_1402E8BCC.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_14038EE6C @ 0x14038EE6C (sub_14038EE6C.c)
 */

__int64 __fastcall sub_14038ECAC(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rsi
  ULONG_PTR v7; // r14
  __int64 v8; // rbx
  volatile LONG *v9; // rbp
  unsigned __int64 v10; // rdi
  __int64 v11; // rdi
  int v13; // [rsp+60h] [rbp+18h] BYREF

  *a4 = 0;
  v5 = 88LL * (unsigned int)a3;
  v7 = *(_QWORD *)(v5 + a1 + 2896);
  if ( v7 == 0x3FFFFFFFFFLL )
    return -1LL;
  while ( 1 )
  {
    v8 = 48 * v7 - 0x220000000000LL;
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v13, a2, a3, (__int64)a4);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v8 + 34) & 7) != 2
      || *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) != a1 )
    {
      goto LABEL_17;
    }
    v9 = (volatile LONG *)(v5 + a1 + 2912);
    ExAcquireSpinLockExclusiveAtDpcLevel(v9);
    if ( v7 == *(_QWORD *)(v5 + a1 + 2896) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + a1 + 2912));
LABEL_17:
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 = *(_QWORD *)(v5 + a1 + 2896);
    if ( v7 == 0x3FFFFFFFFFLL )
      return -1LL;
  }
  sub_1402E8BCC(48 * v7 - 0x220000000000LL, 0, 1);
  sub_1402E8AA0(v7, -1LL, 0);
  if ( !sub_1402C1520(v7) )
    return v7;
  v10 = *(_QWORD *)(v8 + 16);
  if ( qword_140C50780 )
  {
    if ( (v10 & 0x10) == 0 )
      v10 &= ~qword_140C50780;
  }
  v11 = (v10 >> 12) & 0xFFFFFFFFFFLL;
  if ( v11 == v7 )
  {
    sub_14038EE6C((PSLIST_ENTRY)(48 * v7 - 0x220000000000LL));
    goto LABEL_13;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(48 * v11 - 0x220000000000LL + 24), 0x3FuLL) )
  {
LABEL_13:
    ExReleaseSpinLockExclusiveFromDpcLevel(v9);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *a4 = 1;
    return -1LL;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    sub_1402E8AA0(v11, -1LL, 0);
    return v11;
  }
}
