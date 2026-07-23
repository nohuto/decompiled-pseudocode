/*
 * XREFs of sub_1406E6D40 @ 0x1406E6D40
 * Callers:
 *     sub_1406E6CB0 @ 0x1406E6CB0 (sub_1406E6CB0.c)
 *     sub_14080FDC0 @ 0x14080FDC0 (sub_14080FDC0.c)
 *     WmiQueryTraceInformation @ 0x140815520 (WmiQueryTraceInformation.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1407940E4 @ 0x1407940E4 (sub_1407940E4.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 */

__int64 __fastcall sub_1406E6D40(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int16 *v5; // rax
  __int16 v6; // cx

  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 || !a2 )
    return 3221225485LL;
  v3 = sub_140347DB0();
  v5 = (__int16 *)sub_1407940E4(v3[108], v4, 0LL);
  if ( !v5 )
    return 3221226134LL;
  *a2 = 0LL;
  if ( *(_DWORD *)v5 )
    v6 = *v5;
  else
    v6 = -1;
  *(_WORD *)a2 = v6;
  sub_1407981E8(v5, 0LL);
  return 0LL;
}
