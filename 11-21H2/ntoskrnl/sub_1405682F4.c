/*
 * XREFs of sub_1405682F4 @ 0x1405682F4
 * Callers:
 *     sub_140567DA0 @ 0x140567DA0 (sub_140567DA0.c)
 *     sub_140A656A0 @ 0x140A656A0 (sub_140A656A0.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     sub_1405228C8 @ 0x1405228C8 (sub_1405228C8.c)
 */

char __fastcall sub_1405682F4(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( !sub_14028FBF0(a1) )
    return 0;
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v5 = 257;
  if ( a1 - (a1 & 0xFFFFFFFFFFFFF000uLL) > 0xEFF && (v4 + 4096 < v4 || v4 == -4096LL || !sub_14028FBF0(v4 + 4096)) )
    v5 = v4 - a1 + 4096;
  if ( (int)sub_1405228C8((_BYTE *)a1, v5, &v7) < 0 )
    return 0;
  *a2 = v7;
  return 1;
}
