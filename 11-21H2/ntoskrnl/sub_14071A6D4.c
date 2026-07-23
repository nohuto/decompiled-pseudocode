/*
 * XREFs of sub_14071A6D4 @ 0x14071A6D4
 * Callers:
 *     sub_1406A52D4 @ 0x1406A52D4 (sub_1406A52D4.c)
 *     sub_14071A4E8 @ 0x14071A4E8 (sub_14071A4E8.c)
 *     sub_1407C3070 @ 0x1407C3070 (sub_1407C3070.c)
 *     sub_1407C64A0 @ 0x1407C64A0 (sub_1407C64A0.c)
 *     sub_1409176B0 @ 0x1409176B0 (sub_1409176B0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140720F74 @ 0x140720F74 (sub_140720F74.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 */

char __fastcall sub_14071A6D4(__int64 a1, __int64 a2)
{
  char v3; // bl
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  WORD1(v5) = -1;
  *(_OWORD *)Privileges = 0LL;
  sub_1407C05F4(&v5, a1);
  v3 = sub_140720F74(&v5, a2);
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  return v3;
}
