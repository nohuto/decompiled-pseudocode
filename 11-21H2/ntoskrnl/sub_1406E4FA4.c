/*
 * XREFs of sub_1406E4FA4 @ 0x1406E4FA4
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_1406E5090 @ 0x1406E5090 (sub_1406E5090.c)
 *     sub_1406E50B4 @ 0x1406E50B4 (sub_1406E50B4.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFED4 @ 0x1406FFED4 (sub_1406FFED4.c)
 *     sub_1407F7A80 @ 0x1407F7A80 (sub_1407F7A80.c)
 */

__int64 __fastcall sub_1406E4FA4(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  PVOID v2; // rdi
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned int v6; // esi
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  P = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  if ( !*(_QWORD *)(a1 + 1496) )
  {
    result = sub_1406E50B4(&P);
    if ( (int)result < 0 )
      return result;
    v2 = P;
  }
  sub_1406FFED4(a1, CurrentThread);
  if ( (unsigned __int8)sub_1406E5090(a1) )
  {
    v6 = -1073740529;
  }
  else if ( (*(_DWORD *)(a1 + 1512) & 0x40000000) != 0 )
  {
    v6 = -1073740536;
  }
  else if ( (*(_DWORD *)(a1 + 256) & 0x402000) != 0 )
  {
    v5 = -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1496), (signed __int64)v2, 0LL) != 0);
    P = (PVOID)(v5 & (unsigned __int64)P);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1512), 0x40000000u);
    v2 = P;
    v6 = 0;
  }
  else
  {
    v6 = -1073741811;
  }
  sub_1406FFE90(a1, CurrentThread);
  if ( v2 )
    sub_1407F7A80(v2);
  return v6;
}
