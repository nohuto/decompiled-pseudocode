/*
 * XREFs of sub_14067EDC0 @ 0x14067EDC0
 * Callers:
 *     sub_1402089E0 @ 0x1402089E0 (sub_1402089E0.c)
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_1406E8680 @ 0x1406E8680 (sub_1406E8680.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_14090DEF0 @ 0x14090DEF0 (sub_14090DEF0.c)
 *     sub_14091CBB0 @ 0x14091CBB0 (sub_14091CBB0.c)
 *     sub_14091CE30 @ 0x14091CE30 (sub_14091CE30.c)
 *     sub_1409237B4 @ 0x1409237B4 (sub_1409237B4.c)
 *     sub_1409239EC @ 0x1409239EC (sub_1409239EC.c)
 * Callees:
 *     sub_14071EE7C @ 0x14071EE7C (sub_14071EE7C.c)
 */

__int64 __fastcall sub_14067EDC0(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v4; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 40) = -1;
  v2 = 1;
  ++*(_QWORD *)(a1 + 304);
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v4 || *(_BYTE *)(v4 + 65) != 3 )
    v2 = 0;
  *(_BYTE *)(a1 + 65) = v2;
  result = sub_14071EE7C(a1, a2);
  *(_DWORD *)(a1 + 100) = -1;
  *(_WORD *)(a1 + 186) &= 4u;
  *(_DWORD *)(a1 + 184) &= 0xFFFFFF00;
  *(_BYTE *)(a1 + 185) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  return result;
}
