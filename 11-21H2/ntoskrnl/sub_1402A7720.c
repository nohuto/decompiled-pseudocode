/*
 * XREFs of sub_1402A7720 @ 0x1402A7720
 * Callers:
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 */

__int64 __fastcall sub_1402A7720(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v5; // rdi
  volatile __int64 *v6; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  volatile signed __int64 **v12; // rbx
  __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // rax
  __int64 v23; // r9
  int v24; // edx
  bool v25; // zf
  void *retaddr; // [rsp+48h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v17 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v17 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v6 = (volatile __int64 *)*((_QWORD *)v5 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v8 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v18 = *(_DWORD *)(v8 + 24);
      *(_DWORD *)(v8 + 24) = v18 + 1;
      if ( v18 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(v5, v6);
  }
  else if ( _InterlockedExchange64(v6, (__int64)v5) )
  {
    sub_140311C70(v5);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 0x1F) != 0 || (v9 = *(_DWORD *)(a2 + 48), (v9 & 0x80u) != 0) )
  {
    v11 = -1073741810;
  }
  else if ( (v9 & 8) == 0 || !*(_DWORD *)(a2 + 4) || *(_QWORD *)(a1 + 40) || (*(_DWORD *)(a1 + 84) & 0x400) != 0 )
  {
    v10 = *(_DWORD *)(a2 + 4) + 1;
    *(_DWORD *)(a2 + 4) = v10;
    if ( v10 <= 0 )
    {
      v19 = *(_QWORD *)(a2 + 8);
      if ( v19 )
      {
        sub_1403D99B4(v19, (PVOID)0x150);
        sub_1403D99B4(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL), (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        v10 = *(_DWORD *)(a2 + 4);
      }
      KeBugCheckEx(0x18u, 0LL, a2, 6uLL, v10);
    }
    v11 = 0;
  }
  else
  {
    v11 = -1073741790;
  }
  v12 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E6FC(v12, retaddr);
    goto LABEL_14;
  }
  _m_prefetchw(v12);
  v13 = (__int64)*v12;
  if ( *v12 )
    goto LABEL_21;
  if ( v12 != (volatile signed __int64 **)_InterlockedCompareExchange64(v12[1], 0LL, (signed __int64)v12) )
  {
    v13 = sub_140282C20((__int64 *)v12);
LABEL_21:
    *v12 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
  }
LABEL_14:
  v14 = KeGetCurrentPrcb();
  v15 = *((_QWORD *)v14 + 4375);
  if ( v15 )
  {
    if ( *((_BYTE *)v14 + 32) <= 1u )
    {
      v20 = *(_DWORD *)(v15 + 24) - 1;
      *(_DWORD *)(v15 + 24) = v20;
      if ( !v20 )
        sub_140418E4C(v14);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = *((_QWORD *)v22 + 4375);
        v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
        *(_DWORD *)(v23 + 20) &= v24;
        if ( v25 )
          sub_140418E4C(v22);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v11;
}
