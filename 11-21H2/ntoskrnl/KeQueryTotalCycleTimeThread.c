/*
 * XREFs of KeQueryTotalCycleTimeThread @ 0x140345800
 * Callers:
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 *     sub_1402F38C4 @ 0x1402F38C4 (sub_1402F38C4.c)
 *     sub_140344DD0 @ 0x140344DD0 (sub_140344DD0.c)
 *     sub_140345B70 @ 0x140345B70 (sub_140345B70.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_14035D0F8 @ 0x14035D0F8 (sub_14035D0F8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

ULONG64 __stdcall KeQueryTotalCycleTimeThread(PKTHREAD Thread, PULONG64 CycleTimeStamp)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rsi
  ULONG64 v8; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // edi
  unsigned __int8 v15; // cl
  struct _KPRCB *v16; // rcx
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // rax
  __int64 v25; // r9
  int v26; // edx
  bool v27; // zf
  int v28; // [rsp+30h] [rbp-168h] BYREF
  volatile signed __int32 *v29; // [rsp+38h] [rbp-160h] BYREF
  __int64 v30; // [rsp+40h] [rbp-158h] BYREF
  _DWORD v31[68]; // [rsp+50h] [rbp-148h] BYREF

  memset(v31, 0, 0x108uLL);
  v30 = 0LL;
  v29 = 0LL;
  if ( Thread == KeGetCurrentThread() )
  {
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = sub_140345C80(CurrentPrcb, Thread, CycleTimeStamp, 0LL);
    sub_140345B70(CurrentPrcb, Thread, 0LL);
    _enable();
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      v4 = (-1LL << (CurrentIrql + 1)) & 4;
      v5 = (unsigned int)v4 | *(_DWORD *)(v6 + 20);
      *(_DWORD *)(v6 + 20) = v5;
    }
    v11 = KeGetCurrentPrcb();
    v28 = 0;
    v12 = *((_QWORD *)v11 + 4375);
    if ( v12 )
    {
      if ( *((_BYTE *)v11 + 32) <= 1u )
      {
        v18 = *(_DWORD *)(v12 + 24);
        *(_DWORD *)(v12 + 24) = v18 + 1;
        if ( v18 == -1 )
LABEL_26:
          sub_140418E4C(v11);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)Thread + 16, 0LL) )
    {
      v19 = *((_QWORD *)v11 + 4375);
      if ( v19 )
      {
        if ( *((_BYTE *)v11 + 32) <= 1u )
        {
          v20 = *(_DWORD *)(v19 + 24) - 1;
          *(_DWORD *)(v19 + 24) = v20;
          if ( !v20 )
            sub_140418E4C(v11);
        }
      }
      do
        sub_1402F32E0(&v28, v4, v5, v6);
      while ( *((_QWORD *)Thread + 8) );
      v21 = *((_QWORD *)v11 + 4375);
      if ( v21 )
      {
        if ( *((_BYTE *)v11 + 32) <= 1u )
        {
          v22 = *(_DWORD *)(v21 + 24);
          *(_DWORD *)(v21 + 24) = v22 + 1;
          if ( v22 == -1 )
            goto LABEL_26;
        }
      }
    }
    if ( (unsigned __int8)sub_140344DD0((__int64)Thread, (__int64)&v30, &v29, v6) == 2 )
    {
      v14 = *((_DWORD *)Thread + 134);
      sub_14035D0F8(v13, v30, v29);
      sub_140224100((__int64)Thread);
      v31[0] = 2097153;
      memset(&v31[1], 0, 0x104uLL);
      KeAddProcessorAffinityEx((unsigned __int16 *)v31, v14);
      v15 = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v15 <= 0xFu )
      {
        v17 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v17 + 20) |= (-1 << (v15 + 1)) & 0x1FFC;
      }
      sub_1402F38C4(0, (int)v31, (__int64)_misaligned_access, 0LL, 0LL, 0LL);
      v16 = KeGetCurrentPrcb();
      while ( *((_DWORD *)v16 + 2912) )
        _mm_pause();
      *CycleTimeStamp = __rdtsc();
      v8 = *((_QWORD *)Thread + 9);
    }
    else
    {
      if ( *((_BYTE *)Thread + 113) )
        sub_1402F374C(1);
      *CycleTimeStamp = __rdtsc();
      v8 = *((_QWORD *)Thread + 9);
      sub_14035D0F8(v13, v30, v29);
      sub_140224100((__int64)Thread);
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = *((_QWORD *)v24 + 4375);
          v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v27 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
          *(_DWORD *)(v25 + 20) &= v26;
          if ( v27 )
            sub_140418E4C(v24);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return v8;
}
