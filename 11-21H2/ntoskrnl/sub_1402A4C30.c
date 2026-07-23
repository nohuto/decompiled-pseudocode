/*
 * XREFs of sub_1402A4C30 @ 0x1402A4C30
 * Callers:
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 * Callees:
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402A4C30(__int64 a1)
{
  void *v2; // r14
  unsigned __int8 CurrentIrql; // bp
  char *v4; // rbx
  volatile __int64 *v5; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v7; // rdx
  bool v8; // zf
  volatile signed __int64 **v9; // rbx
  __int64 v10; // rax
  struct _KPRCB *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  int v15; // eax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  __int64 v18; // r8
  int v19; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v13 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  v5 = (volatile __int64 *)*((_QWORD *)v4 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v7 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v14 = *(_DWORD *)(v7 + 24);
      *(_DWORD *)(v7 + 24) = v14 + 1;
      if ( v14 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(v4, v5);
  }
  else if ( _InterlockedExchange64(v5, (__int64)v4) )
  {
    sub_140311C70(v4);
  }
  v8 = (*(_DWORD *)(a1 + 28))-- == 1;
  if ( v8 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) != a1 && (*(_BYTE *)(a1 + 4) & 4) == 0 )
    v2 = (void *)a1;
  v9 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E6FC(v9, retaddr);
    goto LABEL_10;
  }
  _m_prefetchw(v9);
  v10 = (__int64)*v9;
  if ( *v9 )
    goto LABEL_18;
  if ( v9 != (volatile signed __int64 **)_InterlockedCompareExchange64(v9[1], 0LL, (signed __int64)v9) )
  {
    v10 = sub_140282C20((__int64 *)v9);
LABEL_18:
    *v9 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v10 + 8), 1uLL);
  }
LABEL_10:
  v11 = KeGetCurrentPrcb();
  v12 = *((_QWORD *)v11 + 4375);
  if ( v12 )
  {
    if ( *((_BYTE *)v11 + 32) <= 1u )
    {
      v15 = *(_DWORD *)(v12 + 24) - 1;
      *(_DWORD *)(v12 + 24) = v15;
      if ( !v15 )
        sub_140418E4C(v11);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = *((_QWORD *)v17 + 4375);
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v8 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v8 )
          sub_140418E4C(v17);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
