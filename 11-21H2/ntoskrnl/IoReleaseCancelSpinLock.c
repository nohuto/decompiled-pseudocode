/*
 * XREFs of IoReleaseCancelSpinLock @ 0x1402A23F0
 * Callers:
 *     sub_1402A4E10 @ 0x1402A4E10 (sub_1402A4E10.c)
 *     sub_1404173E4 @ 0x1404173E4 (sub_1404173E4.c)
 * Callees:
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 */

void __stdcall IoReleaseCancelSpinLock(KIRQL Irql)
{
  volatile signed __int64 **v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v5; // rdx
  int v6; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v8; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 112);
  v2 = Irql;
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E6FC(v1, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(v1);
  v3 = (__int64)*v1;
  if ( *v1 )
    goto LABEL_8;
  if ( v1 != (volatile signed __int64 **)_InterlockedCompareExchange64(v1[1], 0LL, (signed __int64)v1) )
  {
    v3 = sub_140282C20((__int64 *)v1);
LABEL_8:
    *v1 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v3 + 8), 1uLL);
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v5 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v6 = *(_DWORD *)(v5 + 24) - 1;
      *(_DWORD *)(v5 + 24) = v6;
      if ( !v6 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        v8 = KeGetCurrentPrcb();
        v9 = *((_QWORD *)v8 + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(v8);
      }
    }
  }
  __writecr8(v2);
}
