/*
 * XREFs of sub_14029D204 @ 0x14029D204
 * Callers:
 *     sub_14029CC2C @ 0x14029CC2C (sub_14029CC2C.c)
 * Callees:
 *     sub_14029D27C @ 0x14029D27C (sub_14029D27C.c)
 */

__int64 __fastcall sub_14029D204(__int64 a1, __int64 a2)
{
  int v3; // ecx
  __int64 v4; // r9
  _QWORD *v5; // r10

  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 80LL);
  if ( (v3 & 0x20) != 0 )
    return 1LL;
  if ( (v3 & 0x100000) != 0 )
    return 0LL;
  if ( (unsigned __int8)sub_14029D27C(a2, a1 + 40) && (unsigned __int8)sub_14029D27C(v4 + 24, v4 + 32) )
    return 2LL;
  if ( *v5 - *(_QWORD *)(v4 + 32) == *(_QWORD *)(v4 + 32) - *(_QWORD *)(v4 + 16) )
    return 3LL;
  else
    return 0LL;
}
