/*
 * XREFs of sub_1407FE700 @ 0x1407FE700
 * Callers:
 *     sub_1405DC0A0 @ 0x1405DC0A0 (sub_1405DC0A0.c)
 *     sub_1405DC12C @ 0x1405DC12C (sub_1405DC12C.c)
 *     sub_1407FE640 @ 0x1407FE640 (sub_1407FE640.c)
 *     sub_140997374 @ 0x140997374 (sub_140997374.c)
 *     sub_1409973C0 @ 0x1409973C0 (sub_1409973C0.c)
 *     sub_14099CD30 @ 0x14099CD30 (sub_14099CD30.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407FE7DC @ 0x1407FE7DC (sub_1407FE7DC.c)
 *     sub_1407FE82C @ 0x1407FE82C (sub_1407FE82C.c)
 */

__int64 __fastcall sub_1407FE700(char a1, int *a2)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]

  v5 = 0LL;
  DWORD2(v5) = 1;
  v6 = 0LL;
  if ( a1 )
  {
    result = sub_1407FE7DC(&v5);
    *a2 = result;
  }
  else
  {
    v4 = *a2;
    LODWORD(v6) = 7;
    return sub_1407FE82C(&v5, &v4);
  }
  return result;
}
