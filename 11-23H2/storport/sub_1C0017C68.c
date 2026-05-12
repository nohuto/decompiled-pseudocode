/*
 * XREFs of sub_1C0017C68 @ 0x1C0017C68
 * Callers:
 *     sub_1C0017AF4 @ 0x1C0017AF4 (sub_1C0017AF4.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00404D0 @ 0x1C00404D0 (sub_1C00404D0.c)
 *     sub_1C005CA3C @ 0x1C005CA3C (sub_1C005CA3C.c)
 */

char __fastcall sub_1C0017C68(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // edx
  int v7; // ecx
  int v8; // r9d
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v5 = *(_QWORD *)(v4 + 96);
  else
    v5 = *(_QWORD *)(v4 + 48);
  if ( (*(_BYTE *)(v5 + 16) & 2) != 0 )
  {
    LOBYTE(v2) = sub_1C00404D0(*(_QWORD *)(a1 + 504), v5 + 48);
    if ( byte_1C0093BE8 )
    {
      v10 = 0LL;
      IoGetActivityIdIrp(a2, &v10);
      LOBYTE(v2) = byte_1C0093A02;
      if ( byte_1C0093A02 < 0 )
        LOBYTE(v2) = sub_1C005CA3C(v7, v6, (unsigned int)&v10, v8, 4);
    }
  }
  return v2;
}
