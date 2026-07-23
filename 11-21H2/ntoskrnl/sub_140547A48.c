/*
 * XREFs of sub_140547A48 @ 0x140547A48
 * Callers:
 *     sub_140547AF4 @ 0x140547AF4 (sub_140547AF4.c)
 *     sub_140547EA8 @ 0x140547EA8 (sub_140547EA8.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_140547A48(int a1)
{
  char result; // al
  _DWORD *v3; // rax
  __int128 v4; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+30h] [rbp-38h]
  __int64 v6; // [rsp+38h] [rbp-30h]
  _BYTE v7[16]; // [rsp+40h] [rbp-28h] BYREF

  v5 = 0LL;
  LODWORD(v6) = 0;
  result = dword_140D068B8;
  v4 = 0LL;
  if ( (dword_140D068B8 & 4) != 0 )
  {
    v3 = sub_14039DF90((PHYSICAL_ADDRESS *)&v4, 1, (__int64)v7, 8LL);
    *v3 = 2;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v3[1] = 2;
      }
      else
      {
        if ( a1 != 2 )
          return sub_14039D8F0((__int64)&v4);
        v3[1] = 3;
      }
    }
    else
    {
      v3[1] = 1;
    }
    HvlInvokeHypercall(135);
    return sub_14039D8F0((__int64)&v4);
  }
  return result;
}
