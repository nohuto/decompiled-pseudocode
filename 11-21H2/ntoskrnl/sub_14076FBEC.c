/*
 * XREFs of sub_14076FBEC @ 0x14076FBEC
 * Callers:
 *     sub_140660388 @ 0x140660388 (sub_140660388.c)
 *     sub_14066044C @ 0x14066044C (sub_14066044C.c)
 *     sub_140747FB4 @ 0x140747FB4 (sub_140747FB4.c)
 *     sub_1407483B4 @ 0x1407483B4 (sub_1407483B4.c)
 *     sub_14074B420 @ 0x14074B420 (sub_14074B420.c)
 *     sub_140764BE0 @ 0x140764BE0 (sub_140764BE0.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_140766C3C @ 0x140766C3C (sub_140766C3C.c)
 *     sub_140767AEC @ 0x140767AEC (sub_140767AEC.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_14076F8AC @ 0x14076F8AC (sub_14076F8AC.c)
 *     sub_14080E8D0 @ 0x14080E8D0 (sub_14080E8D0.c)
 *     sub_14081059C @ 0x14081059C (sub_14081059C.c)
 *     sub_14081F69C @ 0x14081F69C (sub_14081F69C.c)
 *     sub_14081F6E0 @ 0x14081F6E0 (sub_14081F6E0.c)
 *     sub_14081FCD8 @ 0x14081FCD8 (sub_14081FCD8.c)
 *     sub_140831280 @ 0x140831280 (sub_140831280.c)
 *     sub_140947934 @ 0x140947934 (sub_140947934.c)
 *     sub_140958D9C @ 0x140958D9C (sub_140958D9C.c)
 *     sub_140959B60 @ 0x140959B60 (sub_140959B60.c)
 *     sub_14095B2D4 @ 0x14095B2D4 (sub_14095B2D4.c)
 * Callees:
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 */

__int64 __fastcall sub_14076FBEC(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  v3 = v2 & ~a2;
  *(_DWORD *)(a1 + 396) = v3;
  if ( ((v2 ^ v3) & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      sub_140772044(a1, v5, 11LL);
      v6 = *(unsigned int *)(a1 + 396);
      result = v2 ^ *(_DWORD *)(a1 + 396);
      if ( (((unsigned __int16)v2 ^ *(_WORD *)(a1 + 396)) & 0x4000) != 0 )
      {
        result = sub_140772044(v6, *(_QWORD *)(a1 + 48), 28LL);
        LODWORD(v6) = *(_DWORD *)(a1 + 396);
      }
      v8 = v2 ^ (unsigned int)v6;
      if ( (v8 & 0x2000) != 0 )
        return sub_140772044(v8, *(_QWORD *)(a1 + 48), 27LL);
    }
  }
  return result;
}
