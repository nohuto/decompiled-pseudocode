/*
 * XREFs of sub_1407EFD2C @ 0x1407EFD2C
 * Callers:
 *     sub_1407EFC00 @ 0x1407EFC00 (sub_1407EFC00.c)
 * Callees:
 *     sub_140369100 @ 0x140369100 (sub_140369100.c)
 *     sub_14036A5FC @ 0x14036A5FC (sub_14036A5FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405DC298 @ 0x1405DC298 (sub_1405DC298.c)
 *     sub_1407FD344 @ 0x1407FD344 (sub_1407FD344.c)
 *     sub_140863534 @ 0x140863534 (sub_140863534.c)
 *     sub_140989DD4 @ 0x140989DD4 (sub_140989DD4.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 *     sub_140A49250 @ 0x140A49250 (sub_140A49250.c)
 */

__int64 __fastcall sub_1407EFD2C(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx

  switch ( *(_DWORD *)a1 )
  {
    case 4:
      result = sub_1407FD344(a1 + 8, (unsigned int)(*(_DWORD *)a1 - 4));
      if ( (int)result < 0 )
        return result;
      break;
    case 7:
      if ( *(_BYTE *)(a1 + 20) && *(_DWORD *)(a1 + 12) == 18 )
        sub_140A49250(5LL);
      break;
    case 8:
      sub_14036A5FC((unsigned int *)(a1 + 8));
      break;
    case 0xA:
      if ( *(_BYTE *)(a1 + 8) )
        sub_140989DD4();
      sub_140863534();
      if ( qword_140C5AE00 )
        sub_14042A5E0(v3, v2);
      break;
    case 0xE:
      v4 = *(_DWORD *)(a1 + 8);
      sub_140A48330(a1);
      dword_140C22710 = v4;
      if ( byte_140C22731 )
      {
        sub_140369100(4u);
        sub_1405DC298();
      }
      sub_140A47CF8(v6, v5);
      break;
  }
  return 0LL;
}
