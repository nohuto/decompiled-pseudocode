/*
 * XREFs of sub_180028980 @ 0x180028980
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056680 @ 0x180056680 (sub_180056680.c)
 */

_QWORD *__fastcall sub_180028980(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 *v4; // rax
  __int64 v5; // xmm0_8
  _QWORD *result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v2 = *(_QWORD *)(a1 + 96);
  v3 = a2;
  if ( v2 )
  {
    v4 = (__int64 *)sub_180056680(v2, &v7, a2);
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
