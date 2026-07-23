/*
 * XREFs of sub_140683088 @ 0x140683088
 * Callers:
 *     sub_140682900 @ 0x140682900 (sub_140682900.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 * Callees:
 *     sub_140209344 @ 0x140209344 (sub_140209344.c)
 *     PsUpdateComponentPower @ 0x140209380 (PsUpdateComponentPower.c)
 *     sub_14035B760 @ 0x14035B760 (sub_14035B760.c)
 *     sub_140683844 @ 0x140683844 (sub_140683844.c)
 *     sub_140683890 @ 0x140683890 (sub_140683890.c)
 *     sub_1406CAA7C @ 0x1406CAA7C (sub_1406CAA7C.c)
 */

__int64 __fastcall sub_140683088(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdx

  sub_140683890(a3, 0LL);
  v6 = *(_QWORD *)(a1 + 1208);
  if ( v6 )
  {
    if ( a2 && *(_QWORD *)(a2 + 1208) || byte_140D068E0 )
    {
      sub_1406CAA7C(a3, 0LL);
      v6 = *(_QWORD *)(a1 + 1208);
    }
    sub_1406CAA7C(a3, v6);
  }
  v7 = (*(_DWORD *)(a1 + 1056) != 0 ? 2 : 0) | 1u;
  if ( !*(_DWORD *)(a1 + 1048) )
    v7 = *(_DWORD *)(a1 + 1056) != 0 ? 2 : 0;
  sub_140683844(a3, v7, 0LL);
  if ( *(_DWORD *)(a1 + 1052) && (!a2 || !*(_DWORD *)(a2 + 1052)) )
    sub_14035B760(a3, 1);
  if ( (*(_DWORD *)(a1 + 1512) & 0x40000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a3 + 632), 4u);
  PsUpdateComponentPower((PEPROCESS)a3, 8, *(_QWORD *)(a1 + 1768));
  return sub_140209344((volatile signed __int32 *)(a3 + 1120), 4, 32);
}
