/*
 * XREFs of sub_18001BB30 @ 0x18001BB30
 * Callers:
 *     sub_180018190 @ 0x180018190 (sub_180018190.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180018F4C @ 0x180018F4C (sub_180018F4C.c)
 */

__int64 __fastcall sub_18001BB30(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  *(_QWORD *)a1 = off_1800FA698;
  sub_180018F4C(qword_1801D3390, a1);
  sub_18000E72C((__int64 *)(a1 + 40));
  result = sub_18000E72C((__int64 *)(a1 + 32));
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    result = sub_180010530(v3);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
