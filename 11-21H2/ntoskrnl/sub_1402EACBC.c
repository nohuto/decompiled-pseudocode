/*
 * XREFs of sub_1402EACBC @ 0x1402EACBC
 * Callers:
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 * Callees:
 *     sub_1402393FC @ 0x1402393FC (sub_1402393FC.c)
 *     sub_1402433D0 @ 0x1402433D0 (sub_1402433D0.c)
 *     sub_14024F014 @ 0x14024F014 (sub_14024F014.c)
 *     sub_14026B1C0 @ 0x14026B1C0 (sub_14026B1C0.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_14027D6E0 @ 0x14027D6E0 (sub_14027D6E0.c)
 *     sub_14027D9E8 @ 0x14027D9E8 (sub_14027D9E8.c)
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402EA5E4 @ 0x1402EA5E4 (sub_1402EA5E4.c)
 *     sub_1402EB0E0 @ 0x1402EB0E0 (sub_1402EB0E0.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_14031285C @ 0x14031285C (sub_14031285C.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031D9B0 @ 0x14031D9B0 (sub_14031D9B0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140352E50 @ 0x140352E50 (sub_140352E50.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C3684 @ 0x1405C3684 (sub_1405C3684.c)
 */

__int64 sub_1402EACBC(__int64 a1, ULONG_PTR a2, unsigned __int8 a3, ...)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // r13
  unsigned int v7; // r14d
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r15
  char v11; // al
  __int64 v12; // rbx
  __int64 v13; // r10
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r13
  __int64 v17; // rdx
  volatile LONG *v19; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v22; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r10
  __int64 v27; // r8
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  __int64 v31; // r8
  int v32; // eax
  unsigned __int64 v33; // rax
  unsigned int v34; // ecx
  __int64 v35; // [rsp+20h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-38h] BYREF
  _OWORD v37[2]; // [rsp+40h] [rbp-20h] BYREF
  int v39; // [rsp+A8h] [rbp+48h]
  unsigned __int64 v40; // [rsp+B8h] [rbp+58h] BYREF
  va_list va; // [rsp+B8h] [rbp+58h]
  unsigned __int64 v42; // [rsp+C0h] [rbp+60h] BYREF
  va_list va1; // [rsp+C0h] [rbp+60h]
  va_list va2; // [rsp+C8h] [rbp+68h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v40 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v42 = va_arg(va2, _QWORD);
  v3 = v42;
  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = (__int64)(v40 << 25) >> 16;
  LODWORD(v42) = v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL;
  v7 = 2;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  if ( (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL) == v8 )
    ++dword_140C29CE4;
  v9 = sub_14026B1C0(a2);
  v10 = (_DWORD *)((*(_QWORD *)v9 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL);
  v35 = (__int64)(v10 + 416);
  if ( v9 != a2 )
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v10 == qword_140D06940 )
  {
    ++dword_140C29D3C;
    goto LABEL_52;
  }
  if ( (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL) == v8 && (v10[543] & 0x1000) != 0 )
  {
    ++dword_140C29D34;
LABEL_52:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_48:
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = *((_QWORD *)CurrentPrcb + 4375);
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
          *(_DWORD *)(v22 + 20) &= v23;
          if ( v24 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    return 0LL;
  }
  if ( v10 == *((_DWORD **)KeGetCurrentThread() + 23) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = *((_QWORD *)v30 + 4375);
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v24 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
          *(_DWORD *)(v31 + 20) &= v32;
          if ( v24 )
            sub_140418E4C(v30);
        }
      }
    }
    __writecr8(v4);
LABEL_14:
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_QWORD *)(v3 + 24) = v35;
    if ( (_DWORD)v42 )
    {
      *(_BYTE *)(v3 + 37) |= 1u;
      v19 = (volatile LONG *)sub_140282AD0(v35);
      v11 = ExAcquireSpinLockExclusive(v19);
      *((_DWORD *)v19 + 1) = 0;
    }
    else
    {
      v11 = sub_1402CF4F0(v35);
    }
    *(_BYTE *)(v3 + 36) = v11;
    if ( (*(_DWORD *)(v3 + 8) & 8) != 0 )
    {
      v12 = 0LL;
    }
    else
    {
      sub_1402ED128(1LL);
      v12 = sub_1403126F0(v6);
      sub_1402806E0(1, 0x11u);
      if ( !v12 )
      {
        ++dword_140C29D48;
        goto LABEL_36;
      }
      if ( !(unsigned int)sub_14031285C(v12) )
      {
        if ( (*(_BYTE *)(v12 + 48) & 0x70) != 0x40 )
          goto LABEL_75;
        *(_DWORD *)(v3 + 8) |= 0x800u;
      }
    }
    if ( !(_DWORD)v42 )
    {
      v42 = 0LL;
      if ( (unsigned int)sub_14031D9B0(v35, v6, 0LL)
        && (memset(v37, 0, sizeof(v37)),
            sub_140352E50(v6, v37),
            v14 = *((_QWORD *)v37 + v13),
            v15 = *((_QWORD *)v37 + (int)v13 - 1),
            v42 = v15,
            v14) )
      {
        v16 = v40;
      }
      else
      {
        v16 = v40;
        v33 = sub_14027D6E0(v35, v40, (unsigned __int64 *)va1);
        v15 = v42;
        v14 = v33;
      }
      *(_QWORD *)(v3 + 40) = v14;
      if ( v15 != v16 )
        goto LABEL_36;
      v40 = sub_140317A10(v15);
      if ( (v40 & 1) == 0 || (((unsigned __int64)sub_140317A10((unsigned __int64 *)va) >> 12) & 0xFFFFFFFFFFLL) != v8 )
        goto LABEL_36;
      goto LABEL_26;
    }
    if ( sub_14024F014(v6, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4)) )
    {
      v16 = v40;
LABEL_26:
      if ( v8 > qword_140C50840 )
        goto LABEL_36;
      if ( (*(_QWORD *)(16 * ((__int64)(a2 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
        goto LABEL_36;
      v17 = *(_QWORD *)(a2 + 40);
      if ( *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v17 >> 43) & 0x3FF)) != a1
        || v17 < 0
        || (v17 & 0x20000000000000LL) != 0
        || sub_140277C50(a2) )
      {
        goto LABEL_36;
      }
      if ( (*(_DWORD *)v3 & 0x800000) != 0 )
      {
        if ( v12 )
        {
          v34 = *(_DWORD *)(v12 + 48);
          if ( qword_1400161D0[(v34 >> 19) & 3] == 16
            && (v34 & 0x200000) != 0
            && (unsigned int)sub_1405C3684(v12, a2, v3 + 120) )
          {
            ++dword_140C29D4C;
            goto LABEL_76;
          }
        }
      }
      if ( (*(_DWORD *)(v3 + 8) & 0x800) == 0 || !sub_1402433D0(v16) )
        return 1LL;
LABEL_75:
      ++dword_140C29D48;
LABEL_76:
      v7 = 0;
      goto LABEL_36;
    }
    ++dword_140C29D54;
LABEL_36:
    sub_1402EA5E4(v3);
    ++dword_140C29D04;
    return v7;
  }
  if ( !(unsigned int)sub_1402EB0E0(&LockHandle) )
  {
    ++dword_140C29D40;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_48;
  }
  v39 = sub_14027D9E8((__int64)v10, (__int64)(v10 + 416));
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v25 = KeGetCurrentIrql();
      if ( v25 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = *((_QWORD *)v26 + 4375);
        v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v24 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
        *(_DWORD *)(v27 + 20) &= v28;
        if ( v24 )
          sub_140418E4C(v26);
      }
    }
  }
  __writecr8(v4);
  if ( v39 )
  {
    *(_QWORD *)(v3 + 64) = v10 + 416;
    sub_1402393FC((ULONG_PTR)v10, v3 + 72);
    goto LABEL_14;
  }
  ++dword_140C29D44;
  return 0LL;
}
