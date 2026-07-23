/*
 * XREFs of sub_1406E8E20 @ 0x1406E8E20
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_140679ADC @ 0x140679ADC (sub_140679ADC.c)
 *     sub_140679BEC @ 0x140679BEC (sub_140679BEC.c)
 */

__int64 __fastcall sub_1406E8E20(__int64 a1, __int64 a2, __int64 a3, void *a4, void *a5, __int64 a6)
{
  if ( *(_DWORD *)(a3 + 16) != 16 || wcsicmp(*(const wchar_t **)a3, L"Properties") )
    return sub_140679ADC(a4, a5, a3, a6);
  else
    return sub_140679BEC(a4, a5, *(_QWORD *)(a2 + 8), 1, 1u, 0LL, a6);
}
