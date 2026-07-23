/*
 * XREFs of sub_1403CA0E4 @ 0x1403CA0E4
 * Callers:
 *     sub_1403C9C90 @ 0x1403C9C90 (sub_1403C9C90.c)
 *     sub_1403DEB90 @ 0x1403DEB90 (sub_1403DEB90.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14026845C @ 0x14026845C (sub_14026845C.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1403CA0E4(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v15; // eax
  bool v16; // zf
  unsigned __int64 v17; // rsi
  unsigned __int8 v18; // bp
  volatile signed __int32 *v19; // rdi
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  __int64 v22; // r8
  int v23; // eax
  struct _KPRCB *v24; // r8
  __int64 v25; // rdx
  signed __int32 v26; // eax
  int v27; // edi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int128 v30; // [rsp+20h] [rbp-38h] BYREF
  int v31; // [rsp+70h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v5 = a3;
  v30 = *(_OWORD *)(a1 + 8);
  if ( v3 )
  {
    v6 = 48LL * *(_QWORD *)(a1 + 24) - 0x220000000000LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 4) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)a1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = -1LL << ((unsigned __int8)v5 + 1);
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)v7;
        v16 = (v15 & *(_DWORD *)(v9 + 20)) == 0;
        v8 = (unsigned int)v15 & *(_DWORD *)(v9 + 20);
        *(_DWORD *)(v9 + 20) = v8;
        if ( v16 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  if ( v3 )
  {
    v17 = v6 + 48 * v3;
    v18 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v18 <= 0xFu )
    {
      v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      v7 = (-1LL << (v18 + 1)) & 4;
      v8 = (unsigned int)v7 | *(_DWORD *)(v9 + 20);
      *(_DWORD *)(v9 + 20) = v8;
    }
    if ( v6 < v17 )
    {
      v19 = (volatile signed __int32 *)(v6 + 24);
      do
      {
        v31 = 0;
        while ( _interlockedbittestandset64(v19, 0x3FuLL) )
        {
          do
            sub_1402F32E0(&v31, v7, v8, v9);
          while ( *(__int64 *)v19 < 0 );
        }
        sub_14026845C((__int64)(v19 - 6), 0LL);
        _InterlockedAnd64((volatile signed __int64 *)v19, 0x7FFFFFFFFFFFFFFFuLL);
        v19 += 12;
      }
      while ( (unsigned __int64)(v19 - 6) < v17 );
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && v18 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = *((_QWORD *)v21 + 4375);
          v23 = ~(unsigned __int16)(-1LL << (v18 + 1));
          v16 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
          *(_DWORD *)(v22 + 20) &= v23;
          if ( v16 )
            sub_140418E4C(v21);
        }
      }
    }
    __writecr8(v18);
    sub_14028CE10(a2, v3);
    if ( (ULONG_PTR *)a2 != &StartContext )
      goto LABEL_49;
    v24 = KeGetCurrentPrcb();
    v25 = *((int *)v24 + 8615);
    if ( (_DWORD)v25 == -1 )
      goto LABEL_49;
    if ( v3 + v25 <= 0x100 )
    {
      do
      {
        if ( v3 >= 0x80000 )
          break;
        v26 = _InterlockedCompareExchange((volatile signed __int32 *)v24 + 8615, v3 + v25, v25);
        v16 = (_DWORD)v25 == v26;
        LODWORD(v25) = v26;
        if ( v16 )
          goto LABEL_50;
      }
      while ( v26 != -1 && v3 + v26 <= 0x100 );
    }
    if ( (int)v25 > 192 && (_DWORD)v25 == _InterlockedCompareExchange((volatile signed __int32 *)v24 + 8615, 192, v25) )
      v3 += (int)v25 - 192;
    if ( v3 )
LABEL_49:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 16960), v3);
  }
LABEL_50:
  v11 = v30;
  if ( (BYTE8(v30) & 1) != 0 && (_QWORD)v30 )
    v11 = (unsigned __int64)&v30 ^ v30;
  v27 = BYTE8(v30) & 1;
  if ( v11 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v11 )
        {
          v10 = (_QWORD *)v11;
          if ( v27 )
            v11 ^= *(_QWORD *)v11;
          else
            v11 = *(_QWORD *)v11;
          *v10 = 0LL;
        }
        v12 = *(_QWORD *)(v11 + 8);
        if ( !v12 )
          break;
        v28 = v11;
        if ( v27 )
          v11 ^= v12;
        else
          v11 = *(_QWORD *)(v11 + 8);
        *(_QWORD *)(v28 + 8) = 0LL;
      }
      v29 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v27 && v29 )
        v29 ^= v11;
      SeFreePrivileges((PPRIVILEGE_SET)v11);
      if ( !v29 )
        break;
      v11 = v29;
    }
  }
}
