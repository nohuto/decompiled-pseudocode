/*
 * XREFs of KeIpiGenericCall @ 0x1403B4600
 * Callers:
 *     sub_140398D58 @ 0x140398D58 (sub_140398D58.c)
 *     sub_1403D3EE0 @ 0x1403D3EE0 (sub_1403D3EE0.c)
 *     sub_1403DD730 @ 0x1403DD730 (sub_1403DD730.c)
 *     sub_140509620 @ 0x140509620 (sub_140509620.c)
 *     sub_14050DC38 @ 0x14050DC38 (sub_14050DC38.c)
 *     sub_14050F964 @ 0x14050F964 (sub_14050F964.c)
 *     sub_14056918C @ 0x14056918C (sub_14056918C.c)
 *     sub_14057158C @ 0x14057158C (sub_14057158C.c)
 *     sub_1405716A4 @ 0x1405716A4 (sub_1405716A4.c)
 *     sub_140590CF0 @ 0x140590CF0 (sub_140590CF0.c)
 *     sub_1405A216C @ 0x1405A216C (sub_1405A216C.c)
 *     sub_1405AE144 @ 0x1405AE144 (sub_1405AE144.c)
 *     sub_14090A1A0 @ 0x14090A1A0 (sub_14090A1A0.c)
 *     sub_14090B0BC @ 0x14090B0BC (sub_14090B0BC.c)
 *     sub_140A5A248 @ 0x140A5A248 (sub_140A5A248.c)
 *     sub_140A69694 @ 0x140A69694 (sub_140A69694.c)
 *     sub_140A69870 @ 0x140A69870 (sub_140A69870.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F38C4 @ 0x1402F38C4 (sub_1402F38C4.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

ULONG_PTR __stdcall KeIpiGenericCall(PKIPI_BROADCAST_WORKER BroadcastFunction, ULONG_PTR Context)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v5; // r10
  ULONG v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // cl
  ULONG_PTR v11; // rbp
  struct _KPRCB *v12; // rcx
  __int64 v14; // r9
  __int64 v15; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v17; // rdx
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  __int64 v21; // r8
  int v22; // eax
  ULONG ActiveProcessorCount; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+70h] [rbp+18h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xCu )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && v5 <= 0xFu )
      {
        v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v14 + 20) |= (-1 << (v5 + 1)) & 0x1FFC;
      }
    }
  }
  v24 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v6 = ActiveProcessorCount - 1;
  KeAcquireSpinLockAtDpcLevel(&qword_140D31340);
  if ( v6 )
    sub_1402F38C4(1, 0, (__int64)sub_1403B4A10, (__int64)BroadcastFunction, Context, (__int64)&ActiveProcessorCount);
  while ( ActiveProcessorCount != 1 )
    sub_1402F32E0(&v24, v7, v8, v9);
  v10 = KeGetCurrentIrql();
  __writecr8(0xEuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v10 <= 0xFu )
  {
    v15 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v7 = (-1LL << (v10 + 1)) & 0x7FFC;
    *(_DWORD *)(v15 + 20) |= v7;
  }
  ActiveProcessorCount = 0;
  v11 = sub_14042A5E0(Context, v7);
  if ( v6 )
  {
    if ( CurrentIrql <= 0xCu )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = *((_QWORD *)CurrentPrcb + 4375);
          v18 = (*(_DWORD *)(v17 + 20) & 0xFFFF1FFF) == 0;
          *(_DWORD *)(v17 + 20) &= 0xFFFF1FFF;
          if ( v18 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      __writecr8(0xCuLL);
    }
    v12 = KeGetCurrentPrcb();
    while ( *((_DWORD *)v12 + 2912) )
      _mm_pause();
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140D31340);
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
        v18 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
        *(_DWORD *)(v21 + 20) &= v22;
        if ( v18 )
          sub_140418E4C(v20);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v11;
}
