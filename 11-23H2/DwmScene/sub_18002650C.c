/*
 * XREFs of sub_18002650C @ 0x18002650C
 * Callers:
 *     sub_180026F80 @ 0x180026F80 (sub_180026F80.c)
 *     sub_18005E124 @ 0x18005E124 (sub_18005E124.c)
 *     sub_1800C4D60 @ 0x1800C4D60 (sub_1800C4D60.c)
 *     sub_1800C5100 @ 0x1800C5100 (sub_1800C5100.c)
 *     sub_1800C72E0 @ 0x1800C72E0 (sub_1800C72E0.c)
 * Callees:
 *     sub_180056698 @ 0x180056698 (sub_180056698.c)
 */

_QWORD *__fastcall sub_18002650C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 *v4; // rax
  __int64 v5; // xmm0_8
  _QWORD *result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v2 = *(_QWORD *)(a1 + 136);
  v3 = a2;
  if ( v2 )
  {
    v4 = (__int64 *)sub_180056698(v2, &v7, a2);
  }
  else
  {
    v7 = 0;
    v4 = (__int64 *)&v7;
    v8 = 0;
  }
  v5 = *v4;
  result = v3;
  *v3 = v5;
  return result;
}
