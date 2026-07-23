/*
 * XREFs of sub_1402DA4C0 @ 0x1402DA4C0
 * Callers:
 *     sub_14063A300 @ 0x14063A300 (sub_14063A300.c)
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14029B270 @ 0x14029B270 (sub_14029B270.c)
 *     sub_1402DA5B0 @ 0x1402DA5B0 (sub_1402DA5B0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1402DA4C0(char a1)
{
  char v2; // di
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  unsigned __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  bool v10; // zf

  v2 = 0;
  if ( (dword_140C2B830 & 8) == 0 )
    v2 = byte_140C4E930;
  sub_14042A5E0(0LL, 0LL);
  if ( !byte_140C22260 )
  {
    MEMORY[0xFFFFF78000000350] = KeQueryPerformanceCounter(0LL);
    qword_140C547E8 = 0LL;
  }
  LOBYTE(v3) = 1;
  sub_1402DA5B0(v3);
  v4 = (unsigned __int8)byte_140C2AD68;
  dword_140C2B830 = 0;
  KeReleaseSpinLockFromDpcLevel(&qword_140D312C0);
  if ( v2 )
    KeReleaseSpinLockFromDpcLevel(&qword_140D31280);
  v5 = __readcr4();
  if ( (v5 & 0x20080) != 0 )
  {
    __writecr4(v5 ^ 0x80);
    __writecr4(v5);
  }
  else
  {
    v7 = __readcr3();
    __writecr3(v7);
  }
  sub_14029B270((__int64)KeGetCurrentPrcb());
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v10 = ((unsigned int)result & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= result;
        if ( v10 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  if ( a1 )
    _enable();
  return result;
}
