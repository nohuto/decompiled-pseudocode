/*
 * XREFs of SeQuerySecurityAttributesTokenAccessInformation @ 0x14024C270
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402E1484 @ 0x1402E1484 (sub_1402E1484.c)
 *     sub_140300534 @ 0x140300534 (sub_140300534.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall SeQuerySecurityAttributesTokenAccessInformation(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v10; // edx
  _BYTE v12[1184]; // [rsp+40h] [rbp-4E8h] BYREF

  memset(v12, 0, 0x498uLL);
  if ( a5 )
  {
    if ( a4 )
    {
LABEL_3:
      sub_1402E1484(a1, v12);
      return sub_140300534((unsigned int)v12, v10, a2, a3, 0, a4, a5, a6);
    }
  }
  else if ( !a4 )
  {
    goto LABEL_3;
  }
  return 3221225485LL;
}
