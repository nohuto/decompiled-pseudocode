/*
 * XREFs of KeUpdateThreadTag @ 0x14035D6A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F38C4 @ 0x1402F38C4 (sub_1402F38C4.c)
 *     sub_140344DD0 @ 0x140344DD0 (sub_140344DD0.c)
 *     sub_140345B70 @ 0x140345B70 (sub_140345B70.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_14035D0F8 @ 0x14035D0F8 (sub_14035D0F8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KeUpdateThreadTag(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rcx
  struct _KPRCB *v9; // rbx
  char v10; // al
  __int64 result; // rax
  struct _KPRCB *v12; // rcx
  char v13; // al
  int v14; // ebx
  unsigned __int8 v15; // cl
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  __int64 v22; // r8
  int v23; // eax
  bool v24; // zf
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  struct _KPRCB *v26; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int64 *v27; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v28[68]; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+1A8h] [rbp+A8h] BYREF

  v29 = a2;
  memset(v28, 0, 0x108uLL);
  v26 = 0LL;
  v27 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v3 = (-1LL << (CurrentIrql + 1)) & 4;
    v4 = (unsigned int)v3 | *(_DWORD *)(v5 + 20);
    *(_DWORD *)(v5 + 20) = v4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v25 = 0;
  while ( 1 )
  {
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
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v17 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v17 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v19 = *(_DWORD *)(v17 + 24) - 1;
        *(_DWORD *)(v17 + 24) = v19;
        if ( !v19 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v25, v3, v4, v5);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(unsigned __int8 *)(a1 + 124) != v29 )
  {
    if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
    {
      v9 = KeGetCurrentPrcb();
      v26 = v9;
      _disable();
      sub_140345C80((__int64)v9, a1, 0LL, 0LL);
      v10 = v29;
      if ( v29 )
        _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
      *(_BYTE *)(a1 + 124) = v10;
      sub_140345B70((__int64)v9, a1, 0);
      _enable();
    }
    else
    {
      if ( (unsigned __int8)sub_140344DD0(a1, (__int64)&v26, (volatile signed __int32 **)&v27, v5) == 2
        || *(_BYTE *)(a1 + 113) )
      {
        v14 = *(_DWORD *)(a1 + 536);
        v28[0] = 2097153;
        memset(&v28[1], 0, 0x104uLL);
        KeAddProcessorAffinityEx((unsigned __int16 *)v28, v14 & 0x7FFFFFFF);
        v15 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v15 <= 0xFu )
        {
          v16 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v16 + 20) |= (-1 << (v15 + 1)) & 0x1FFC;
        }
        sub_1402F38C4(0, (int)v28, (__int64)sub_140377070, a1, (__int64)&v29, 0LL);
        v12 = KeGetCurrentPrcb();
        while ( *((_DWORD *)v12 + 2912) )
          _mm_pause();
      }
      else
      {
        v13 = v29;
        if ( v29 )
          _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
        *(_BYTE *)(a1 + 124) = v13;
      }
      sub_14035D0F8((__int64)v12, (__int64)v26, v27);
    }
  }
  sub_140224100(a1);
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
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
