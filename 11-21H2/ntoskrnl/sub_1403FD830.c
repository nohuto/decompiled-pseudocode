/*
 * XREFs of sub_1403FD830 @ 0x1403FD830
 * Callers:
 *     sub_140569F80 @ 0x140569F80 (sub_140569F80.c)
 * Callees:
 *     sub_140259650 @ 0x140259650 (sub_140259650.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403FDE00 @ 0x1403FDE00 (sub_1403FDE00.c)
 *     sub_1403FE0B0 @ 0x1403FE0B0 (sub_1403FE0B0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056AF50 @ 0x14056AF50 (sub_14056AF50.c)
 *     sub_14056AF68 @ 0x14056AF68 (sub_14056AF68.c)
 *     sub_14056AF80 @ 0x14056AF80 (sub_14056AF80.c)
 */

__int64 __fastcall sub_1403FD830(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE v11[64]; // [rsp+40h] [rbp-78h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( (((unsigned __int8)dword_140C094E0 | (unsigned __int8)sub_140259650()) & 0x10) != 0
    || (unsigned int)sub_14056AF80(v11) )
  {
    if ( (((unsigned __int8)dword_140C094E0 | (unsigned __int8)sub_140259650()) & 2) != 0
      || (unsigned int)sub_140259650() )
    {
      return sub_1403FE0B0((unsigned int)&off_140006860, a1, a2, a3, a4, a5, a6);
    }
    else
    {
      sub_1403FDE00((unsigned int)&off_140006860, a1, a2, a3, a4, a5, a6, 4);
      return sub_14056AF50(v11);
    }
  }
  else
  {
    sub_1403FDE00((unsigned int)&off_140006860, a1, a2, a3, a4, a5, a6, 8);
    return sub_14056AF68(v11);
  }
}
