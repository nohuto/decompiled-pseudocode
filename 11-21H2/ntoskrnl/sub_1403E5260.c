/*
 * XREFs of sub_1403E5260 @ 0x1403E5260
 * Callers:
 *     sub_1403E53A0 @ 0x1403E53A0 (sub_1403E53A0.c)
 *     sub_1403E54DC @ 0x1403E54DC (sub_1403E54DC.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     _ctrlfp @ 0x1403E5C18 (_ctrlfp.c)
 */

double __fastcall sub_1403E5260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)PsGetHostSilo() )
    _misaligned_access();
  return a6;
}
