/*
 * XREFs of sub_14025DC0C @ 0x14025DC0C
 * Callers:
 *     sub_1406EADD4 @ 0x1406EADD4 (sub_1406EADD4.c)
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_1408025E8 @ 0x1408025E8 (sub_1408025E8.c)
 *     sub_14080877C @ 0x14080877C (sub_14080877C.c)
 *     sub_140864980 @ 0x140864980 (sub_140864980.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_140369FDC @ 0x140369FDC (sub_140369FDC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14025DC0C(int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  int v4; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  bool v8; // zf

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C234A8);
  if ( !dword_140D05340[v1] || byte_140C222F0 )
  {
    sub_140369FDC(qword_140C234A0);
  }
  else
  {
    ++dword_140C222E0;
    v3 = (unsigned int)(10000 * dword_140D05340[v1]);
    v4 = qword_140C222E8;
    if ( qword_140C222E8 <= (unsigned __int64)(v3 + MEMORY[0xFFFFF78000000008]) )
    {
      v4 = v3 + MEMORY[0xFFFFF78000000008];
      qword_140C222E8 = v3 + MEMORY[0xFFFFF78000000008];
    }
    sub_1402E2D20((unsigned int)&stru_140C23460, MEMORY[0xFFFFF78000000008] - v4, 0, 0, (__int64)&dword_140C234C0);
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C234A8);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v8 = ((unsigned int)result & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= result;
        if ( v8 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
