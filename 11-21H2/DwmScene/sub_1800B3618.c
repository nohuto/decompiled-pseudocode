/*
 * XREFs of sub_1800B3618 @ 0x1800B3618
 * Callers:
 *     sub_1800B3798 @ 0x1800B3798 (sub_1800B3798.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18002ABBC @ 0x18002ABBC (sub_18002ABBC.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_18002CCFC @ 0x18002CCFC (sub_18002CCFC.c)
 *     sub_18002D554 @ 0x18002D554 (sub_18002D554.c)
 *     sub_1800B3B80 @ 0x1800B3B80 (sub_1800B3B80.c)
 *     sub_1800B5738 @ 0x1800B5738 (sub_1800B5738.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800B3618(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rax
  __int64 i; // rdi
  __int64 j; // rcx
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 k; // rax
  __int64 m; // rcx
  _BYTE v11[136]; // [rsp+20h] [rbp-A8h] BYREF
  char *v12[3]; // [rsp+A8h] [rbp-20h] BYREF

  sub_18002C84C(a1);
  sub_18002D554((__int64)v11);
  v2 = **(__int64 ***)(a1 + 48);
  while ( v2 != *(__int64 **)(a1 + 48) )
  {
    if ( (unsigned int)sub_1800B5738(*(_QWORD *)(a1 + 16 * (v2[4] + 4)), v11, 0LL) == 3 )
    {
      sub_1800B3B80(a1 + 8, v2 + 4);
      v3 = v2;
      i = v2[2];
      if ( *(_BYTE *)(i + 25) )
      {
        for ( i = v2[1]; !*(_BYTE *)(i + 25) && v3 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
          v3 = (__int64 *)i;
      }
      else
      {
        for ( j = *(_QWORD *)i; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
          i = j;
      }
      v6 = sub_18002ABBC((_QWORD *)(a1 + 48), v2);
      sub_180010884((char *)v6, 0x28uLL);
      v2 = (__int64 *)i;
    }
    else
    {
      v7 = v2[2];
      if ( *(_BYTE *)(v7 + 25) )
      {
        for ( k = v2[1]; !*(_BYTE *)(k + 25) && v2 == *(__int64 **)(k + 16); k = *(_QWORD *)(k + 8) )
          v2 = (__int64 *)k;
        v2 = (__int64 *)k;
      }
      else
      {
        v2 = (__int64 *)v2[2];
        for ( m = *(_QWORD *)v7; !*(_BYTE *)(m + 25); m = *(_QWORD *)m )
          v2 = (__int64 *)m;
      }
    }
  }
  sub_18002CCFC((__int64)v12, (__int64)v12, *((char **)v12[0] + 1));
  sub_180010884(v12[0], 0x58uLL);
  return j_LanguageEnumProc(a1);
}
