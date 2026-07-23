/*
 * XREFs of sub_140211BD0 @ 0x140211BD0
 * Callers:
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 * Callees:
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

char __fastcall sub_140211BD0(__int64 a1, __int64 a2, char a3)
{
  volatile signed __int32 *v4; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  ULONG_PTR v13; // r14
  signed __int64 BugCheckParameter4; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v16; // rbp
  signed __int64 v17; // rbx
  signed __int64 v18; // rax
  signed __int64 v19; // r8
  struct _KPRCB *v20; // rcx
  __int64 v21; // rdx
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  __int64 v30; // r8
  int v31; // eax
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  __int64 v35; // r8
  int v36; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (volatile signed __int32 *)(a2 + 184);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v23 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v23 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A310(v4);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v9 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v25 = *(_DWORD *)(v9 + 24);
        *(_DWORD *)(v9 + 24) = v25 + 1;
        if ( v25 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v4, 0LL) )
    {
      v24 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v24 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v26 = *(_DWORD *)(v24 + 24) - 1;
          *(_DWORD *)(v24 + 24) = v26;
          if ( !v26 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      sub_140211E70(v4);
    }
  }
  if ( (*(_DWORD *)(a2 + 80) & 0x400) != 0 || a3 && !*(_QWORD *)(a2 + 176) )
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = *((_QWORD *)v34 + 4375);
          v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v32 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
          *(_DWORD *)(v35 + 20) &= v36;
          if ( v32 )
            sub_140418E4C(v34);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 0;
  }
  else
  {
    v10 = (_QWORD *)(a2 + 192);
    v11 = *(_QWORD *)(a2 + 192);
    v12 = (_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v11 + 8) != a2 + 192 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(a1 + 40) = v10;
    *(_QWORD *)(v11 + 8) = v12;
    *v10 = v12;
    v13 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( dword_140D05010 )
      sub_1405C5EC8(v13 - 48);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v13 - 48));
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, v13, 0x10uLL, BugCheckParameter4);
    CurrentThread = KeGetCurrentThread();
    v16 = (volatile signed __int64 *)((char *)CurrentThread - 48);
    if ( dword_140D05010 )
      sub_1405C5EC8((_DWORD)CurrentThread - 48);
    v17 = _InterlockedIncrement64(v16);
    if ( v17 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v16 + 6), 0x10uLL, v17);
    *(_DWORD *)(a1 + 16) |= 0x2000u;
    *(_QWORD *)(a1 + 88) = v13;
    v18 = *(_QWORD *)(a1 + 88);
    do
    {
      v19 = v18;
      v18 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 88),
              v18 & 0xFFFFFFFFFFFFFFF9uLL | ((v18 & 6) + 2),
              v18);
    }
    while ( v19 != v18 );
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
      sub_14056E8CC(v4, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
    v20 = KeGetCurrentPrcb();
    v21 = *((_QWORD *)v20 + 4375);
    if ( v21 )
    {
      if ( *((_BYTE *)v20 + 32) <= 1u )
      {
        v27 = *(_DWORD *)(v21 + 24) - 1;
        *(_DWORD *)(v21 + 24) = v27;
        if ( !v27 )
          sub_140418E4C(v20);
      }
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = *((_QWORD *)v29 + 4375);
          v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v32 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
          *(_DWORD *)(v30 + 20) &= v31;
          if ( v32 )
            sub_140418E4C(v29);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 1;
  }
}
