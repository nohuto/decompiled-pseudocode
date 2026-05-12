/*
 * XREFs of sub_1C0013D28 @ 0x1C0013D28
 * Callers:
 *     sub_1C0013934 @ 0x1C0013934 (sub_1C0013934.c)
 *     sub_1C0060100 @ 0x1C0060100 (sub_1C0060100.c)
 * Callees:
 *     sub_1C00AA894 @ 0x1C00AA894 (sub_1C00AA894.c)
 */

__int64 __fastcall sub_1C0013D28(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 result; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]

  v6 = 0;
  if ( a2 )
  {
    v2 = *(_DWORD *)(a2 + 184);
    if ( v2 )
    {
      v4[0] = *(_QWORD *)(a2 + 168);
      v4[1] = *(_QWORD *)(a2 + 176);
      v5 = v2;
      return sub_1C00AA894(a1, v4);
    }
  }
  return result;
}
