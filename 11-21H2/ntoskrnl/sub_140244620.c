/*
 * XREFs of sub_140244620 @ 0x140244620
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140302930 @ 0x140302930 (sub_140302930.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_140244620()
{
  KIRQL v0; // al
  char v1; // bl
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  int v7; // eax
  bool v8; // zf
  struct _KPRCB *v9; // r9
  __int64 v10; // r8

  while ( 1 )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C2AE88);
    v1 = byte_140C2AE91;
    v2 = v0;
    byte_140C2AE91 = 0;
    if ( !v1 )
      break;
    KeReleaseSpinLockFromDpcLevel(&qword_140C2AE88);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = *((_QWORD *)CurrentPrcb + 4375);
          v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
          *(_DWORD *)(v6 + 20) &= v7;
          if ( v8 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
    if ( (v1 & 1) != 0 )
      sub_140302930();
  }
  byte_140C2AE90 = 0;
  KeReleaseSpinLockFromDpcLevel(&qword_140C2AE88);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v10 = *((_QWORD *)v9 + 4375);
        v8 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= result;
        if ( v8 )
          result = sub_140418E4C(v9);
      }
    }
  }
  __writecr8(v2);
  return result;
}
