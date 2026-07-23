/*
 * XREFs of sub_1407ED16C @ 0x1407ED16C
 * Callers:
 *     sub_1407ED0C8 @ 0x1407ED0C8 (sub_1407ED0C8.c)
 *     sub_140A108BC @ 0x140A108BC (sub_140A108BC.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_1407ED1D8 @ 0x1407ED1D8 (sub_1407ED1D8.c)
 */

__int64 __fastcall sub_1407ED16C(__int64 a1, _DWORD *a2, char a3)
{
  unsigned int v4; // edi

  v4 = 0;
  if ( *a2 == 1 )
  {
    *(_DWORD *)(a1 + 1328) |= 1u;
    goto LABEL_7;
  }
  if ( *a2 == 2 )
  {
LABEL_7:
    *(_DWORD *)(a1 + 1328) |= 2u;
    goto LABEL_4;
  }
  if ( *a2 != 3 && (a3 & 1) == 0 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpValidateAndApplyCompatFlags");
    return v4;
  }
LABEL_4:
  if ( (unsigned int)sub_1407ED1D8(a1, a1 + 28) )
    return 1;
  sub_1406E0C3C(1LL, (__int64)"SdbpValidateAndApplyCompatFlags");
  if ( (a3 & 8) == 0 && ((a3 & 4) == 0 || (unsigned int)sub_140792CCC(a1, 0LL, 28673)) )
    return 1;
  return v4;
}
