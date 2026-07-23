/*
 * XREFs of sub_140B55AEC @ 0x140B55AEC
 * Callers:
 *     sub_140B27D88 @ 0x140B27D88 (sub_140B27D88.c)
 *     sub_140B51F18 @ 0x140B51F18 (sub_140B51F18.c)
 * Callees:
 *     sub_140B55BE0 @ 0x140B55BE0 (sub_140B55BE0.c)
 */

__int64 __fastcall sub_140B55AEC(__int64 a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  if ( !(unsigned __int8)sub_140B55BE0(a1) )
    return 3221225485LL;
  *a2 = *(_DWORD *)(a1 + 56);
  *a3 = *(_QWORD *)(a1 + 64);
  *a4 = *(_QWORD *)(a1 + 72);
  *a5 = *(_QWORD *)(a1 + 80);
  *a6 = *(_QWORD *)(a1 + 88);
  return 0LL;
}
