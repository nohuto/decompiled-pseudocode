/*
 * XREFs of sub_140A621FC @ 0x140A621FC
 * Callers:
 *     sub_140A628D0 @ 0x140A628D0 (sub_140A628D0.c)
 * Callees:
 *     KeSweepLocalCaches @ 0x140389F70 (KeSweepLocalCaches.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeSaveStateForHibernate @ 0x140420460 (KeSaveStateForHibernate.c)
 *     sub_1405242E0 @ 0x1405242E0 (sub_1405242E0.c)
 *     sub_140A62458 @ 0x140A62458 (sub_140A62458.c)
 */

__int64 __fastcall sub_140A621FC(__int64 a1)
{
  __int16 v1; // bp
  int v3; // ebp
  unsigned __int8 CurrentIrql; // bl
  unsigned int LockArray_high; // r8d
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf
  __int64 result; // rax
  __int16 v12; // [rsp+30h] [rbp-8h]
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = v12;
  _disable();
  v3 = v1 & 0x200;
  CurrentIrql = KeGetCurrentIrql();
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v13 = __rdtsc();
  KeSaveStateForHibernate(qword_140C4BFD0 + 1472LL * LockArray_high);
  if ( *(_DWORD *)(a1 + 56) < *(_DWORD *)a1 )
  {
    KeSweepLocalCaches();
    sub_1405242E0((volatile signed __int32 *)(a1 + 56));
  }
  sub_140A62458(a1, &v13);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v6 = KeGetCurrentIrql();
      if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v3 )
    _enable();
  return result;
}
