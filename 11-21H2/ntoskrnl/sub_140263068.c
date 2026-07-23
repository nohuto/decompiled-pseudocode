/*
 * XREFs of sub_140263068 @ 0x140263068
 * Callers:
 *     sub_140266158 @ 0x140266158 (sub_140266158.c)
 *     sub_140352D04 @ 0x140352D04 (sub_140352D04.c)
 *     sub_1403D452C @ 0x1403D452C (sub_1403D452C.c)
 * Callees:
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140263068(__int64 *a1)
{
  __int64 *v1; // rdi
  __int64 *v2; // rbx
  char v3; // al
  unsigned int v4; // ecx
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = (__int64 *)*v1;
      v3 = sub_1402F2700(v1);
      v4 = *((_BYTE *)v1 + 34) & 7;
      v6 = 0LL;
      v5[1] = v4;
      LOBYTE(v6) = v3;
      v5[0] = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v1 + 0x44000000000LL) >> 4);
      sub_1402BEEA0(v5);
      v1 = v2;
    }
    while ( v2 );
  }
}
