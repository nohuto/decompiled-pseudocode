/*
 * XREFs of KeInvalidateRangeAllCachesNoIpi @ 0x140268B50
 * Callers:
 *     sub_140268AB0 @ 0x140268AB0 (sub_140268AB0.c)
 *     sub_140529428 @ 0x140529428 (sub_140529428.c)
 *     sub_14052995C @ 0x14052995C (sub_14052995C.c)
 *     sub_140529AF8 @ 0x140529AF8 (sub_140529AF8.c)
 *     sub_140529F08 @ 0x140529F08 (sub_140529F08.c)
 *     sub_14052A328 @ 0x14052A328 (sub_14052A328.c)
 *     sub_14052EC78 @ 0x14052EC78 (sub_14052EC78.c)
 *     KeInvalidateRangeAllCaches @ 0x140570E60 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     sub_140424FA0 @ 0x140424FA0 (sub_140424FA0.c)
 */

char __fastcall KeInvalidateRangeAllCachesNoIpi(__int64 a1, unsigned int a2)
{
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  char *v5; // rcx

  if ( a2 >= dword_140D05180 )
  {
    LOBYTE(CurrentPrcb) = KeInvalidateAllCaches();
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = a1 + a2;
    v4 = *((unsigned int *)CurrentPrcb + 58);
    v5 = (char *)(a1 & ~(v4 - 1));
    if ( _bittest64(&qword_140D068D8, 0x23u) )
    {
      LOBYTE(CurrentPrcb) = sub_140424FA0(v5, (~(v4 - 1) & (v4 + v3 - 1)) - (_QWORD)v5);
    }
    else
    {
      while ( (unsigned __int64)v5 < v3 )
      {
        _mm_clflush(v5);
        v5 += v4;
      }
    }
  }
  return (char)CurrentPrcb;
}
