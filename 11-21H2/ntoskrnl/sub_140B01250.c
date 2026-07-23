/*
 * XREFs of sub_140B01250 @ 0x140B01250
 * Callers:
 *     sub_140AFFF64 @ 0x140AFFF64 (sub_140AFFF64.c)
 * Callees:
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 *     sub_140826D50 @ 0x140826D50 (sub_140826D50.c)
 *     sub_140B01140 @ 0x140B01140 (sub_140B01140.c)
 */

__int64 __fastcall sub_140B01250(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 result; // rax
  __int64 v6; // rax

  if ( !a1 )
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v6 + 1] = -1073740768;
    dword_140C2A220[2 * v6] = 131872;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("Engine != NULL", "minkernel\\ntos\\kshim\\ksecore.c", 0x320u, 0LL);
  }
  a1[6] = 0LL;
  a1[3] = a1 + 2;
  a1[2] = a1 + 2;
  a1[5] = a1 + 4;
  a1[4] = a1 + 4;
  v2 = sub_140826D50((__int64)a1, (__int64)sub_140861700, (__int64)sub_1406EA8C0, (__int64)sub_140965070);
  a1[9] = v2;
  if ( !v2 )
    return 3221225495LL;
  v4 = sub_140826D50(v3, (__int64)sub_14025D250, (__int64)sub_14025B940, (__int64)sub_14057DA30);
  a1[10] = v4;
  if ( !v4 )
    return 3221225495LL;
  a1[7] = sub_140372F90;
  a1[8] = sub_14057D5E0;
  result = sub_140B01140((int *)&dword_140C54EF0);
  if ( (int)result >= 0 && (dword_140C54EF0 & 3) == 3 )
    return 3221225659LL;
  return result;
}
