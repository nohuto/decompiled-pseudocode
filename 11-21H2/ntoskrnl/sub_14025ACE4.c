/*
 * XREFs of sub_14025ACE4 @ 0x14025ACE4
 * Callers:
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 *     sub_1409BA380 @ 0x1409BA380 (sub_1409BA380.c)
 * Callees:
 *     sub_1402F8A20 @ 0x1402F8A20 (sub_1402F8A20.c)
 */

char __fastcall sub_14025ACE4(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char result; // al
  char v6; // [rsp+40h] [rbp+18h] BYREF

  result = 0;
  v6 = 0;
  if ( !a1 || (*a4 = sub_1402F8A20(a1, a2, &v6), (result = v6) == 0) )
    *a4 = -1073741790;
  return result;
}
