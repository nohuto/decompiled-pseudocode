/*
 * XREFs of sub_140424FA0 @ 0x140424FA0
 * Callers:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140268B50 (KeInvalidateRangeAllCachesNoIpi.c)
 *     sub_140424FA0 @ 0x140424FA0 (sub_140424FA0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140424FA0(__int64 _RCX, __int64 a2, __int64 a3)
{
  do
  {
    __asm { clflushopt byte ptr [rcx] }
    _RCX += a3;
    a2 -= a3;
  }
  while ( a2 );
  _mm_sfence();
}
