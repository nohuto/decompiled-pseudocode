/*
 * XREFs of sub_140922400 @ 0x140922400
 * Callers:
 *     sub_1409226E0 @ 0x1409226E0 (sub_1409226E0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 *     sub_14069EDC0 @ 0x14069EDC0 (sub_14069EDC0.c)
 *     sub_14069F150 @ 0x14069F150 (sub_14069F150.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_14069F2B4 @ 0x14069F2B4 (sub_14069F2B4.c)
 *     sub_14071B4A0 @ 0x14071B4A0 (sub_14071B4A0.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 */

__int64 __fastcall sub_140922400(__int64 a1)
{
  ULONG_PTR v2; // rdi
  int v3; // ebx
  __int64 v4; // rax
  __int16 v6[40]; // [rsp+20h] [rbp-68h] BYREF

  memset(v6, 0, 0x4AuLL);
  sub_14069F2B4((char *)v6);
  v2 = sub_140721CE0(a1, *(_WORD *)(a1 + 2));
  v3 = sub_14069EDC0((__int64)v6, a1, 0LL);
  if ( v3 >= 0 )
  {
    v3 = sub_14065AAAC(0LL, v6);
    if ( v3 >= 0 )
    {
      v4 = sub_14069F1CC((__int64)v6, *(_WORD *)(a1 + 2));
      ++*(_QWORD *)(v2 + 304);
      sub_14071B4A0(v2, *(_QWORD *)(v4 + 16), 0LL, 0);
      v3 = 0;
    }
  }
  sub_14069F150((__int64)v6);
  return (unsigned int)v3;
}
