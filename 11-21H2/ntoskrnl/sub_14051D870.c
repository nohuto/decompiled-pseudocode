/*
 * XREFs of sub_14051D870 @ 0x14051D870
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_14051D870()
{
  unsigned __int8 i; // al
  __int64 v1; // rdi
  unsigned __int8 v2; // bl
  __int64 v3; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  int v7; // eax
  bool v8; // zf
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r9
  __int64 v11; // r8
  int v12; // eax
  __int64 result; // rax

  for ( i = sub_140252344(&qword_140C4B0F0); ; i = sub_140252344(&qword_140C4B0F0) )
  {
    v1 = qword_140C4B0E0;
    v2 = i;
    if ( (__int64 *)qword_140C4B0E0 == &qword_140C4B0E0 )
      break;
    v3 = *(_QWORD *)qword_140C4B0E0;
    if ( *(__int64 **)(qword_140C4B0E0 + 8) != &qword_140C4B0E0 || *(_QWORD *)(v3 + 8) != qword_140C4B0E0 )
      __fastfail(3u);
    qword_140C4B0E0 = *(_QWORD *)qword_140C4B0E0;
    *(_QWORD *)(v3 + 8) = &qword_140C4B0E0;
    KeReleaseSpinLockFromDpcLevel(&qword_140C4B0F0);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = *((_QWORD *)CurrentPrcb + 4375);
          v7 = ~(unsigned __int16)(-1LL << (v2 + 1));
          v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
          *(_DWORD *)(v6 + 20) &= v7;
          if ( v8 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
    KeSetEvent((PRKEVENT)(v1 - 24), 0, 0);
  }
  byte_140C4B068 = 0;
  KeReleaseSpinLockFromDpcLevel(&qword_140C4B0F0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && v2 <= 0xFu && v9 >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        v11 = *((_QWORD *)v10 + 4375);
        v12 = ~(unsigned __int16)(-1LL << (v2 + 1));
        v8 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v8 )
          sub_140418E4C((__int64)v10);
      }
    }
  }
  result = v2;
  __writecr8(v2);
  return result;
}
