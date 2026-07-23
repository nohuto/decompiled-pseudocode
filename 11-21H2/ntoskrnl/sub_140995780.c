/*
 * XREFs of sub_140995780 @ 0x140995780
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14036972C @ 0x14036972C (sub_14036972C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 */

__int64 __fastcall sub_140995780(__int64 a1)
{
  int v1; // edi
  bool v2; // bl
  bool v3; // zf
  unsigned int v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h] BYREF
  _DWORD v7[4]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 12;
  v1 = ExQueryWnfStateData(a1, &v6, v7, &v5);
  if ( v1 >= 0 )
  {
    if ( v5 == 12 )
    {
      v2 = v7[2] == 1;
      sub_1402D66A8((ULONG_PTR)&xmmword_140C22B48);
      byte_140C22B44 = v2;
      if ( v2 )
        v3 = dword_140C22B40 == 0;
      else
        v3 = dword_140C22B40 == 1;
      if ( v3 )
        sub_14036972C(0x40u);
      sub_1402935D0((ULONG_PTR)&xmmword_140C22B48);
    }
    else
    {
      return 128;
    }
  }
  return (unsigned int)v1;
}
