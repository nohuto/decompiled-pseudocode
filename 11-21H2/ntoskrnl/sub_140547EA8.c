/*
 * XREFs of sub_140547EA8 @ 0x140547EA8
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140578AD8 @ 0x140578AD8 (sub_140578AD8.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140547A48 @ 0x140547A48 (sub_140547A48.c)
 */

__int64 __fastcall sub_140547EA8(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 result; // rax
  _BYTE v4[112]; // [rsp+20h] [rbp-88h] BYREF

  v2 = a1;
  if ( !byte_140D06888 || (dword_140C48978 = (unsigned int)dword_140C48978 >> 1, (_BYTE)a1) )
  {
    if ( (dword_140D0688C & 2) != 0 )
      sub_140547A48(2);
    if ( byte_140D06888 )
    {
      if ( v2 )
      {
        memset(v4, 0, 0x68uLL);
        sub_140358A20(2u, 2051, 0, (__int64)v4);
      }
    }
    dword_140D0689C = dword_140D06A28;
    return sub_14042A5E0(a1, a2);
  }
  return result;
}
