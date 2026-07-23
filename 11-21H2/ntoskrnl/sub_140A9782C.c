/*
 * XREFs of sub_140A9782C @ 0x140A9782C
 * Callers:
 *     sub_140A96CA8 @ 0x140A96CA8 (sub_140A96CA8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140A9782C()
{
  KIRQL v0; // al
  PVOID **v1; // rcx
  unsigned __int64 v2; // rdi
  PVOID *v3; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  bool v7; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C1ACD0);
  v1 = (PVOID **)qword_140C1ACE0;
  v2 = v0;
  if ( qword_140C1ACE0 != &qword_140C1ACE0 )
  {
    do
    {
      v3 = *v1;
      ExFreePoolWithTag(v1, 0);
      v1 = (PVOID **)v3;
    }
    while ( v3 != &qword_140C1ACE0 );
  }
  dword_140C1ACDC = 0;
  qword_140C1ACE8 = (__int64)&qword_140C1ACE0;
  qword_140C1ACE0 = &qword_140C1ACE0;
  KeReleaseSpinLockFromDpcLevel(&qword_140C1ACD0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = ((unsigned int)result & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= result;
        if ( v7 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
