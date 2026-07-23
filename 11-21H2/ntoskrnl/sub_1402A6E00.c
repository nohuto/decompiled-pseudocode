/*
 * XREFs of sub_1402A6E00 @ 0x1402A6E00
 * Callers:
 *     sub_1402D5CA8 @ 0x1402D5CA8 (sub_1402D5CA8.c)
 *     sub_1403A0064 @ 0x1403A0064 (sub_1403A0064.c)
 *     sub_14068E624 @ 0x14068E624 (sub_14068E624.c)
 *     sub_14072B630 @ 0x14072B630 (sub_14072B630.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14074CD70 (IoCreateStreamFileObjectEx2.c)
 *     IoRegisterFileSystem @ 0x14080F4B0 (IoRegisterFileSystem.c)
 *     sub_140A65554 @ 0x140A65554 (sub_140A65554.c)
 * Callees:
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 */

__int64 __fastcall sub_1402A6E00(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v4; // rbx
  volatile __int64 *v5; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v7; // rdx
  int v8; // edi
  volatile signed __int64 **v9; // rbx
  __int64 v10; // rax
  struct _KPRCB *v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // r9
  int v15; // eax
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  __int64 v19; // r8
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a2 )
  {
    v8 = ++*(_DWORD *)(BugCheckParameter2 + 4);
    goto LABEL_13;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v14 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v5 = (volatile __int64 *)*((_QWORD *)v4 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v7 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v15 = *(_DWORD *)(v7 + 24);
      *(_DWORD *)(v7 + 24) = v15 + 1;
      if ( v15 == -1 )
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
  v8 = ++*(_DWORD *)(BugCheckParameter2 + 4);
  v9 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E6FC(v9, retaddr);
  }
  else
  {
    _m_prefetchw(v9);
    v10 = (__int64)*v9;
    if ( !*v9 )
    {
      if ( v9 == (volatile signed __int64 **)_InterlockedCompareExchange64(v9[1], 0LL, (signed __int64)v9) )
        goto LABEL_10;
      v10 = sub_140282C20((__int64 *)v9);
    }
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
      v16 = *(_DWORD *)(v12 + 24) - 1;
      *(_DWORD *)(v12 + 24) = v16;
      if ( !v16 )
        sub_140418E4C(v11);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = *((_QWORD *)v18 + 4375);
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v21 )
          sub_140418E4C(v18);
      }
    }
  }
  __writecr8(CurrentIrql);
LABEL_13:
  if ( v8 <= 0 )
  {
    v22 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v22 )
    {
      sub_1403D99B4(v22, (PVOID)0x150);
      sub_1403D99B4(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return (unsigned int)v8;
}
