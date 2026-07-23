/*
 * XREFs of sub_140261ADC @ 0x140261ADC
 * Callers:
 *     KeInitializeMutex @ 0x140261AA0 (KeInitializeMutex.c)
 *     sub_140261AC0 @ 0x140261AC0 (sub_140261AC0.c)
 *     sub_1402D749C @ 0x1402D749C (sub_1402D749C.c)
 *     KeInitializeMutant @ 0x1403A15E0 (KeInitializeMutant.c)
 *     sub_140613080 @ 0x140613080 (sub_140613080.c)
 *     sub_1406131B0 @ 0x1406131B0 (sub_1406131B0.c)
 *     sub_140B0E114 @ 0x140B0E114 (sub_140B0E114.c)
 *     sub_140B22C40 @ 0x140B22C40 (sub_140B22C40.c)
 *     sub_140B27B30 @ 0x140B27B30 (sub_140B27B30.c)
 *     sub_140B2EF10 @ 0x140B2EF10 (sub_140B2EF10.c)
 *     sub_140B2F410 @ 0x140B2F410 (sub_140B2F410.c)
 *     sub_140B2FC64 @ 0x140B2FC64 (sub_140B2FC64.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140261ADC(__int64 a1, char a2, char a3, char a4)
{
  char v7; // cl
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v12; // rcx
  struct _KTHREAD **v13; // rdx
  struct _KTHREAD *v14; // rcx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  __int64 v21; // r8
  int v22; // eax
  bool v23; // zf
  int v24; // [rsp+58h] [rbp+10h] BYREF
  char v25; // [rsp+60h] [rbp+18h]

  v25 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)a1 = 2;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(a1 + 40) = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v15 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v15 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = 0;
    while ( 1 )
    {
      v12 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v12 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v16 = *(_DWORD *)(v12 + 24);
          *(_DWORD *)(v12 + 24) = v16 + 1;
          if ( v16 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
        break;
      v17 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v17 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v18 = *(_DWORD *)(v17 + 24) - 1;
          *(_DWORD *)(v17 + 24) = v18;
          if ( !v18 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v24);
      while ( *((_QWORD *)CurrentThread + 8) );
    }
    v13 = (struct _KTHREAD **)*((_QWORD *)CurrentThread + 98);
    v14 = (struct _KTHREAD *)(a1 + 24);
    if ( *v13 != (struct _KTHREAD *)((char *)CurrentThread + 776) )
      __fastfail(3u);
    *(_QWORD *)v14 = (char *)CurrentThread + 776;
    *(_QWORD *)(a1 + 32) = v13;
    *v13 = v14;
    *((_QWORD *)CurrentThread + 98) = v14;
    sub_140224100((__int64)CurrentThread);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = *((_QWORD *)v20 + 4375);
          v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
          *(_DWORD *)(v21 + 20) &= v22;
          if ( v23 )
            sub_140418E4C(v20);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 1;
  }
  v7 = v25;
  result = a1 + 8;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_BYTE *)(a1 + 48) &= ~1u;
  *(_BYTE *)(a1 + 49) = v7;
  if ( (a4 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 48) |= 2u;
    if ( a2 )
    {
      result = sub_140347C10(a1, 0LL, 1LL);
      if ( result )
        *(_BYTE *)(result + 18) = 1;
    }
  }
  return result;
}
