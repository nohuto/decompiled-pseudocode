/*
 * XREFs of sub_1402A7190 @ 0x1402A7190
 * Callers:
 *     sub_1402A7910 @ 0x1402A7910 (sub_1402A7910.c)
 *     sub_1403A15FC @ 0x1403A15FC (sub_1403A15FC.c)
 *     sub_14068E624 @ 0x14068E624 (sub_14068E624.c)
 *     sub_14072B630 @ 0x14072B630 (sub_14072B630.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14074CD70 (IoCreateStreamFileObjectEx2.c)
 *     sub_14080C5C8 @ 0x14080C5C8 (sub_14080C5C8.c)
 *     sub_140A65554 @ 0x140A65554 (sub_140A65554.c)
 * Callees:
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_1402D5CA8 @ 0x1402D5CA8 (sub_1402D5CA8.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 */

__int64 __fastcall sub_1402A7190(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 v4; // r14
  unsigned __int8 CurrentIrql; // bp
  char *v6; // rbx
  volatile __int64 *v7; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v9; // rdx
  int v10; // eax
  volatile signed __int64 **v11; // rbx
  __int64 v12; // rax
  struct _KPRCB *v13; // rcx
  __int64 v14; // rdx
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  __int64 v22; // r8
  int v23; // eax
  bool v24; // zf
  void *retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v16 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v16 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v6 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v7 = (volatile __int64 *)*((_QWORD *)v6 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v9 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v17 = *(_DWORD *)(v9 + 24);
      *(_DWORD *)(v9 + 24) = v17 + 1;
      if ( v17 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(v6, v7);
  }
  else if ( _InterlockedExchange64(v7, (__int64)v6) )
  {
    sub_140311C70(v6);
  }
  v10 = *(_DWORD *)(BugCheckParameter2 + 4) - 1;
  *(_DWORD *)(BugCheckParameter2 + 4) = v10;
  if ( v10 < 0 )
  {
    v18 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v18 )
    {
      sub_1403D99B4(v18, (PVOID)0x150);
      sub_1403D99B4(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      v10 = *(_DWORD *)(BugCheckParameter2 + 4);
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, v10);
  }
  if ( !v10 && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
    return (unsigned __int8)sub_1402D5CA8(BugCheckParameter2);
  v11 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E6FC(v11, retaddr);
  }
  else
  {
    _m_prefetchw(v11);
    v12 = (__int64)*v11;
    if ( !*v11 )
    {
      if ( v11 == (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
        goto LABEL_11;
      v12 = sub_140282C20((__int64 *)v11);
    }
    *v11 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v12 + 8), 1uLL);
  }
LABEL_11:
  v13 = KeGetCurrentPrcb();
  v14 = *((_QWORD *)v13 + 4375);
  if ( v14 )
  {
    if ( *((_BYTE *)v13 + 32) <= 1u )
    {
      v19 = *(_DWORD *)(v14 + 24) - 1;
      *(_DWORD *)(v14 + 24) = v19;
      if ( !v19 )
        sub_140418E4C(v13);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = *((_QWORD *)v21 + 4375);
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
        *(_DWORD *)(v22 + 20) &= v23;
        if ( v24 )
          sub_140418E4C(v21);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}
