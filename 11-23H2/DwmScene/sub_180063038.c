/*
 * XREFs of sub_180063038 @ 0x180063038
 * Callers:
 *     sub_180068E68 @ 0x180068E68 (sub_180068E68.c)
 * Callees:
 *     sub_18001EA34 @ 0x18001EA34 (sub_18001EA34.c)
 *     sub_180062C58 @ 0x180062C58 (sub_180062C58.c)
 */

_BOOL8 __fastcall sub_180063038(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 *v5; // r11
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (__int64)a2;
  if ( (unsigned __int64)a2[3] >= 8 )
    v3 = *a2;
  v4 = sub_18001EA34(v3, a2[2]);
  return sub_180062C58(a1, v7, v5, v4)[1] != 0LL;
}
