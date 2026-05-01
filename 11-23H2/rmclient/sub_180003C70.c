/*
 * XREFs of sub_180003C70 @ 0x180003C70
 * Callers:
 *     sub_180003A40 @ 0x180003A40 (sub_180003A40.c)
 *     sub_180019840 @ 0x180019840 (sub_180019840.c)
 * Callees:
 *     sub_1800017F4 @ 0x1800017F4 (sub_1800017F4.c)
 *     sub_180004900 @ 0x180004900 (sub_180004900.c)
 *     sub_180004930 @ 0x180004930 (sub_180004930.c)
 */

__int64 __fastcall sub_180003C70(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  unsigned int v6; // r11d
  bool v7; // zf
  _QWORD *v8; // r8
  __int64 v9; // r9

  if ( (unsigned int)sub_180004900(a2, &xmmword_1800261A0) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    result = sub_1800017F4(v4 + 8, a2);
    v6 = -2147467262;
    v7 = (_DWORD)result == -2147467262;
    if ( (_DWORD)result == -2147467262 )
    {
      if ( (unsigned int)sub_180004900(a2, &xmmword_1800261E0) )
      {
        *v8 = v9;
        result = 0LL;
      }
      else
      {
        result = sub_180004930(v9 + 8, a2);
        if ( (_DWORD)result == v6 )
          result = v6;
      }
      v7 = (_DWORD)result == v6;
    }
    if ( v7 )
      return v6;
  }
  return result;
}
