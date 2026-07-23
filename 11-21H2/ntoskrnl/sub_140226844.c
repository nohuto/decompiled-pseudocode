/*
 * XREFs of sub_140226844 @ 0x140226844
 * Callers:
 *     sub_140226804 @ 0x140226804 (sub_140226804.c)
 *     sub_14025BDC8 @ 0x14025BDC8 (sub_14025BDC8.c)
 *     sub_14025E544 @ 0x14025E544 (sub_14025E544.c)
 * Callees:
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1405AF30C @ 0x1405AF30C (sub_1405AF30C.c)
 */

__int64 __fastcall sub_140226844(ULONG_PTR a1, unsigned __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 v4; // r8

  v2 = 0LL;
  if ( (_DWORD)a2 )
  {
    v4 = sub_1405AF30C(a1);
    a2 = *(_QWORD *)a1 & 0xFFFF7FFFFFFFFFFFuLL;
    *(_QWORD *)a1 = a2;
  }
  else
  {
    v2 = a1;
    *(_BYTE *)(a1 + 34) &= ~8u;
    v4 = *(_QWORD *)(a1 + 16);
  }
  *(_QWORD *)(v4 + 24) = 0LL;
  *(_BYTE *)(v4 + 70) = 1;
  if ( v2 )
    *(_QWORD *)(v2 + 16) = sub_1402CCC50(128LL, a2);
  return v4;
}
