/*
 * XREFs of sub_140828BC0 @ 0x140828BC0
 * Callers:
 *     sub_1403C0A40 @ 0x1403C0A40 (sub_1403C0A40.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407EF098 @ 0x1407EF098 (sub_1407EF098.c)
 *     sub_1407EF120 @ 0x1407EF120 (sub_1407EF120.c)
 *     sub_140828D4C @ 0x140828D4C (sub_140828D4C.c)
 *     sub_140828EBC @ 0x140828EBC (sub_140828EBC.c)
 *     sub_14099CDDC @ 0x14099CDDC (sub_14099CDDC.c)
 */

__int64 __fastcall sub_140828BC0(__int64 *a1, int *a2, int a3)
{
  char v5; // r14
  char v6; // bp
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+40h] [rbp-18h]

  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  sub_1407EF098(1);
  v8 = *a1;
  v9 = 0x4DA1074E5ADBBFBCLL - *a1;
  if ( *a1 == 0x4DA1074E5ADBBFBCLL )
    v9 = 0xF3C8B2368BDB38BAuLL - a1[1];
  if ( !v9 )
  {
    if ( *a2 != dword_140C1F370 )
    {
      dword_140C1F370 = *a2;
      v5 = 1;
    }
    goto LABEL_18;
  }
  v10 = 0x4E07C8A83C0BC021LL - v8;
  if ( v8 == 0x4E07C8A83C0BC021LL )
    v10 = 0x7E2BCBCB146B73A9LL - a1[1];
  if ( !v10 )
  {
    if ( *a2 == dword_140C1F374 )
      goto LABEL_18;
    dword_140C1F374 = *a2;
LABEL_26:
    v6 = 1;
    goto LABEL_18;
  }
  v11 = 0x48C268688EC4B3A5LL - v8;
  if ( v8 == 0x48C268688EC4B3A5LL )
    v11 = 0xA788BE44304F75BEuLL - a1[1];
  if ( !v11 )
  {
    if ( *a2 == dword_140C1F368 )
      goto LABEL_18;
    dword_140C1F368 = *a2;
    goto LABEL_26;
  }
  v12 = 0x4AD1AC830A7D6AB6LL - v8;
  if ( v8 == 0x4AD1AC830A7D6AB6LL )
    v12 = 0xF30883B5A5EC8282uLL - a1[1];
  if ( !v12 )
  {
    dword_140C1F36C = *a2;
LABEL_18:
    sub_140828D4C();
    goto LABEL_19;
  }
  v7 = -1073741811;
LABEL_19:
  sub_1407EF120();
  v17 = 0;
  v16 = xmmword_1400256E0;
  if ( v5 )
  {
    sub_140828EBC(0LL, 20LL, &v16);
  }
  else if ( v6 && byte_140C1F418 )
  {
    sub_14099CDDC((unsigned int)dword_140C1F3B8, v13, v14, &v16);
  }
  return v7;
}
