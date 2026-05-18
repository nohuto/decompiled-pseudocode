/*
 * XREFs of sub_18002EB5C @ 0x18002EB5C
 * Callers:
 *     sub_180033EB4 @ 0x180033EB4 (sub_180033EB4.c)
 *     sub_180033F90 @ 0x180033F90 (sub_180033F90.c)
 *     sub_18006A694 @ 0x18006A694 (sub_18006A694.c)
 * Callees:
 *     sub_18002F09C @ 0x18002F09C (sub_18002F09C.c)
 */

__int64 __fastcall sub_18002EB5C(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_18002F09C(a1, v5, a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *(_QWORD *)(v3 + 8) < *(_QWORD *)(v6 + 40) )
    return *(_QWORD *)v2;
  return result;
}
