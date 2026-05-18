/*
 * XREFs of sub_1800B3248 @ 0x1800B3248
 * Callers:
 *     sub_1800B3360 @ 0x1800B3360 (sub_1800B3360.c)
 * Callees:
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800B33A4 @ 0x1800B33A4 (sub_1800B33A4.c)
 *     sub_1800B5738 @ 0x1800B5738 (sub_1800B5738.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800B3248(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v6; // eax
  unsigned __int64 *v8; // rdx
  unsigned __int64 *v9; // r8
  unsigned __int64 *v10; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  sub_18002C84C(a1);
  sub_1800B33A4(a1, v11, a2);
  if ( !v11[0] )
  {
    v8 = (unsigned __int64 *)(a1 + 144);
    v9 = (unsigned __int64 *)(a1 + 144);
    if ( a1 + 144 != a1 + 184 )
    {
      while ( ++v8 != (unsigned __int64 *)(a1 + 184) )
      {
        v10 = v8;
        if ( *v8 >= *v9 )
          v10 = v9;
        v9 = v10;
      }
    }
    if ( a2 < *v9 )
    {
      j_LanguageEnumProc(a1);
      return 2LL;
    }
    goto LABEL_19;
  }
  v6 = sub_1800B5738(*(_QWORD *)(a1 + 16 * v12 + 64), a3, 0LL);
  if ( !v6 )
  {
LABEL_19:
    j_LanguageEnumProc(a1);
    return 3LL;
  }
  if ( v6 <= 0 )
    goto LABEL_6;
  if ( v6 <= 2 )
  {
    j_LanguageEnumProc(a1);
    return 1LL;
  }
  else
  {
    if ( v6 != 3 )
    {
LABEL_6:
      j_LanguageEnumProc(a1);
      return 4LL;
    }
    j_LanguageEnumProc(a1);
    return 0LL;
  }
}
