/*
 * XREFs of sub_1406522B0 @ 0x1406522B0
 * Callers:
 *     sub_1406510A0 @ 0x1406510A0 (sub_1406510A0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 */

__int64 __fastcall sub_1406522B0(__int64 a1)
{
  int v2; // ebx
  DEVPROPGUID fmtid; // [rsp+28h] [rbp-30h] BYREF
  int v5; // [rsp+38h] [rbp-20h]

  v5 = 10;
  fmtid = stru_140010A18.fmtid;
  v2 = sub_14042A5E0(a1, &fmtid);
  if ( v2 < 0 )
  {
    return 0;
  }
  else
  {
    *(_OWORD *)(a1 + 8) = MEMORY[0];
    sub_1406D9550(0LL);
  }
  return (unsigned int)v2;
}
