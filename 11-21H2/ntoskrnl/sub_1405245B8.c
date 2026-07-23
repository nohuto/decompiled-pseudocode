/*
 * XREFs of sub_1405245B8 @ 0x1405245B8
 * Callers:
 *     sub_140A53294 @ 0x140A53294 (sub_140A53294.c)
 *     sub_140A6313C @ 0x140A6313C (sub_140A6313C.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int16 __fastcall sub_1405245B8(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  unsigned __int16 result; // ax
  unsigned __int16 v8; // [rsp+30h] [rbp-19h]
  _DWORD v9[16]; // [rsp+40h] [rbp-9h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( a4 )
  {
    sub_14042A5E0(a2, a3);
    result = sub_14042A5E0(a2, a3);
    if ( (v9[1] & 1) != 0 )
    {
      v8 = v9[8] & 0xFFFC;
      if ( (v9[8] & 0xFFFFFFFC) - 1 <= 0xFFFD )
      {
        result = __inword(v9[8] & 0xFFFC);
        if ( (result & 8) == 0 )
        {
          __outword(v8, 4u);
          KeStallExecutionProcessor(0x2710u);
          result = 0;
          __outword(v8, 0);
        }
      }
    }
  }
  else
  {
    sub_14042A5E0(a2, a3);
    return sub_14042A5E0(a2, a3);
  }
  return result;
}
