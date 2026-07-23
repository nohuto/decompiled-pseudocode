/*
 * XREFs of sub_14058E2D0 @ 0x14058E2D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_14058E2D0()
{
  KIRQL i; // al
  _QWORD *v1; // rcx
  PVOID *v2; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf
  PVOID v8; // rdi
  KIRQL v9; // bl
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  __int64 v12; // r8
  int v13; // eax
  __int64 result; // rax

  for ( i = ExAcquireSpinLockExclusive(&dword_140C51E90); ; i = ExAcquireSpinLockExclusive(&dword_140C51E90) )
  {
    v8 = qword_140C51EA0;
    v9 = i;
    if ( qword_140C51EA0 == &qword_140C51EA0 )
      break;
    v1 = *(_QWORD **)qword_140C51EA0;
    v2 = (PVOID *)*((_QWORD *)qword_140C51EA0 + 1);
    if ( *(PVOID *)(*(_QWORD *)qword_140C51EA0 + 8LL) != qword_140C51EA0 || *v2 != qword_140C51EA0 )
      __fastfail(3u);
    *v2 = v1;
    v1[1] = v2;
    --qword_140C51EB0;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C51E90);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v5 = *((_QWORD *)CurrentPrcb + 4375);
          v6 = ~(unsigned __int16)(-1LL << (v9 + 1));
          v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
          *(_DWORD *)(v5 + 20) &= v6;
          if ( v7 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    ExFreePoolWithTag(v8, 0);
  }
  byte_140C51EB8 = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C51E90);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && v9 <= 0xFu && v10 >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = *((_QWORD *)v11 + 4375);
        v13 = ~(unsigned __int16)(-1LL << (v9 + 1));
        v7 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v7 )
          sub_140418E4C((__int64)v11);
      }
    }
  }
  result = v9;
  __writecr8(v9);
  return result;
}
