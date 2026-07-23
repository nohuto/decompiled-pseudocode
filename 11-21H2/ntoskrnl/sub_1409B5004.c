/*
 * XREFs of sub_1409B5004 @ 0x1409B5004
 * Callers:
 *     sub_14074C12C @ 0x14074C12C (sub_14074C12C.c)
 * Callees:
 *     sub_1402D2B6C @ 0x1402D2B6C (sub_1402D2B6C.c)
 *     sub_1402D2BA0 @ 0x1402D2BA0 (sub_1402D2BA0.c)
 */

__int64 __fastcall sub_1409B5004(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  if ( *a4 < 8u )
    return 2147483653LL;
  if ( !sub_1402D2BA0(a1, a2) )
    return 3221226094LL;
  *a4 -= 8;
  *(_QWORD *)a3 = 0LL;
  *(_DWORD *)a3 = 7;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 52LL);
  sub_1402D2B6C(a1, a2);
  return 0LL;
}
