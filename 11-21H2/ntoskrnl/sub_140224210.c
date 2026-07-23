/*
 * XREFs of sub_140224210 @ 0x140224210
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx3 @ 0x140257EE0 (IoSetIoCompletionEx3.c)
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 *     IoFreeMiniCompletionPacket @ 0x14074F6E0 (IoFreeMiniCompletionPacket.c)
 */

__int64 __fastcall sub_140224210(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v5; // rdx
  int v6; // esi
  bool v7; // zf
  __int64 v8; // rax
  struct _KPRCB *v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // r9
  int v14; // eax
  int v15; // eax
  struct _KPRCB *v16; // r9
  __int64 v17; // r8
  __int64 v18; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int64 *v19; // [rsp+58h] [rbp-20h]
  __int64 v20; // [rsp+60h] [rbp-18h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v20 = 0LL;
  v18 = 0LL;
  v19 = (volatile signed __int64 *)a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v13 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LOBYTE(v20) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v5 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v14 = *(_DWORD *)(v5 + 24);
      *(_DWORD *)(v5 + 24) = v14 + 1;
      if ( v14 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(&v18, a2);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)a2, (__int64)&v18) )
  {
    sub_140311C70(&v18);
  }
  v6 = 0;
  if ( *(_BYTE *)(a2 + 34) )
  {
    v6 = 2;
    goto LABEL_9;
  }
  if ( *(_BYTE *)(a2 + 33) )
  {
    if ( !*(_DWORD *)(a2 + 28) )
      goto LABEL_9;
    v6 = 1;
  }
  else
  {
    v7 = (*(_DWORD *)(a2 + 24))-- == 1;
    if ( v7 )
    {
LABEL_9:
      *(_BYTE *)(a2 + 32) = 0;
      goto LABEL_10;
    }
    v6 = 1;
  }
LABEL_10:
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E6FC(&v18, retaddr);
    goto LABEL_13;
  }
  _m_prefetchw(&v18);
  v8 = v18;
  if ( v18 )
    goto LABEL_21;
  if ( (__int64 *)_InterlockedCompareExchange64(v19, 0LL, (signed __int64)&v18) != &v18 )
  {
    v8 = sub_140282C20(&v18);
LABEL_21:
    v18 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v8 + 8), 1uLL);
  }
LABEL_13:
  v9 = KeGetCurrentPrcb();
  v10 = *((_QWORD *)v9 + 4375);
  if ( v10 )
  {
    if ( *((_BYTE *)v9 + 32) <= 1u )
    {
      v15 = *(_DWORD *)(v10 + 24) - 1;
      *(_DWORD *)(v10 + 24) = v15;
      if ( !v15 )
        sub_140418E4C(v9);
    }
  }
  result = (unsigned int)dword_140D06B08;
  v12 = (unsigned __int8)v20;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v20 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = *((_QWORD *)v16 + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
        v7 = ((unsigned int)result & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= result;
        if ( v7 )
          result = sub_140418E4C(v16);
      }
    }
  }
  __writecr8(v12);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      return IoSetIoCompletionEx3(*(_QWORD *)(a2 + 8), 0, 0, 0, 0LL, 0, *(_QWORD *)(a2 + 16), 0, 0);
    }
    else
    {
      IoFreeMiniCompletionPacket(*(_QWORD *)(a2 + 16));
      return sub_140348B40(a2);
    }
  }
  return result;
}
