/*
 * XREFs of sub_18002EB98 @ 0x18002EB98
 * Callers:
 *     sub_18002DFDC @ 0x18002DFDC (sub_18002DFDC.c)
 *     sub_1800628C8 @ 0x1800628C8 (sub_1800628C8.c)
 * Callees:
 *     sub_18002F0F0 @ 0x18002F0F0 (sub_18002F0F0.c)
 *     sub_18002F68C @ 0x18002F68C (sub_18002F68C.c)
 */

__int64 __fastcall sub_18002EB98(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  __int64 result; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_18002F0F0(a1, v7, a2);
  v5 = (unsigned __int8)sub_18002F68C(v4, v8, a2) == 0;
  result = v8;
  if ( v5 )
    return *(_QWORD *)a1;
  return result;
}
