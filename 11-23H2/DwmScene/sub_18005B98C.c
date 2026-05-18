/*
 * XREFs of sub_18005B98C @ 0x18005B98C
 * Callers:
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 * Callees:
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_180050854 @ 0x180050854 (sub_180050854.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 */

__int64 __fastcall sub_18005B98C(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = sub_18008141C(a1);
  result = sub_180034870(v4);
  v6 = result;
  v7 = **(_QWORD **)(a1 + 1616);
  v8 = v7;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    if ( *(_DWORD *)(v7 + 32) == -1 || *(_DWORD *)(v7 + 32) == a2 )
      sub_180050854(v6);
    result = (__int64)sub_18001D3F8(&v8);
    v7 = v8;
  }
  return result;
}
