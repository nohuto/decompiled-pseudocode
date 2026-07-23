/*
 * XREFs of sub_140362C48 @ 0x140362C48
 * Callers:
 *     sub_14034A490 @ 0x14034A490 (sub_14034A490.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140362B90 @ 0x140362B90 (sub_140362B90.c)
 *     sub_140362EC4 @ 0x140362EC4 (sub_140362EC4.c)
 *     sub_140362EF4 @ 0x140362EF4 (sub_140362EF4.c)
 *     sub_140362FA0 @ 0x140362FA0 (sub_140362FA0.c)
 *     sub_140364760 @ 0x140364760 (sub_140364760.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140362C48(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  int v7; // esi
  BOOL v8; // ebx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned __int8 v18; // bp
  __int64 v19; // r15
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  __int64 v22; // r14
  struct _KTHREAD *CurrentThread; // rcx
  bool v24; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v28; // r9
  int v29; // edx
  int v30; // [rsp+80h] [rbp+8h]

  v6 = *(unsigned __int8 *)(a2 + 1);
  v7 = (unsigned __int16)word_140016360[v6];
  v30 = v7;
  v8 = (dword_140C1BBE0 & 1) != 0 && sub_140362B90(a1 + 8, v6);
  v9 = sub_140362EF4(a2, v8);
  v10 = (8 * (((unsigned __int64)(unsigned int)(2 * v9) + 63) >> 6) + 63) & 0xFFFFFFF0;
  v11 = sub_140362EC4(v10 + 2 * ((unsigned int)(v7 * v9 + v10 + 4095) >> 12) + v7 * v9);
  v14 = 12LL;
  if ( v11 <= 0xC )
    LOBYTE(v11) = 12;
  v15 = 1 << v11;
  if ( (dword_140C1BBE0 & 8) != 0 && (unsigned int)v13 <= v12 >> 6 )
  {
    v16 = sub_140362EC4(v12);
    if ( v16 <= (unsigned int)v14 )
      LOBYTE(v16) = v14;
    v17 = 1 << v16;
    if ( v15 > v17 )
      v15 = v17;
  }
  if ( (a3 & 1) != 0 )
    v18 = -1;
  else
    v18 = sub_140364760(a1 + 9, *((unsigned __int8 *)a1 + 57), v13, v14);
  v19 = sub_14042A5E0(*a1, v15);
  if ( v19 )
  {
    if ( v8 && (dword_140C1BBE0 & 2) != 0 )
    {
      v20 = v15;
    }
    else
    {
      v20 = 2 * v30;
      if ( ((2 * v30 - 1) & (2 * v30)) != 0 )
      {
        _BitScanReverse(&v21, v20);
        v20 = 1 << (v21 + 1);
      }
      if ( v20 <= 0x1000 )
        v20 = 4096;
      if ( v20 >= v15 )
        v20 = v15;
    }
    if ( (int)sub_14042A5E0(*a1, v19) < 0 )
    {
      v22 = 0LL;
      sub_14042A5E0(*a1, v19);
    }
    else
    {
      sub_140362FA0(v19, v15, v20, v30, (__int64)a1);
      _InterlockedAdd64((volatile signed __int64 *)(a2 + 64), 1uLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), *(unsigned __int16 *)(v19 + 34));
      v22 = v19;
    }
  }
  else
  {
    v22 = 0LL;
  }
  if ( (a3 & 1) == 0 )
  {
    if ( *((_BYTE *)a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)a1 + 18);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v18 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v28 = *((_QWORD *)CurrentPrcb + 4375);
            v29 = ~(unsigned __int16)(-1LL << (v18 + 1));
            v24 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
            *(_DWORD *)(v28 + 20) &= v29;
            if ( v24 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v18);
    }
    else
    {
      if ( _InterlockedCompareExchange64(a1 + 9, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 9);
      sub_1402AFC00((ULONG_PTR)(a1 + 9));
      CurrentThread = KeGetCurrentThread();
      v24 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v24 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
    }
  }
  return v22;
}
