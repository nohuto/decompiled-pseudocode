/*
 * XREFs of sub_18004A530 @ 0x18004A530
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800294DC @ 0x1800294DC (sub_1800294DC.c)
 *     sub_18004A3DC @ 0x18004A3DC (sub_18004A3DC.c)
 *     sub_180081538 @ 0x180081538 (sub_180081538.c)
 */

__int64 __fastcall sub_18004A530(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // ecx
  _BYTE v7[96]; // [rsp+50h] [rbp-78h] BYREF

  result = *a4;
  v6 = *(_DWORD *)(*a4 + 440);
  if ( (v6 & 0x10000) != 0 && (v6 & 0x400000) != 0 )
  {
    sub_1800294DC((__int64)v7, 12LL, 8LL, sub_180010200);
    sub_18004A3DC((unsigned __int64 *)(a1 + 88), (__int64)v7);
    sub_180081538(a1);
  }
  return result;
}
