/*
 * XREFs of sub_1407F7D6C @ 0x1407F7D6C
 * Callers:
 *     sub_1402A4E10 @ 0x1402A4E10 (sub_1402A4E10.c)
 * Callees:
 *     IoCheckLinkShareAccess @ 0x14074B530 (IoCheckLinkShareAccess.c)
 */

__int64 __fastcall sub_1407F7D6C(__int64 a1, _BYTE *a2, int a3, char a4)
{
  bool v4; // zf
  BOOL v5; // eax
  BOOL v6; // eax
  BOOL v7; // eax
  BOOL v8; // eax
  _DWORD v10[10]; // [rsp+30h] [rbp-28h] BYREF

  if ( **(_BYTE **)(a1 + 184) )
    return 3221225485LL;
  v4 = a2[75] == 0;
  v10[1] = a2[74] != 0;
  v5 = !v4;
  v10[0] = 1;
  v4 = a2[76] == 0;
  v10[2] = v5;
  v6 = !v4;
  v4 = a2[77] == 0;
  v10[3] = v6;
  v7 = !v4;
  v4 = a2[78] == 0;
  v10[4] = v7;
  v8 = !v4;
  v4 = a2[79] == 0;
  v10[5] = v8;
  v10[6] = !v4;
  return IoCheckLinkShareAccess(a3, a4, (__int64)a2, v10, 0LL, 2);
}
