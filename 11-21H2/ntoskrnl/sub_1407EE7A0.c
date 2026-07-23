/*
 * XREFs of sub_1407EE7A0 @ 0x1407EE7A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_14036976C @ 0x14036976C (sub_14036976C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 *     sub_1407EDF80 @ 0x1407EDF80 (sub_1407EDF80.c)
 *     sub_1407EE888 @ 0x1407EE888 (sub_1407EE888.c)
 *     sub_1407EE8D0 @ 0x1407EE8D0 (sub_1407EE8D0.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 *     sub_14099D0FC @ 0x14099D0FC (sub_14099D0FC.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1407EE7A0(__int64 a1)
{
  int v1; // ecx
  int v2; // edi
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v9[8]; // [rsp+30h] [rbp-18h] BYREF

  v7 = 8;
  v2 = ExQueryWnfStateData(a1, &v8, v9, &v7);
  if ( v2 >= 0 )
  {
    if ( v7 < 8 )
    {
      return 0;
    }
    else
    {
      sub_140A48330(v1);
      if ( (v9[0] & 2) != 0 )
      {
        byte_140C2330D = 1;
        qword_140C54198 = MEMORY[0xFFFFF78000000008];
        if ( (unsigned int)sub_14036976C() == 2 )
          sub_14099D0FC(0LL, 5LL);
      }
      else
      {
        byte_140C2330D = 0;
        sub_1407EE8D0(0LL);
      }
      v3 = byte_140C2330D;
      sub_140753094(1);
      if ( byte_140C24512 != v3 )
      {
        byte_140C24512 = v3;
        sub_1407EDF80(0, v3);
      }
      sub_1407EE888();
      sub_1402935D0((ULONG_PTR)&qword_140C24280);
      sub_140A47CF8(v5, v4);
    }
  }
  return (unsigned int)v2;
}
