/*
 * XREFs of sub_18000B14C @ 0x18000B14C
 * Callers:
 *     DllEntryPoint @ 0x18000B2B0 (DllEntryPoint.c)
 * Callees:
 *     sub_18000AF40 @ 0x18000AF40 (sub_18000AF40.c)
 *     sub_18000B694 @ 0x18000B694 (sub_18000B694.c)
 *     sub_1800105EC @ 0x1800105EC (sub_1800105EC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000B14C(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v7; // ebx
  unsigned int v8; // eax

  if ( !a2 && dword_1801F6D10 <= 0 )
    return 0LL;
  if ( a2 - 1 > 1 || (v7 = sub_18000AF40(a1, a2, a3)) != 0 )
  {
    v8 = sub_1800105EC(a1, a2, a3);
    v7 = v8;
    if ( a2 == 1 && !v8 )
    {
      sub_1800105EC(a1, 0LL, a3);
      sub_18000AF40(a1, 0, a3);
    }
    if ( !a2 || a2 == 3 )
      return (unsigned int)sub_18000AF40(a1, a2, a3) != 0;
  }
  return v7;
}
