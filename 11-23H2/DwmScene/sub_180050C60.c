/*
 * XREFs of sub_180050C60 @ 0x180050C60
 * Callers:
 *     sub_18004FECC @ 0x18004FECC (sub_18004FECC.c)
 * Callees:
 *     sub_18004DA8C @ 0x18004DA8C (sub_18004DA8C.c)
 */

__int64 *__fastcall sub_180050C60(__int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 *result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  sub_18004DA8C(a1, (__int64)v8, a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *a3 < *(_QWORD *)(v9 + 32) )
    v6 = *a1;
  result = v5;
  *v5 = v6;
  return result;
}
