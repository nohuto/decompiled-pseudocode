/*
 * XREFs of sub_14076FB70 @ 0x14076FB70
 * Callers:
 *     sub_14067B998 @ 0x14067B998 (sub_14067B998.c)
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_140747FB4 @ 0x140747FB4 (sub_140747FB4.c)
 *     sub_14074856C @ 0x14074856C (sub_14074856C.c)
 *     sub_140749294 @ 0x140749294 (sub_140749294.c)
 *     sub_140749A80 @ 0x140749A80 (sub_140749A80.c)
 *     sub_14074C8DC @ 0x14074C8DC (sub_14074C8DC.c)
 *     sub_140764C94 @ 0x140764C94 (sub_140764C94.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_140766A5C @ 0x140766A5C (sub_140766A5C.c)
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_14076F8AC @ 0x14076F8AC (sub_14076F8AC.c)
 *     sub_14076FAB0 @ 0x14076FAB0 (sub_14076FAB0.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     sub_140810960 @ 0x140810960 (sub_140810960.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_14081F570 @ 0x14081F570 (sub_14081F570.c)
 *     sub_14081FCD8 @ 0x14081FCD8 (sub_14081FCD8.c)
 *     sub_140820308 @ 0x140820308 (sub_140820308.c)
 *     sub_140947934 @ 0x140947934 (sub_140947934.c)
 *     sub_140947A8C @ 0x140947A8C (sub_140947A8C.c)
 *     sub_140958D9C @ 0x140958D9C (sub_140958D9C.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 *     sub_140959DF4 @ 0x140959DF4 (sub_140959DF4.c)
 *     sub_140959F9C @ 0x140959F9C (sub_140959F9C.c)
 *     sub_140AF7328 @ 0x140AF7328 (sub_140AF7328.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 *     sub_140B2D6B4 @ 0x140B2D6B4 (sub_140B2D6B4.c)
 * Callees:
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 */

__int64 __fastcall sub_14076FB70(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(a1 + 396) = a2 | v2;
  result = v2 ^ (a2 | v2);
  if ( (result & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      sub_140772044(a1, v5, 11LL);
      v6 = *(unsigned int *)(a1 + 396);
      result = v2 ^ *(_DWORD *)(a1 + 396);
      if ( (((unsigned __int16)v2 ^ *(_WORD *)(a1 + 396)) & 0x4000) != 0 )
      {
        result = sub_140772044(v6, *(_QWORD *)(a1 + 48), 28LL);
        LODWORD(v6) = *(_DWORD *)(a1 + 396);
      }
      v7 = v2 ^ (unsigned int)v6;
      if ( (v7 & 0x2000) != 0 )
        return sub_140772044(v7, *(_QWORD *)(a1 + 48), 27LL);
    }
  }
  return result;
}
